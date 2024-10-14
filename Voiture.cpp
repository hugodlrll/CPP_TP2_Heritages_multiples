#include "Voiture.hpp"

using namespace std;

Voiture::Voiture() : Vehicule(150, 5, 1){ // Construction d'un véhicule 
}

void Voiture::demarrer(){
    Vehicule::demarrer();
    cout << "Démarrage d'une voiture" << endl;
}

void Voiture::arreter(){
    Vehicule::arreter();
    cout << "Arrêt d'une voiture" << endl;
}