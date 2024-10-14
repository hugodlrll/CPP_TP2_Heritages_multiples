#include "VoitureAmphibie.hpp"

using namespace std;

VoitureAmphibie::VoitureAmphibie(): Voiture(), Bateau()  // Héritage multiple de voiture et bateau
{

}

void VoitureAmphibie::afficheAttributs()
{
    cout << "--- Vehicule amphibie ---" << endl;
    cout << "--- Voiture ---" << endl;
    cout << "Nombre de places : " << this->Voiture::nbPlaces_ << endl;
    cout << "Nombre d'occupants : " << this->Voiture::occupants_ << endl;
    cout << "Vitesse : " << this->Voiture::vitesse_ << endl;
    cout << "Vitesse max : " << this->Voiture::vitesseMax_ << endl;
    cout << "--- Bateau ---" << endl;
    cout << "Nombre de places : " << this->Bateau::nbPlaces_ << endl;
    cout << "Nombre d'occupants : " << this->Bateau::occupants_ << endl;
    cout << "Vitesse : " << this->Bateau::vitesse_ << endl;
    cout << "Vitesse max : " << this->Bateau::vitesseMax_ << endl;
}
