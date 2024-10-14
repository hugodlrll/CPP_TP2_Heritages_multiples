//
//  Vehicule.hpp
//  TP_HM_Exc
//
//  Created by Myriam Servières on 28/11/2021.
//

#ifndef Vehicule_hpp
#define Vehicule_hpp

#include <stdexcept>
#include <iostream>

using namespace std;

class Vehicule
{
protected:
    int        vitesse_;
    int        vitesseMax_;
    int        nbPlaces_;
    int        occupants_;
    int        etat_;
    
public:
    enum EtatVehicule {ARRET, MARCHE, PANNE_LEGERE, PANNE_SEVERE};
    
    Vehicule(int vitesseMax=0, int nbPlaces=1, int occupants=0); // Constructeur par défaut
    
    void demarrer();
    
    void arreter();
    
    void depanner();
    
    void accelerer(int increment);

    void freiner(int increment);
    
    void monter(int nbOcc);

    void descendre(int nbOcc);

    void mettreEnPanne(double random);
    
    string getEtat() const;
    
    ~Vehicule();
    friend ostream& operator<<(ostream& s,Vehicule const& v);
};

// opérateur d'affichage
ostream& operator<<(ostream& s,Vehicule const& v);

#endif /* Vehicule_hpp */