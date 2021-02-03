/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 1 octobre 2020, 11:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x;
    int resultat;
    int multi;
    int debut;
    int fin;
   printf("Donnez le multiplicateur :");
    scanf("%d",&multi);
    
    /*printf("Donnez le debut de la borne :");
    scanf("%d",&debut);
    
    printf("Donnez la fin de la borne :");
    scanf("%d",&fin);
    
    for(x=debut;x<=fin;x++)
    {
        resultat=x*multi;
        printf(" %i*%d = %d\n",x,multi,resultat);
    } */
  
    
    // QUESTION 9
    /*x=0;
    do
    {
     x=x+1;
     resultat=x*multi;
     printf(" %i* %d = %d\n",x,multi,resultat);
    }
    while(x<10); */
    
    // QUESTION 10
    
    x=0;
    while(x<10)
    {
        x=x+1;
        resultat=x*multi;
        printf(" %i* %d = %d\n",x,multi,resultat);
    }

    return (EXIT_SUCCESS);
}

