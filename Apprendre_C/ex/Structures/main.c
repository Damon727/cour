/*
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 26 novembre 2020, 09:30
 */

#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main(int argc, char** argv) {

    typePersonne robert;
    typePersonne *raymonde;
    robert = creePersonne();
    printf("robert existe \n");
    printf("---------------------------------- \n");
    affichePersonne(robert);
    printf("---------------------------------- \n");
    raymonde = creePersonnePtr();
    printf("---------------------------------- \n");
    affichePersonnePtr(raymonde);
    printf("---------------------------------- \n");
    //&robert est l'adresse d'une donnée
    //de type typePersonne soir une typePersonne * -> ok
    affichePersonnePtr(&robert);
    printf("---------------------------------- \n");
    // * raymonde est du type typePersonne -> ok
    affichePersonne(*raymonde);
    return (EXIT_SUCCESS);
}

