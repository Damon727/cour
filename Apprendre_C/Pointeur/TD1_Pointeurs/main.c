/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 23 novembre 2020, 17:18
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * 
 */

char *moisNom(int numero);

int main(int argc, char** argv) {
    /*
    char *ptrCar;
    int *ptrEntier;
    float *ptrReel;
    char chaine[] = "12345678000A";
    int i;
    ptrCar = chaine;
    ptrEntier = (int *) chaine;
    ptrReel = (float *) chaine;
    for (i = 0; i < 3; i++)
    {
        printf("ptrCar    = %p       *ptrCar    = %c\n", ptrCar, *ptrCar);
        printf("ptrEntier = %p       *ptrEntier = %d\n", ptrEntier, *ptrEntier);
        printf("ptrReel   = %p       *ptrReel   = %f\n", ptrReel, *ptrReel);
        ptrCar++;
        ptrEntier++;
        ptrReel++;
        printf("\n");
    }*/

    int numero;
    char * ptr_char;

    printf("Donne un mois entre 1 et 12 \n");
    scanf("%d", &numero);
    ptr_char = moisNom(numero);
    printf("%s \n", ptr_char);

    return (EXIT_SUCCESS);
}

char * moisNom(int numero) {
    char *mois[12] = {"janvier", "fevrier", "mars", "avril", "mai", "juin", "juillet", "aout", "septembre", "octobre", "novembre", "decembre"};

    char*retour;
    if(numero>=1 && numero<=12){
    retour = (char *) malloc(strlen(mois[numero - 1]) * sizeof (char));
    strcpy(retour, mois[numero - 1]);
    }
    
    return retour;
}
