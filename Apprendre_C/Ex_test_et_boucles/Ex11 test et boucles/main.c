/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 10:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    /*float annee;
    
    printf("Donnez une année :");
    scanf("%f",&annee);
    
    annee=annee/4;
    int annee2=annee;
    
    if(annee==annee2)
    {
    printf("L'année est bissextile");
    }
    else{
        printf("L'année n'est pas bissextile");
    } */


    int an;

    printf("entrer l'année : ");
    scanf("%d", &an);

    if((an % 4 == 0 && an % 100 != 0) || (an % 400 == 0)) {
        printf("l'année %d est bissextile", an);
    } 
    else {
        printf("l'année %d n'est pas bissextile ", an);
    }
   
return (EXIT_SUCCESS);
}

