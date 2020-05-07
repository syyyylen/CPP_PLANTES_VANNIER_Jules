#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante {
    
    protected :
        std::string _nom;
        std::string _description;
        int _hydratation;
        int _sante;
    
    public :
        Plante (std::string nom, std::string description, int hydratation, int sante);
        void virtual affiche();
        
        int getHydratation();
        int getSante();
    
    
};



#endif