#ifndef Voiture_hpp
#define Voiture_hpp

#include "Vehicule.hpp"

class Voiture : virtual public Vehicule // virtual pour que les membres de Véhicules apparaissent une seule fois dans VoitureAmphibie
{ 
    public:
        Voiture();
        void demarrer();
        void arreter();
};

#endif

