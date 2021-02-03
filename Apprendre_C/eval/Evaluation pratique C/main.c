/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 13 octobre 2020, 13:27
 * Description : jeux MinorMind avec valeurs prédéfinie 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int val1;
    int val2;
    int val3;
    int val4;
    int ok;
    int proposition = 1;
    int placement;
    int mauvais;
    char nom[15];
    char lettre;

    //initialisation du jeux
    do {
        printf("Donnez votre pseudo :");
        scanf("%s", nom);
        printf("Bonjour et bienvenue %s \n", nom);

        //initialisation de la saisie des valeurs
        do {
            placement = 0;
            mauvais = 0;


            printf("Donnez 4 chiffre entre 0 et 9 \n");

            //verification du premier chiffre
            do {
                printf("chiffre 1 : ");
                scanf("%d", &val1);
            } while (val1 < 0 || val1 > 9);

            //verification du 2eme chiffre
            do {
                printf("chiffre 2 : ");
                scanf("%d", &val2);
            } while (val2 < 0 || val2 > 9);

            //verification du 3eme chiffre
            do {
                printf("chiffre 3 : ");
                scanf("%d", &val3);
            } while (val3 < 0 || val3 > 9);

            // verification du 4eme chiffre
            do {
                printf("chiffre 4 : ");
                scanf("%d", &val4);
            } while (val4 < 0 || val4 > 9);


            printf("Votre proposition est : %d%d%d%d \n", val1, val2, val3, val4);

            //verification des valeurs saisie
            if (val1 == 7 && val2 == 5 && val3 == 3 && val4 == 1) {
                ok = 1;
                printf("Vous avez réussi \n");
            } else //(val1 !=7 &&/|| val2 != 5 &&/|| val3 != 3 &&/|| val4 != 1)
            {
                ok = 0;
                printf("Vous avez echoué \n");
                proposition = proposition + 1;
            }

            //verification de la 1er valeur
            if (val1 == 7) {
                placement = placement + 1;
            } else //val1 !=7
            {
                mauvais = mauvais + 1;
            }

            //verification de 2eme valeur
            if (val2 == 5) {
                placement = placement + 1;
            } else //val2 !=5
            {
                mauvais = mauvais + 1;
            }

            //verification de la 3eme valeur

            if (val3 == 3) {
                placement = placement + 1;
            } else //val3 !=3
            {
                mauvais = mauvais + 1;
            }

            //verification de la 4eme valeur
            if (val4 == 1) {
                placement = placement + 1;
            } else //val4 !=1
            {
                mauvais = mauvais + 1;
            }
            if (placement != 4) {
                printf("Vous avez %d valeur bien placée(s) et %d de mal placée(s) \n", placement, mauvais);
            }

        } while (ok != 1);

        printf("Bravo %s vous avez trouver en %d coups! \n", nom, proposition);
        printf("Voulez vous faire une autre partie (o/n)? ");
        scanf("%s", &lettre);

    } while (lettre != 'n');

    printf("A bientot %s", nom);

    return (EXIT_SUCCESS);
}

