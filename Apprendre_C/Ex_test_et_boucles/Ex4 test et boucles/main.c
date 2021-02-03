/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 6 octobre 2020, 13:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int valeur;
    int ordi;
    int essaie;
    
    ordi=57;
    essaie=0;
    
    while (valeur != ordi){
    printf("Donnez une valeur :");
    scanf("%d",&valeur);
    
    essaie=essaie+1;
    if(valeur<ordi)
    {
        printf("La valeur est plus petite \n");
    }
    if(valeur>ordi)
    {
        printf("La valeur est plus grande \n");
    }
 
    }       
    printf("Nombre d'essaie: %d",essaie);  
    return (EXIT_SUCCESS);
}

