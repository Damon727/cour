/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 27 janvier 2021, 08:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes_fonctions.h"

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *ficsrc;
    FILE *ficdst;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    size_t retour;
    int i, nbDonneesImg;
    char octet;
    int retclose;
    int pas = 49152;



/*
    // ouverture du fichier en lecture

    fic = fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/plasmaSteganoTexte.bmp", "r");
    if (fic == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
    }

    // Lecture en tete fichier

    retour = fread(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, fic);
    if (retour != 1) {
        printf("pb lecture en tete fic : %s\n", strerror(errno));
        exit(errno);
    }

    // Lecture en tete image

    retour = fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fic);
    if (retour != 1) {
        printf("pb lecture en tete img : %s\n", strerror(errno));
        exit(errno);
    }


    afficheEnTeteFichierBmp(enTeteFic);
    afficheEnTeteImageBmp(enTeteImg);
    afficherSteganoTxt(fic, pas);
    //fermeture du fichier 
    retclose = fclose(fic);

    if (retclose == EOF) {
        printf("pb fermeture fichier : %s\n", strerror(errno));
        exit(errno);
    }
*/

    // ouverture du fichier en lecture

    ficsrc = fopen("/home/USERS/ELEVES/SNIR2020/imgBMP/mandelSteganoImg.bmp", "r");
    if (ficsrc == NULL) {
        printf("pb ouverture1 : %s\n", strerror(errno));
        exit(errno);
    }
     // ouverture du fichier en lecture

    ficdst = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/Images/decompression/imgBMP/imagemmmm.bmp", "w+");
    if (ficdst == NULL) {
        printf("pb ouverture2 : %s\n", strerror(errno));
        exit(errno);
    }
    
    extraireSteganoImg(ficsrc,ficdst);
            
    retclose = fclose(ficsrc);
    if (retclose == EOF) {
        printf("pb fermeture fichier1 : %s\n", strerror(errno));
        exit(errno);
    }
    retclose = fclose(ficdst);
    if (retclose == EOF) {
        printf("pb fermeture fichier2 : %s\n", strerror(errno));
        exit(errno);
    }

    return (EXIT_SUCCESS);
}

