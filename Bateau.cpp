#include "Bateau.hpp"

using namespace std;

Bateau::Bateau(): Vehicule(300, 2, 2){ // Construction d'un Bateau   
}

void Bateau::demarrer(){
    Vehicule::demarrer();
    cout << "Démarrage d'un bateau" << endl;
}

void Bateau::arreter(){
    Vehicule::arreter();
    cout << "Arrêt d'un bateau" << endl;
}