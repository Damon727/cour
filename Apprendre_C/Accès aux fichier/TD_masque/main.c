/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 18 janvier 2021, 17:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void affiche_binaire(unsigned int n) {

    
    unsigned char masque = 0x00;
    masque = ~masque;
    masque = masque >> 1;
    masque = ~masque;
    unsigned char compteur=0;

    while (masque > 0) {
        if (compteur % 4 == 0 && compteur !=0)
            printf(" ");
        if (n & masque) {
            printf("1");
        } else {
            printf("0");
        }
        masque = masque >> 1;
        compteur++;
    }
}

int main(int argc, char** argv) {

    unsigned char adressip[4] = {192,168,1,1};
    unsigned char reseau[4] = {255,255,255,0};

    for(int i = 0; i < 4 ; i++){
        affiche_binaire(adressip[i]);
        if (i < 3) printf(".");
    }
    printf("\n");
    
     for(int i = 0; i < 4 ; i++){
        affiche_binaire(reseau[i]);
        if (i < 3) printf(".");
    }
    

    return (EXIT_SUCCESS);
}
