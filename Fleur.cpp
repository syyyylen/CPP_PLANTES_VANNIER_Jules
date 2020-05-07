
#ifndef FLEUR_CPP
#define FLEUR_CPP

#include <iostream>
#include <string>
#include "Plante.h"
#include "Fleur.h"

        Fleur::Fleur(std::string nom):
        _sante(10), _nom(nom), _eclosion(1) {}
    
        
        void Fleur::afficheEtat(){
            std:: _sante << _nom << " a " << _eclosion << "sur 10 pts d'eclosion" << std::end1;
        }
    
    
        int Fleur::getEclosion(){
            return _eclosion;
        }
        
        int Fleur::getSante(){
            return _sante;
        }
    




#endif