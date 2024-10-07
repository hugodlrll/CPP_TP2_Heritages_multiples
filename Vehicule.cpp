#include "Vehicule.hpp"
 
Vehicule::Vehicule(int vitesseMax, int nbPlaces, int occupants) {
    this->vitesseMax_ = vitesseMax;
    this->nbPlaces_ = nbPlaces;
    this->occupants_ = occupants;
    this-> etat_ = ARRET;
    this->vitesse_ = 0;
}

Vehicule::~Vehicule() {
    
}

void Vehicule::mettreEnPanne(double random) {
    if(random < 0.5) {
        this->etat_ = this->PANNE_LEGERE;
    } else {
        this->etat_ = this->PANNE_SEVERE;
    }   
}

string Vehicule::getEtat() const{
    std::string etatSTR = "Véhicule en ";
    switch(this->etat_){
        case ARRET:
            etatSTR += "arrêt";
            break;
        case MARCHE:
            etatSTR += "marche";
            break;
        case PANNE_LEGERE:
            etatSTR += "panne légère";
            break;
        case PANNE_SEVERE:
            etatSTR += "panne sévère";
            break;
        default:
            etatSTR += "état indéfini";
            break;
    }
    return etatSTR;
}

void Vehicule::demarrer() {
    if(this->etat_ != ARRET)
        throw std::invalid_argument("Impossible de démarrer : " + this->getEtat() + "\n");
    else
        this->etat_ = MARCHE;
}
    
void Vehicule::arreter() {
    if(this->etat_ == ARRET)
        throw std::invalid_argument("Impossible de l'arrêter : " + this->getEtat() + "\n");
    else
        this->etat_ = ARRET;
}

void Vehicule::depanner() {
    if(this->etat_ != PANNE_LEGERE && this->etat_ != PANNE_SEVERE)
        throw std::invalid_argument("Le véhicule est déjà opérationel\n");
    else
        this->etat_ = ARRET;
}

void Vehicule::accelerer(int increment) {
    if(this->etat_ == MARCHE) {
        if((this->vitesse_ + increment) <= vitesseMax_)
            this->vitesse_ += increment;
        else
            throw std::invalid_argument("Le véhicule ne peut pas dépasser " + to_string(this->vitesseMax_) + "\n");
    } else {
         throw std::invalid_argument("Il n'est pas possible d'accelérer quand le véhicule est à l'arrêt\n");
    }
}

void Vehicule::freiner(int increment) {
    if(this->etat_ == MARCHE) {
        if((this->vitesse_ -increment) >= 0)
            this->vitesse_ -= increment;
        else
            throw std::invalid_argument("La vitesse ne peut pas être négative\n");
    } else {
        throw std::invalid_argument("Hé couillon, ça sert à quoi de ralentir si t'es à l'arrêt\n");
    }
}

void Vehicule::monter(int nbOcc) {
    if(this->etat_ == ARRET){
        if((this->occupants_ + nbOcc) <= this-> nbPlaces_)
            this->occupants_ += nbOcc;
        else
            throw std::invalid_argument("Le véhicule ne peut pas embarquer " + to_string(nbOcc) + " nouveaux passager(s)\n");
    } else {
        throw std::invalid_argument("Le véhicule est en marche, c'est pas un rodéo, abandonne si tu tiens à la vie\n");
    }
}

void Vehicule::descendre(int nbOcc) {
    if(this->etat_ == ARRET){
        if((this->occupants_ -nbOcc) >= 0)
            this->occupants_ -= nbOcc;
        else
            throw std::invalid_argument("Il y a moins de "  + to_string(nbOcc) + " passager(s) dans le véhicule\n");
    } else {
        throw std::invalid_argument("Le véhicule est en marche, bon courage pour descendre en vie\n");
    }
}

ostream& operator<<(ostream& s,Vehicule const& v) {
    s << "--------- Véhicule ---------" << endl;
    s << "Etat: " << v.getEtat() << endl;
    s << "Vitesse: " << to_string(v.vitesse_) << endl;
    s << "Vitesse max: " << v.vitesseMax_ << endl;
    s << "Nombre de places: " << v.nbPlaces_ << endl;
    s << "Nombre d'occupants: " << v.occupants_ << endl;
    return s;
}
