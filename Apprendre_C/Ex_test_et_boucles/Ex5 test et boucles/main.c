/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 6 octobre 2020, 14:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int note;
    int nbrnote;
    int somme;
    float moyenne;
    
    nbrnote = -1;
    somme=0;
    
    do
    {
        
        nbrnote=nbrnote+1;
        printf("Donnez une note : ");
        scanf("%d",&note);
        if(note>=0)
        {
                somme=somme+note;
        }
    }while(note>=0);
    
    
    printf("Il y'a eu %d de valeur positive \n",nbrnote );
    printf("La somme des valeur positive est : %d \n",somme);
    moyenne= somme/nbrnote;
    printf("La moyenne est : %f \n",moyenne);
    
    return (EXIT_SUCCESS);
}

