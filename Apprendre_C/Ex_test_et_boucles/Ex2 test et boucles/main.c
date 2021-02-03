/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 11:50
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   
    //projet 1
    /* float note;
    
    printf("Donnez la note:");
    scanf("%f",&note);
    
    if(note<4){
        printf("E");
    }
    if(note>=4 && note<8)
    {
        printf("D");
    }
    if(note>=8 && note<12)
    {
        printf("C");   
    }
    if(note>=12 && note<16)
    {
        printf("B");
    }
    if(note>=16 && note<=20)
    {
        printf("A");
    } */
    
   
    
    char lettre;
    
    
    printf("Ecrire la lettre: ");
    scanf(" %c",&lettre);
    
   // projet 2 
   /* if(lettre == 'a' ||lettre =='A')
    {
        printf("[16-20]");
    }
    if(lettre == 'b' || lettre == 'B')
    {
       printf("[12-16[");
    }
    if(lettre == 'c' ||lettre == 'C')
    {
       printf("[8-12[");
    }
    if(lettre == 'd' ||lettre == 'D')
    {
        printf("[4-8[");
    }
    if(lettre == 'e' || lettre =='E')
    {
        printf("[0-4[");
    } */ 

    
    //projet 3
    /*switch(lettre)
    {
        case'A':
        case'a':
            printf("[16-20]");
        break;
        case'B':
        case'b':
            printf("[12-16[");
        break;
        case'C':
        case'c':
            printf("[8-12[");
        break;
        case'D':
        case'd':
            printf("[4-8[");
        break;
        case'E':
        case'e': 
            printf("[0-4[");
        break;
        default: printf("note indeterminée");
    }*/
    return (EXIT_SUCCESS);
}

