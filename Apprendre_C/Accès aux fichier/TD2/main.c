/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 14 janvier 2021, 10:35
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


#define NBMAXCAR 50
#define NBPERS 5

int main(int argc, char** argv) {
    FILE *fic;


    int retour;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned int nbCouleurs;

    //init des 5 personnes



    // ouverture du fichier en lecture

    fic = fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/image256Couleurs.bmp", "r");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //je me positionne (a partir du debut)
    retour = fseek(fic, 2 + 4 + 4 + 4 + 4, SEEK_SET);
    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //lecture de la largeur
    retour = fread(&largeur, sizeof (unsigned int), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //lecture de la lhauteur
    retour = fread(&hauteur, sizeof (unsigned int), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }



    //je me positionne (a partir de ma position)
    retour = fseek(fic, 2 + 2 + 4 + 4 + 4 + 4, SEEK_CUR);
    if (retour == -1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    // lecture du nombre de couleur
    retour = fread(&nbCouleurs, sizeof (unsigned int), 1, fic);
    if (retour != 1) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }

    //fermeture de fichier
    retour = fclose(fic);

    if (retour == EOF) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    printf("format de l'image : %d x %d\n", largeur, hauteur);
    printf("nombre de couleurs de l'image : %d \n", nbCouleurs);
    return (EXIT_SUCCESS);
}

