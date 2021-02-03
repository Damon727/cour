/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 1 décembre 2020, 13:23
 */

#include <stdio.h>
#include <stdlib.h>

#include "fonctions.h"

#define MAXCAR 20

/*
 *
 */
int main(int argc, char** argv) {
    
    typePersonne re;
    
    re = creePersonne();
    afficheFiche(re);
    afficherCorpulence(re);
   
    afficherMenu(re);
    return (EXIT_SUCCESS);
}

