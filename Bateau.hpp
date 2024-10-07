#ifndef Bateau_hpp
#define Bateau_hpp

#include "Vehicule.hpp"

using namespace std;

class Bateau 
{
    public:  
        Bateau();
        virtual void demarrer();
        virtual void arreter();
};

#endif