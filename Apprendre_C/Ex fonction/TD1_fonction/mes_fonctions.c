/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mes_fonctions.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define LARGEUR 15
#define HAUTEUR 9 
//QUESTION 1   

void afficherMenu(char sexe) {
    if (sexe == 'f') {
        printf("menu pour femme\n");
    }
    if (sexe == 'h') {
        printf("menu pour homme\n");
    }
}
//QUESTION 2   

float additionReels(float v1, float v2) {
    float resultat;
    resultat = v1 + v2;
    return resultat;
}
//QUESTION 4 ET 5   

void afficherCarre(int nombre) {
    int carre;
    carre = nombre*nombre;
    printf("carre du nombre %d = %d \n", nombre, carre);
}

int calculerCarre(int nombre) {
    int carre;
    carre = nombre*nombre;
    return carre;
}
//QUESTION 6  ET 7 

float calculerDiscriminant(int a, int b, int c) {
    float discriminant;
    discriminant = (b * b) - 4 * a*c;
    return discriminant;
}

void afficherRacines(int a, int b, int c) {
    float x1;
    float x2;
    float discri = calculerDiscriminant(a, b, c);
    if (discri >= 0) {
        x1 = (-b + sqrtf(discri)) / (2 * a);
        x2 = (-b - sqrtf(discri)) / (2 * a);
        printf("x1 = %f \n", x1);
        printf("x2 = %f \n", x2);
    } else {
        printf("Il n'y a qu'une ou pas de solution");
    }
}
//QUESTION 8

void afficherUneLigne(int nombre) {
    int i;
    for (i = 0; i < nombre; i++) {
        printf("*");
    }

}
//QUESTION 9 

void afficherUnCarre(int cote) {
    int a = 1;
    int b;
    int c = 1;


    for (a = 1; a <= cote; a++) {
        afficherUneLigne(cote);
        printf("\n");

    }
}
//QUESTION 10 

void afficherRectangle(int longueur, int largeur) {
    int ligne;
    int colonne;



    for (ligne = 1; ligne <= largeur; ligne++) {
        for (colonne = 1; colonne <= longueur; colonne++) {
            printf("* ");

        }
        printf("\n");


    }
}
//Question 11

int compterSymbole(char phrase[], char c) {

    int i;
    int occurrence = 0;
    for (i = 0; i < strlen(phrase); i++) {
        if (phrase[i] == c)
            occurrence++;
    }

    return occurrence;

}
//Question 12

int verifTerminaison(char *chaine, char fin[2]) {
    int resultat;
    if (chaine[strlen(chaine) - 2] == fin[0] && chaine[strlen(chaine) - 1] == fin[1]) {
        resultat = 1;
    } else {
        resultat = -1;
    }

    return resultat;
}
//Question 13

int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]) {

}

void initGrille(unsigned char grille[LARGEUR][HAUTEUR]) {
    int x, y;
    for (y = 0; y < HAUTEUR; y++) {
        for (x = 0; x < LARGEUR; x++) {
            grille[x][y] = '.';
        }
    }
}

void afficherGrille(unsigned char grille[LARGEUR][HAUTEUR]) {
    int x, y;
    unsigned char lettre = 'A';
    printf("   ");
    for (x = 0; x < LARGEUR; x++) {
        printf(" %c", lettre++);
    }
    printf("\n");
    for (y = 0; y < HAUTEUR; y++) {
        printf("%d", y + 1);
        for (x = 0; x < LARGEUR; x++) {
            printf(" %c", grille[x][y]);
        }
        printf("\n");
    }
}
