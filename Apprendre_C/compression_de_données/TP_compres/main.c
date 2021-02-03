/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 20 janvier 2021, 10:46
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes_fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    int i;
    FILE *ficSrc;
    FILE *ficDest;
    char commande;

    //-----------------------------------EX1---------------------------------
    /*
      printf("Nombre d'arguments: %d\n", argc);
     for (i = 0; i < argc; i++) {
         printf("valeur de arg[%d] : %s\n", i, argv[i]);
     }
     */

    //-----------------------------------EX2---------------------------------
   
    if (argc==4){
        sscanf(argv[1],"%c",&commande);
        if (commande=='d'){
            decompressBmp(argv[2],argv[3]);
        }
        if (commande=='c'){
            compressBmp(argv[2],argv[3]);
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
   /* ficSrc = fopen(argv[1], "r");
    if (ficSrc == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
    }
    ficDest = fopen(argv[1], "w");
    if (ficSrc == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
    }
*/

    return (EXIT_SUCCESS);
}

