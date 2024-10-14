#include "Bateau.hpp"

using namespace std;

Bateau::Bateau(): Vehicule(150, 5, 1){ // Construction d'un Bateau   
}

void Bateau::demarrer(){
    cout << "Démarrage d'un bateau" << endl;
}

void Bateau::arreter(){
    cout << "Arrêt d'un bateau" << endl;
}