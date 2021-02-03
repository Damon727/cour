/*
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 12 novembre 2020, 09:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NBMAXCAR 255

int main(int argc, char** argv) {

    //------------------------------------EX 1-2---------------------------------
    /*
    char chaine[NBMAXCAR];
    char chaine2[NBMAXCAR];
    int cara;
    char test[NBMAXCAR];
    char ;
    
    
    int n;

    puts("Ecrivez une phrase :");
    //recuperation de la phrase
    gets(chaine);
    //affichage de la phrase
    printf("Vous avez saisie : %s\n", chaine);

    puts("Ecrivez une autre phrase :");
    gets(chaine2);
    printf("Vous avez saisie : %s\n", chaine2);

    cara = strlen(chaine);
    printf("il y'a %d caractère dans la chaine1 \n", cara);
    if (strcmp(chaine, chaine2) == 0) {
        printf("Vos chaine sont identique\n");
    }
    if (strcmp(chaine, chaine2) > 0) {
        printf("La chaine 1 est alphabétiquement après la chaine 2\n");
    }
    if (strcmp(chaine, chaine2) < 0) {
        printf("La chaine 2 est alphabétiquement après la chaine 1\n");
    }
    strcpy(test, chaine);
    
    if(strncmp(chaine,chaine2,3)==0)
    {
        printf("Les 3 premiers caractères de chaque chaine sont identiques \n");
    }
    else
    {
        printf("Les 3 premiers caractères de chaque chaine sont differents \n");
    }
     */
    //------------------------------------EX 3-------------------------------------

    /*
        char chaine[NBMAXCAR];
        char cara='a';
        int i;
        int occurrence = 0;



        puts("Ecrivez une phrase :");
        //recuperation de la phrase
        gets(chaine);
        //affichage de la phrase
        printf("Vous avez saisie : %s\n", chaine);
       for (i = 0; i < strlen(chaine); i++) {
            if (chaine[i] == cara)
                occurrence++;
        }
        printf("Le nombre d'occurance de a est %d", occurrence);
     */

    //------------------------------------EX 4-------------------------------------

    /*
            char chaine[NBMAXCAR];
            char cara[6]={'a','e','i','o','u','y'};
            int i;
            int occurrence = 0;



            puts("Ecrivez une phrase :");
            //recuperation de la phrase
            gets(chaine);
            //affichage de la phrase
            printf("Vous avez saisie : %s\n", chaine);
           for (i = 0; i < strlen(chaine); i++) {
                if (chaine[i] == cara[0])
                    occurrence++;
                if (chaine[i] == cara[1])
                    occurrence++;
                if (chaine[i] == cara[2])
                    occurrence++;
                if (chaine[i] == cara[3])
                    occurrence++;
                if (chaine[i] == cara[4])
                    occurrence++;
                if (chaine[i] == cara[5])
                    occurrence++;
            
            }
            printf("Le nombre de voyelle est %d", occurrence);
     */

    //------------------------------------EX 5-------------------------------------

    /*    
            char chaine[NBMAXCAR];
            char cara[7] = {'a', 'e', 'i', 'o', 'u', 'y', ' '};
            int i;

            int occurrence = 0;



            puts("Ecrivez une phrase :");
            //recuperation de la phrase
            gets(chaine);
            //affichage de la phrase
            printf("Vous avez saisie : %s\n", chaine);
            for (i = 0; i < strlen(chaine); i++) {

                if (chaine[i] != cara[0] && chaine[i] != cara[1] && chaine[i] != cara[2] && chaine[i] != cara[3] && chaine[i] != cara[4] && chaine[i] != cara[5] && chaine[i] != cara[6]) {
                    occurrence++;

                }
            }
            printf("Le nombre de consonnes est %d", occurrence);
     */

    //------------------------------------EX 6-------------------------------------

    /*
    char chaine[NBMAXCAR];
    char cara[2] = {' '};
    int i;

    int occurrence = 1;



    puts("Ecrivez une phrase :");
    //recuperation de la phrase
    gets(chaine);
    //affichage de la phrase
    printf("Vous avez saisie : %s\n", chaine);
    for (i = 0; i < strlen(chaine)-1; i++) {

        if (chaine[i] == cara[0]) {
            occurrence++;

        }
    }
    printf("Le nombre de mots est %d", occurrence);
     */

    //------------------------------------EX 7-------------------------------------

    /*
    char chaine[NBMAXCAR];
    char chaine2[NBMAXCAR];
    int i;

    int occurrence = 0;



    puts("Ecrivez une phrase :");
    //recuperation de la phrase
    gets(chaine);
    //affichage de la phrase
    printf("Vous avez saisie : %s\n", chaine);
    for (i = 0; i < strlen(chaine); i++) {
        chaine2[strlen(chaine) - i - 1] = chaine[i];
    }

    printf("Cela donne : %s\n", chaine2);
     */

    //------------------------------------EX 8-------------------------------------


    /*
     char chaine[NBMAXCAR];
    
       int i;
     
       printf("Saisir une phrase \n");
       gets(chaine);
       printf("La phrase est : %s\n", chaine);
    
       for(i=0; i < strlen(chaine); i++){
           if ( chaine[i] >= 'a' && chaine[i] <= 'z'){
                chaine[i] = chaine[i] - 32;
                continue;
           }
           if ( chaine[i] >= 'A' && chaine[i] <= 'Z') chaine[i] = chaine[i] + 32;
       }
    
       printf("Minuscules et majuscules inversées : %s\n", chaine);
     */


    //------------------------------------EX 9-------------------------------------

    /*
        char chaine[NBMAXCAR];
        char *i;

        char *morse[36] = {"._", "_...", "_._.", "_..", ".", ".._.", "_ _.", "....", "..",
            "._ _ _", "_._", "._..", "_ _", "_.", "_ _ _", "._ _.", "_ _._", "._.",
            "...", "_", ".._", "..._", "._ _", "_.._", "_._ _", "_ _..", "_ _ _ _ _",
            "._ _ _ _", ".._ _ _", "..._ _", "...._", ".....", "_....", "_ _...", "_ _ _..", "_ _ _ _."};
        puts("Ecrivez une phrase :");
        fgets(chaine, sizeof (chaine), stdin);
        printf("La phrase en morse est : \n");

        for (i = chaine; *i; i++) {
            if (*i >= 'A' && *i <= 'Z') {
                printf("%s  ", morse[*i - 'A']);
            } else {
                if (*i >= 'a' && *i <= 'z') {
                    printf("%s  ", morse[*i - 'a']);
                } else {
                    if (*i >= '0' && *i <= '9') {
                        printf("%s  ", morse[*i - '0' + 26]);
                    } else {
                        printf("   ");
                    }
                }
            }
        }
        printf("\n");
     */


    //------------------------------------EX 10-------------------------------------

    /*
    char chaine[NBMAXCAR];
    char chaine2[NBMAXCAR]="bonjour";

   
    puts("Ecrivez une phrase :");
    //recuperation de la phrase
    gets(chaine);
    //affichage de la phrase
   
    if (strcmp(chaine, chaine2) == 0) {
        printf("Ok\n");
    }
     */

    //------------------------------------EX 11-------------------------------------

    /*
    char chaine[NBMAXCAR];


    puts("Ecrivez une phrase :");
    gets(chaine);
    
   
    if (chaine[0] == 's' && chaine[1] == 'a' && chaine[2] == 'l' && chaine[3] == 'u' && chaine[4] == 't') {
        printf("Bon début\n");
    }
     */

    //------------------------------------EX 12-------------------------------------

    /*
    char chaine[NBMAXCAR];
    char chaine2[NBMAXCAR];
    char chaine3[NBMAXCAR] = "Jean_bernard";
    char chaine4[NBMAXCAR] = "azerty5";
    int i;


    puts("Donnez votre login :");
    gets(chaine);
    puts("Donnez votre MDP :");
    gets(chaine2);


    if (strcmp(chaine, chaine3) == 0 &&) {
        if (strcmp(chaine2, chaine4) == 0) {
            printf("accès autorisé");
        } else {
            printf("accès refusé");
        }
    } else {
        printf("accès refusé");
    }
     */

    //------------------------------------EX 13-------------------------------------

    //PAS CLAIR

    //------------------------------------EX 14-------------------------------------
/*
    char chaine[NBMAXCAR];
    char chaine2[NBMAXCAR];
    int i;

    printf("Saisir une phrase (sans lettres accentuées) : ");
    gets(chaine);

    for (i = 0; i < strlen(chaine); i++) {
        chaine2[strlen(chaine) - i - 1] = chaine[i];
    }
    if (strcmp(chaine, chaine2) == 0) {
        printf("Palindrome\n");
    }


    printf("Cela donne : %s\n", chaine2);


*/
    
    return (EXIT_SUCCESS);
}