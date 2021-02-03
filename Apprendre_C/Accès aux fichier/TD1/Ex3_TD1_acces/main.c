/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 14 janvier 2021, 08:33
 */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main(int argc, char** argv)
{
    /*
     * FILE *fic;
    int retour;
    int compteurMinus;
    unsigned char carac;
    compteurMinus = 0;
    //ouverture du fichier en lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/essai.txt", "r");
    if (fic == NULL)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lire le fichier du debut à la fin caractere par caractere   
    // boucle de lecture
    while (!feof(fic))
    {
        // lire caractere
        retour = fread(&carac, sizeof (carac), 1, fic);
        if (retour == 1) // la lecture est ok
        {
            // carac est-il une minuscule ?
            if (carac >= 'a' && carac <= 'z')
            {
                // augmenter le compteur de minuscules
                compteurMinus++;
            }
            printf("%c", carac);
        }
        else // erreur potentiel
        {
            if (!feof(fic)) // veritablement une erreur
            {
                printf("%s\n", strerror(errno));
                exit(errno);
            }
        }





    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    // afficher le nombre de minuscules
    printf("Le fichier contient %d minuscules \n", compteurMinus);
    
    */
    FILE *fic;
    int retour;
    int compteurMinus;
    unsigned char carac;
    compteurMinus=0;
    //ouverture du fichier en lecture
    fic = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/essai.txt", "r");
    if (fic == NULL)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    //lire le fichier du debut à la fin caractere par caractere   
    // boucle de lecture
    while (!feof(fic))
    {
        // lire caractere
        retour = fgetc(fic);
        if (retour == EOF)  // la lecture a provoque une erreur
        {
            if (!feof(fic))
            {
                printf("%s\n", strerror(errno));
                exit(errno);
            }
        }
        else // le caractere lu correctement
        {
            carac = (unsigned char) retour;
            // carac est-il une minuscule ?
            if (carac>='a' && carac<='z')
            {
                // augmenter le compteur de minuscules
                compteurMinus++;
            }
            printf("%c", carac);
        }

    }
    //fermer le fichier
    retour = fclose(fic);
    if (retour == EOF)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
    // afficher le nombre de minuscules
    printf("Le fichier contient %d minuscules \n",compteurMinus);
            
    return (EXIT_SUCCESS);
}


