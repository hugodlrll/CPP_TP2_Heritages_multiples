#ifndef Bateau_hpp
#define Bateau_hpp

#include "Vehicule.hpp"

using namespace std;

class Bateau : public Vehicule // virtual pour que les membres de Véhicules apparaissent une seule fois dans VoitureAmphibie
{
    public:  
        Bateau();
        void demarrer();
        void arreter();
};

#endif