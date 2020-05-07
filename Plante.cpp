#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <string>
#include "Plante.h"

/* std::string _nom; std::string _description; int _hydratation; int _sante */
    
        Plante::Plante(std::string nom, std::string description, int hydratation, int sante): _nom(nom), _description(description), _hydratation(hydratation), _sante(sante) {}
        
        void Plante::affiche(){}
        
        int Plante::getHydratation(){
            return _hydratation;
        }
        
        int Plante::getSante(){
            return _sante;
        }

#endif