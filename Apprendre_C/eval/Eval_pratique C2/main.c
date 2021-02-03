

/* 
 * File:   main.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : Poker aux dés simplifié
 */

#include <stdio.h>
#include <stdlib.h>

#include "poker.h"

int main(int argc, char** argv) {
    // exemple d'affichage avec des couleurs
    printf("du texte en %svert%s mais juste le mot vert\n", GREEN, GREY);

    // demander nom et age des 2 joueurs
    char nom1[NBMAXCAR];
    char nom2[NBMAXCAR];
    int age1;
    int age2;
    char fin;
    int tours = 0;

    printf("Joueur 1 donnez un pseudo : ");
    scanf("%s", nom1);
    printf("Joueur 1 donnez votre age : ");
    scanf("%d", &age1);
    printf("Joueur 2 donnez un pseudo : ");
    scanf("%s", nom2);
    printf("Joueur 2 donnez votre age : ");
    scanf("%d", &age2);

    // tester si les ages permettent de joueur
    int resu;
    int resu2;
    resu = testerAge(age1, 18);
    resu2 = testerAge(age2, 18);
    if (resu == -1 || resu2 == -1) {
        // sinon afficher un message et terminer le programme
        printf("Il faut avoir au moin 18ans pour jouer");
        return (EXIT_SUCCESS);
    }// si oui faire la boucle de jeu

    // boucle de jeu
    // initialiser les cagnottes
    while (fin != 'n') {
        int solde = 100;
        int solde2 = 100;


        // boucle de partie (fin si l'un des joueurs a un solde de 0)
        do {
            if (solde == 0 || solde2 == 0) {
                return (EXIT_SUCCESS);
            }


            // chaque joueur mise
            int mise1;
            int mise2;
            printf("[%s%s%s]: \n", PURPLE, nom1, GREY);
            mise1 = demanderMise(solde);
            solde = solde - mise1;
            printf("[%s%s%s]: \n ", YELLOW, nom2, GREY);
            mise2 = demanderMise(solde2);
            solde2 = solde2 - mise2;

            // lancement des des
            int des1[NBDES];
            int des2[NBDES];
            int i;
            int rejouer;

            for (i = 0; i < NBDES; i++) {
                des1[i] = lancerUnDes(NBFACES);
            }


            for (i = 0; i < NBDES; i++) {
                des2[i] = lancerUnDes(NBFACES);
            }

            // afficher le résultat
            printf("resultat du lancement des des du joueur %s%s \n", PURPLE, nom1);
            afficherCombinaison(des1, NBDES);

            printf("resultat du lancement des des du joueur %s%s \n", YELLOW, nom2);
            afficherCombinaison(des2, NBDES);

            // choix du des a relancer pour chaque joueur et affichage de la nouvelle combinaison
            rejouer = demanderNumeroDeDes();
            if (rejouer != -1) {
                printf("joueur %s%s%s :", PURPLE, nom1, GREY);
                des1[rejouer] = lancerUnDes(NBFACES);
                afficherCombinaison(des1, NBDES);
            }
            rejouer = demanderNumeroDeDes();
            if (rejouer != -1) {
                printf("joueur %s%s%s :", YELLOW, nom2, GREY);
                des2[rejouer] = lancerUnDes(NBFACES);
                afficherCombinaison(des2, NBDES);
            }
            //calcul du score de chaque joueur
            int score1;
            int score2;
            score1 = calculerScore(des1, NBDES);
            score2 = calculerScore(des2, NBDES);
            // test du score du joueur 1 par rapport au score du joueur 2
            // affichage du gagnant et mise à jour des cagnottes
            if (score1 > score2) {
                printf("%s%s%s remporte la mise avec un score de %d\n", PURPLE, nom1, GREY, score1);
            }
            if (score1 < score2) {
                printf("%s%s%s remporte la mise avec un score de %d\n", YELLOW, nom2, GREY, score2);
            }
            if (score1 == score2) {
                printf("égalité \n");
            }

            tours = tours + 1;
            //fin de la boucle de partie
            // tester qui a une cagnotte positive et afficher le vainqueur de la partie
        } while (solde > 0 && solde2 > 0);
        if (solde == 0) {
            printf("Le joueur %s%s%s a gagné en %d tours\n", YELLOW, nom2, GREY, tours);
        } else {
            printf("Le joueur %s%s%s a gagné en %d tours\n", PURPLE, nom1, GREY, tours);
        }
        // demander à rejouer (réponse possible uniquement 'o' ou 'n')
        // reposer la question si pas 'o' ou 'n'

        printf("Voulez vous rejouer (o/n)?\n");
        scanf("%c", &fin);

        // fin boucle jeu
    }

    
    // afficher un message d'au revoir
    printf("Merci d'avoir jouer");

    return (EXIT_SUCCESS);
}

