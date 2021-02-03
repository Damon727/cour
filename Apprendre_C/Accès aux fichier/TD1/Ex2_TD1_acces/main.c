/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: bneveu
 *
 * Created on 4 janvier 2021, 16:45
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


void afficherErreur();

int main() {
    FILE *fd;
    char caractere;

    fd = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/essai.txt", "r");
    if (fd == NULL) // pb ouverture fichier
    {
        afficherErreur();
    } else {
        //lecture
        while (!feof(fd)) {
            caractere = fgetc(fd);
            printf("%c",caractere);
        }


        fclose(fd);
    }
    return EXIT_SUCCESS;
}

void afficherErreur() {
    if (errno != 0) {
        printf("Erreur : %s\n", strerror(errno));
    }
}