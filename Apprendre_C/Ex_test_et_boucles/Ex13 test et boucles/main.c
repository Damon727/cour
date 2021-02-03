/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 12:00
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    float x;
    float somme=0;
    float calcul;
    float e=0.00001;
    
    
    for(x=1;x<=5;x=x+e)
    {
        calcul=x*x+3*x-5;
        somme=somme+calcul*e;
    }
    printf("la somme est de %f",somme);

    return (EXIT_SUCCESS);
}

