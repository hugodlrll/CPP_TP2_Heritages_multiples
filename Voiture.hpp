#ifndef Voiture_hpp
#define Voiture_hpp

#include "Vehicule.hpp"

class Voiture : protected Vehicule {
    public:
        Voiture();
        virtual void demarrer();
    
        virtual void arreter();
};

#endif

