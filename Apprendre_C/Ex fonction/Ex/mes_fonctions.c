/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mes_fonctions.h"
#include <stdio.h>

void afficherMenu(char sexe) {
    if (sexe == 'f') {
        printf("menu pour femme\n");
    }
    if (sexe == 'h') {
        printf("menu pour homme\n");
    }
}

float additionReels(float v1, float v2) {
    float resultat;
    resultat = v1 + v2;
    return resultat;
}

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