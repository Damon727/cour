/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 08:59
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   /* 
    int val;
    printf("Donnez une valeur comprise entre 0 et 255:");
    scanf("%i",&val);
    
    if(val>=128){
        val=val-128;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=64){
        val=val-64;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=32){
        val=val-32;
                printf("1");
    }
    else{
        printf("0");
    }    
    if(val>=16){
        val=val-16;
                printf("1");
    }
    else{
        printf("0");
    }    
    if(val>=8){
        val=val-8;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=4){
        val=val-4;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=2){
        val=val-2;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=1){
        val=val-1;
                printf("1");
    }
    else{
        printf("0");
    }
    */
    
    unsigned long val;
    unsigned long  nombre;
    printf("Donnez une valeur comprise entre 0 et 255:");
    scanf("%lu",&val);
    nombre= 2147483648;
    
    while(nombre !=0)
        
    {
    if(val>=nombre){
        val=val-nombre;
                printf("1");
    }
    else{
        printf("0");
    }
        nombre=nombre/2;
    
    }
    
    return (EXIT_SUCCESS);
}



