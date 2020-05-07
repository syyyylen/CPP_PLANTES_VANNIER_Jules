/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "Plante.h"
#include "Fleur.h"

int main()
{
    printf("Voici le statut de vos plantes :");
    
    Fleur * rose = new Fleur("rose");
    rose->afficheEtat()
    
    return 0;
}
