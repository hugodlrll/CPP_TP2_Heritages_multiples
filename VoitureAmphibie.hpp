#ifndef VoitureAmphibie_hpp
#define VoitureAmphibie_hpp

#include "Voiture.hpp"
#include "Bateau.hpp"

class VoitureAmphibie : public Voiture, public Bateau
{
    public:
        VoitureAmphibie();
};

#endif