#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"

class Fleur {
    
    protected :
        std::string _nom;
        int _eclosion;
        int _sante;
    
    public :
        Fleur (std::string nom, int eclosion, int sante);
        
        int getEclosion();
        int getSante();
    
    
};

#endif