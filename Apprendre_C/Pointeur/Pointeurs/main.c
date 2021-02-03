/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 19 novembre 2020, 09:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
   /* int *prtInt;
    char *ptdrCara;
    float *prtReel;
    
    printf("taill d'un int %ld \n taille du pointeur sur int %ld\n",sizeof(int),sizeof(int*));
    printf("taill d'un char %ld \n taille du pointeur sur char %ld\n",sizeof(char),sizeof(char*));
    printf("taill d'un float %ld \n taille du pointeur sur float %ld\n",sizeof(float),sizeof(float*));
    */
    
    
    
    unsigned char *ptrOctet;
    int unEntier = 0x12345678,i;
    
    
    ptrOctet = (char *)&unEntier;
    for(i = 0; i<sizeof(unEntier);i++){
        printf("%p : %hhX\n",ptrOctet,*ptrOctet);
        ptrOctet++;
    }
    return (EXIT_SUCCESS);
}

