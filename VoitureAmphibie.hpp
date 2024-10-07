#ifndef VoitureAmphibie_hpp
#define VoitureAmphibie_hpp

#include "Voiture.hpp"
#include "Bateau.hpp"

class VoitureAmphibie : protected Bateau, Voiture
{
    public:
        VoitureAmphibie(int TypeVehicule = TERRE);
        virtual void demarrer();
        virtual void arreter();
        virtual void transformers();
        virtual void getType();
        
    private:
        enum TypeTerrain {TERRE = false, EAU = true};
        bool TypeVehicule_;
};

#endif