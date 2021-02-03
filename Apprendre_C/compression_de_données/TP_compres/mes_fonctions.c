/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mes_fonctions.h"

/*void decompressBmp(FILE *fdSource, FILE *fdDest) {
    typeEnTeteFichierBmp enTeteFichier;
    typeEnTeteImageBmp enTeteImg;
    fread(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fdSource);
    fwrite(&enTeteFichier, sizeof (typeEnTeteFichierBmp), 1, fdDest);
    
    fread(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fdSource);
    fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, fdDest);
 
    
    
    do{
    
    
    
    }while();*/

void decompressBmp(char *src, char *dst) {
    FILE *ficSrc;
    FILE *ficDst;
    typeEnTeteFichierBmp enTeteFic;
    typeEnTeteImageBmp enTeteImg;
    typeCouleur palette[NBCOULEURS];
    size_t retour;
    int i, nbDonneesImg;
    unsigned char nbOctet, repetition, valeurOctet;
    int retclose;
    unsigned int tailleFichier, tailleImage, typeCompression;


    printf("decompression \n");
    // ouverture du fichier source en lecture

    ficSrc = fopen(src, "r");
    if (ficSrc == NULL) {
        printf("pb ouverture : %s\n", strerror(errno));
        exit(errno);
    }
    // ouverture du fichier destination en lecture
    ficDst = fopen(dst, "w");
    if (ficDst == NULL) {
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

    // ecriture en tete fichier

    retour = fwrite(&enTeteFic, sizeof (typeEnTeteFichierBmp), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture en tete fic : %s\n", strerror(errno));
        exit(errno);
    }

    // ecriture en tete image

    retour = fwrite(&enTeteImg, sizeof (typeEnTeteImageBmp), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture en tete img : %s\n", strerror(errno));
        exit(errno);
    }
    //ecriture de la palette

    retour = fwrite(palette, sizeof (typeCouleur), NBCOULEURS, ficDst);
    if (retour != NBCOULEURS) {
        printf("pb ecriture palette : %s\n", strerror(errno));
        exit(errno);
    }
    do {
        retour = fread(&repetition, sizeof (char), 1, ficSrc);
        if (retour != 1) {
            printf("pb lecture repetition : %s\n", strerror(errno));
            exit(errno);
        }
        retour = fread(&valeurOctet, sizeof (char), 1, ficSrc);
        if (retour != 1) {
            printf("pb lecture valeur octet : %s\n", strerror(errno));
            exit(errno);
        }
        for (nbOctet = 0; nbOctet < repetition; nbOctet++) {
            retour = fwrite(&valeurOctet, sizeof (char), 1, ficDst);
            if (retour != 1) {
                printf("pb ecriture valeur octet : %s\n", strerror(errno));
                exit(errno);
            }
        }

    } while (repetition != 00 || valeurOctet != 01);
    
    //fermeture de fichier Src

    retclose = fclose(ficSrc);

    if (retclose == EOF) {
        printf("pb fermeture fichier : %s\n", strerror(errno));
        exit(errno);
    }

//modifier les valeurs des champs de l'en-tete de fichier du fichier destination
    retour = fseek(ficDst, 2, SEEK_SET);
    if (retour == -1) {
        printf("pb fssek: %s\n", strerror(errno));
        exit(errno);
    }
    tailleFichier = sizeof (typeEnTeteFichierBmp) + sizeof (typeEnTeteImageBmp)
            + NBCOULEURS * sizeof (typeCouleur) + enTeteImg.largeur * enTeteImg.hauteur;
    tailleImage = enTeteImg.largeur * enTeteImg.hauteur;
    typeCompression = 0;
    retour = fwrite(&tailleFichier, sizeof (unsigned int), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture taille fic : %s\n", strerror(errno));
        exit(errno);
    }

//on se positionne sur le type de compression
    retour = fseek(ficDst, 2 + 4 + 4 + 4 + 4 + 4 + 4 + 2 + 2, SEEK_SET);
    if (retour == -1) {
        printf("pb fssek: %s\n", strerror(errno));
        exit(errno);
    }
    retour = fwrite(&typeCompression, sizeof (unsigned int), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture taille fic : %s\n", strerror(errno));
        exit(errno);
    }
    retour = fwrite(&tailleImage, sizeof (unsigned int), 1, ficDst);
    if (retour != 1) {
        printf("pb ecriture taille fic : %s\n", strerror(errno));
        exit(errno);
    }

    
    //fermeture de fichier Dst
    retclose = fclose(ficDst);

    if (retclose == EOF) {
        printf("pb fermeture fichier : %s\n", strerror(errno));
        exit(errno);
    }

}

void compressBmp(char *src, char *dst) {
    printf("compression");
}
