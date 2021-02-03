/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Maillard
 *
 * Created on 1 novembre 2020, 14:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int jour;
    int mois;
    int annee;
    int type;
    char nom[49];
    char prenom[49];


    do {
        printf("Donnez votre jour de naissance :");
        scanf("%i", &jour);
    } while (jour < 1 || jour > 31);
    do {
        printf("Donnez votre mois de naissance :");
        scanf("%i", &mois);
    } while (mois < 1 || mois > 12);
    do {
        printf("Donnez votre annee de naissance :");
        scanf("%i", &annee);
    } while (annee > 2017);
        
        //printf("jour de naissance : %i \nmois de naissance : %i \nannee de naissance : %i \nvotre date de naissance est le : %i/%i/%i \n",jour,mois,annee,jour,mois,annee);
        printf("Format d'affichage de votre date de naissance \n");
        printf("1 - jj/mm/aaaa \n");
        printf("2 - jj-mm-aaaa \n");
        printf("3 - jj:mm:aaaa \n");
        printf("4 - jj.mm.aaaa \n");
        printf("Choisissez le format d'affichage (1.2.3 ou 4) :");
        scanf("%i", &type);

        switch (type) {
            case 1:
                printf("%i/%i/%i \n", jour, mois, annee);
                break;
            case 2:
                printf("%i-%i-%i \n", jour, mois, annee);
                break;
            case 3:
                printf("%i:%i:%i \n", jour, mois, annee);
                break;
            case 4:
                printf("%i.%i.%i \n", jour, mois, annee);
                break;
        }







       /* if (annee < 1999) {
            printf("vous etes autorise a continuer \n");
        } else {
            printf("desolez vous etes trop jeune \n");
        }

        printf("Votre nom :");
        scanf("%s",nom);
        printf("Votre prenom :");
        scanf("%s",prenom);
        printf("Bonjour %s %s \n",prenom,nom);
         */



        return (EXIT_SUCCESS);
    }

