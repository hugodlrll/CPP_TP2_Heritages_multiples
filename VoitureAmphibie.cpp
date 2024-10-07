#include "VoitureAmphibie.hpp"

using namespace std;

VoitureAmphibie::VoitureAmphibie(int TypeVehicule){
    this->TypeVehicule_ = TypeVehicule;
}

void VoitureAmphibie::demarrer(){
    cout << "Démarrage d'une voiture amphibie" << endl;
}

void VoitureAmphibie::arreter(){
    cout << "Arrêt d'une voiture amphibie" << endl;
}

void VoitureAmphibie::transformers(){
    this->TypeVehicule_ = !this->TypeVehicule_;
    if (this->TypeVehicule_){
        cout << "Blop blop blop, passage en mode aquatique" << endl;
    } else {
        cout << "Vrou vroum, laissez passer les casse-cous !!" << endl;
    }
}

void VoitureAmphibie::getType() {
    if (this->TypeVehicule_){
        cout << "Véhicule en mode amphibie" << endl;
    } else {
        cout << "Véhicule en mode terre" << endl;
    }
}