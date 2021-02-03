/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 13 octobre 2020, 14:40
 * Description : jeux MinorMind avec selection de valeur aléatoire
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/timeb.h>
#include <math.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>
#include <sys/random.h>

// attendre un maxTime millisecondes

void msleep(unsigned int maxTime) {

    struct timespec {
        time_t tv_sec; // secondes
        long tv_nsec; // nanosecondes
    };

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        } while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

/**
 * 
 * @param maxAlea valeur max de l'aleatoire
 * @return retourne une valeur entiere E[0..maxAlea[
 */
unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}

int main(int argc, char** argv) {

    int valAlea1;
    int valAlea2;
    int valAlea3;
    int valAlea4;
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
        valAlea1 = aleatoire(9);
        valAlea2 = aleatoire(9);
        valAlea3 = aleatoire(9);
        valAlea4 = aleatoire(9);



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

            // verification du 4eme chiff
            do {
                printf("chiffre 4 : ");
                scanf("%d", &val4);
            } while (val4 < 0 || val4 > 9);


            printf("Votre proposition est : %d%d%d%d \n", val1, val2, val3, val4);

            //verification des valeurs saisie
            if (val1 == valAlea1 && val2 == valAlea2 && val3 == valAlea3 && val4 == valAlea4) {
                ok = 1;
                printf("Vous avez réussi \n");
            } else //(val1 !=7 &&/|| val2 != 5 &&/|| val3 != 3 &&/|| val4 != 1)
            {
                ok = 0;
                printf("Vous avez echoué \n");
                proposition = proposition + 1;
            }

            //verification de la 1er valeur
            if (val1 == valAlea1) {
                placement = placement + 1;
            } else //val1 !=7
            {
                mauvais = mauvais + 1;
            }

            //verification de 2eme valeur
            if (val2 == valAlea2) {
                placement = placement + 1;
            } else //val2 !=5
            {
                mauvais = mauvais + 1;
            }

            //verification de la 3eme valeur
            if (val3 == valAlea3) {
                placement = placement + 1;
            } else //val3 !=3
            {
                mauvais = mauvais + 1;
            }

            //verification de la 4eme valeur
            if (val4 == valAlea4) {
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

