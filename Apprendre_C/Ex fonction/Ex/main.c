/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 8 octobre 2020, 10:46
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes_fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    /*char genre;
    printf("are you male or female (h/f) ? ");
    scanf("%c", &genre);
    afficherMenu(genre);

    afficherMenu('h'); 



    float res, val1, val2;

    printf("val1 : ");
    scanf("%f", &val1);
    printf("val2 : ");
    scanf("%f", &val2);
    res = additionReels(val1, val2);
    printf("resultat : %.2f \n", res);
    printf("resultat : %.2f \n", additionReels(val1, val1));
    res = additionReels(val1,3.14);
    res = additionReels(1.896, 3.14);
    res = additionReels(3.14, val2);*/
    
    
    int val,car;
    printf("Donnez une valeur : ");
    scanf("%d",&val);
    afficherCarre(val);
    // calculerCarre
    car= calculerCarre(val);
    
    
    return (EXIT_SUCCESS);
}
