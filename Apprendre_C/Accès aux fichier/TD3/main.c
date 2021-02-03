/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 19 janvier 2021, 13:05
 */




#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include "mes_fonctions.h"

int main(int argc, char** argv) {
    //-----------------------------------EX2---------------------------------

    FILE *ficSrc;
    FILE *ficDst;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    size_t retour;
    int i,nbDonneesImg;
    char octet;
    int retclose;

    if (argc != 3) {
        printf("usage %s cheminEtNomDuFichierImage\n", argv[0]);
        exit(argc);
    }


    // ouverture du fichier en lecture

    ficSrc = fopen(argv[1], "r");
    if (ficSrc == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
   }

    // Lecture en tete fichier

    retour = fread(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, ficSrc);
    if (retour != 1) {
        printf("pb lecture en tete fic : %s\n", strerror(errno));
        exit(errno);
    }

    // Lecture en tete image

    retour = fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, ficSrc);
    if (retour != 1) {
        printf("pb lecture en tete img : %s\n", strerror(errno));
        exit(errno);
    }

    //lecture de la palette
    
    retour = fread(palette, sizeof (typeCouleur), NBCOULEURS, ficSrc);
    if (retour != NBCOULEURS) {
        printf("pb lecture palette : %s\n", strerror(errno));
        exit(errno);
    }
    
    
    
    
    
    
    // ouverture du fichier en ecriture

    ficSrc = fopen(argv[2], "w");
    if (ficDst == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
    }

    // ecriture en tete fichier

    retour = fwrite(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture en tet fic : %s\n", strerror(errno));
        exit(errno);
    }

    // ecriture en tete image

    retour = fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture en tete img : %s\n", strerror(errno));
        exit(errno);
    }

    //modification de la palette en nuance de rouge
    
    for(i=0;i<NBCOULEURS;i++){
        palette[i].alpha=0;
        palette[i].vert=0;
        palette[i].bleu=0;
        palette[i].rouge=255;
    }
    
    //ecriture de la palette
    
    retour = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, ficDst);
    if (retour != NBCOULEURS) {
        printf("pb ecriture palette : %s\n", strerror(errno));
        exit(errno);
    }
    
    //copie des données de Src vers Dst
    
    nbDonneesImg=enTeteFic.tailleFichier-sizeof (typeEnTeteFichierBmp)
            -sizeof(typeEnTeteImageBmp)-NBCOULEURS*sizeof (typeCouleur);
    
    for(i=0;i<nbDonneesImg;i++){
        retour=fread(&octet,sizeof(char),1,ficSrc);
        if (retour != 1) {
        printf("pb lecture octet : %s\n", strerror(errno));
        exit(errno);
    }
        retour=fwrite(&octet,sizeof(char),1,ficDst);
        if (retour != 1) {
        printf("pb ecriture octet : %s\n", strerror(errno));
        exit(errno);
    }
    }
    
    
    
    //fermeture de fichier Dst
    retclose = fclose(ficDst);

    if (retclose == EOF) {
        printf("pb fermeture fichier : %s\n", strerror(errno));
        exit(errno);
    }

    //fermeture de fichier Src

    retclose = fclose(ficSrc);

    if (retclose == EOF) {
        printf("pb fermeture fichier : %s\n", strerror(errno));
        exit(errno);
    }
    
    

    //afficher les info des en tete

    afficheEnTeteFichierBmp(enTeteFic);
    afficheEnTeteImageBmp(enTeteImg);

    return (EXIT_SUCCESS);
}

