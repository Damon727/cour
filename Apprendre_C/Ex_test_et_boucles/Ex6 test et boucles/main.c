/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 6 octobre 2020, 14:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int cote;
    int a;
    int b;
    int c=1;


    printf("Donnez la longueur du coté : ");
    scanf("%d", &cote);

    a=1;

    while (a<=cote) 
    {

        for (b=c; b <=cote; b++)
        {
            printf("#");
            
        }
        printf("\n");
         c++;
         a++;
            
    }



    return (EXIT_SUCCESS);
}

