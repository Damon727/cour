/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 10:35
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    unsigned long pliage;
    float epaisseur;
    epaisseur=0.076474;
    pliage=0;
    
    while(epaisseur <320755)
    {
        epaisseur=epaisseur*2;
        pliage=pliage+1;
    }
    
    printf("ont l'as plié %lu fois",pliage);
    
    
    return (EXIT_SUCCESS);
}

