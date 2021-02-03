/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 16 novembre 2020, 17:19
 */

#include <stdio.h>
#include <stdlib.h>

#define NBCOL 5
#define NBLIGNE 3

/*
 * 
 */

int main(int argc, char** argv) {

    //declaration
    int tab[NBCOL][NBLIGNE] = {0};
    int cpt = 0;

    //initialisation
    for (int j = 0; j < NBLIGNE; j++) {
        for (int i = 0; i < NBCOL; i++) {
            tab[i][j] = cpt;
            cpt++;
        }
    }

    //Affichage
    for (int j = 0; j < NBLIGNE; j++) {
        printf("|");
        for (int i = 0; i < NBCOL; i++) {
            printf(" %3d |",tab[i][j]);
        }
        printf("\n");
    }

    return (EXIT_SUCCESS);
}

