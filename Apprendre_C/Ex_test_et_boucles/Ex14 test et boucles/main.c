/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 14 octobre 2020, 09:40
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    float nbr=-1;
    
    float mini;
    float sommeMini=0;
    int moyenneMini;
    int lacuneMini=-1;
    float pmini;
    float nbrMin=0;
    
    float maxi;
    float sommeMaxi=0;
    int moyenneMaxi;
    int lacuneMaxi=-1;
    float pmaxi;
    float nbrMax=0;

    do{
        printf("Donnez la temperature maximal :");
        scanf("%f",&maxi);
        printf("Donnez la temperature minimal :");
        scanf("%f",&mini);
        
        if (maxi > 0 ) {
            sommeMaxi = sommeMaxi+maxi;
            nbrMax= nbrMax +1;
        } else {
            lacuneMaxi = lacuneMaxi + 1;
        }
        
        if (mini > 0) {
            sommeMini = sommeMini+mini;
            nbrMin = nbrMin+1;
        } else {
            lacuneMini = lacuneMini + 1;
        }
        nbr = nbr + 1;
        
        
    } while (maxi !=0 || mini !=0);
    moyenneMini = sommeMini / nbrMin;
    moyenneMaxi = sommeMaxi / nbrMax;
    
    printf("il y'a %d valeurs manquante pour les valeurs maximum \n", lacuneMaxi);
    printf("la moyenne est de %d pour les valeurs maximum \n", moyenneMaxi);
    printf("il y'a %d valeurs manquante pour les valeurs minimum \n", lacuneMini);
    printf("la moyenne est de %d pour les valeurs minimum \n", moyenneMini);
    
    pmini=(float)lacuneMini / nbr * 100;
    pmaxi=(float)lacuneMaxi / nbr* 100;
    printf("le pourcentage des valeur minimal manquante est %f \n",pmini);
    printf("le pourcentage des valeur maximal manquante est %f \n",pmaxi);
    

    return (EXIT_SUCCESS);
}

