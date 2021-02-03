/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 14 octobre 2020, 10:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float pop1;
    float pop2;
    float taux1;
    float taux2;
    int annee=0;
    
    printf("Donnez le taille de la population du pays1 :");
    scanf("%f",&pop1);
    printf("Donnez le taille de la population du pays2 :");
    scanf("%f",&pop2);
    printf("Donnez le taux de croissance du pays1 :");
    scanf("%f",&taux1);
    printf("Donnez le taux de croissance du pays2 :");
    scanf("%f",&taux2);
    
     do{
        pop1=pop1+(pop1*(taux1/100));
        pop2=pop2+(pop2*(taux2/100));
        annee++;
        
    }while(pop1>pop2);
    printf("Il depasse au bout de %d année \n",annee);
    
    return (EXIT_SUCCESS);
}

