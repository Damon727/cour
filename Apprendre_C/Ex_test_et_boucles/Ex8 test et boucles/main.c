/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 10:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int coucou;
    int val;
    
    printf("Combien de fois entend-on le coucou dans la foret lointaine?");
    scanf("%d",&val);
    
    printf("Dans la foret lointain, on entend le coucou.");
    while(val != -1)
    {
        printf("Coucou ! \n");
        val=val-1;
        
    }
    printf("Fait le coucou.");

    return (EXIT_SUCCESS);
}

