/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#define MAXCAR 20

typePersonne creePersonne() {
    typePersonne p;

    printf("nom : ");
    scanf("%s", p.nom);
    printf("prenom : ");
    scanf("%s", p.prenom);
    while (p.sexe != 'h' && p.sexe != 'f') {
        printf("sexe (h ou f) : ");
        scanf("%s", &p.sexe);
    }
    printf("age : ");
    scanf("%d", &p.annee);
    printf("Taille : ");
    scanf("%f", &p.taille);
    printf("Poids : ");
    scanf("%f", &p.poids);



    return p;
}

void afficheFiche(typePersonne p) {
    printf("fiche recapitulative : \n"
            "- Identite : %s %s\n"
            "- Age      : %d \n"
            "- Poids    : %.2f \n"
            "- Taille   : %.2f \n", p.nom, p.prenom, p.annee, p.poids, p.taille);



}

void afficherCorpulence(typePersonne p) {
    float imc;
    char tabCorpulence[7][100] = {"famine", "maigreur", "normale", "surpoids", "obesite moderee", "obesite severe", "obesite morbide"};
    float tabIMC[6];
    tabIMC[0] = 16.5;
    tabIMC[1] = 18.5;
    tabIMC[2] = 25;
    tabIMC[3] = 30;
    tabIMC[4] = 35;
    tabIMC[5] = 40;


    imc = p.poids / (p.taille * p.taille);

    printf("votre indice de masse corporelle est de : %.1f \n", imc);

    if (imc < tabIMC[0]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[0]);
    }
    if (imc >= tabIMC[0] && imc < tabIMC[1]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[1]);
    }
    if (imc >= tabIMC[1] && imc < tabIMC[2]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[2]);
    }
    if (imc >= tabIMC[2] && imc < tabIMC[3]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[3]);
    }
    if (imc >= tabIMC[3] && imc < tabIMC[4]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[4]);
    }
    if (imc >= tabIMC[4] && imc < tabIMC[5]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[5]);
    }
    if (imc >= tabIMC[5]) {
        printf("votre corpulence est qualifier de %s", tabCorpulence[6]);
    }
    printf("\n");
}

void afficherMenu(typePersonne p) {
    char lettre;
    do {
        printf("calculer votre poids ideal :\n");
        printf("a - formule de lorentz\n");
        printf("b - formule de devine\n");
        printf("c - formule de lorentz en tenant compte de l'age\n");
        printf("q - sortir du menu de calcul du poids\n");
        printf("Votre choix : ");
        scanf(" %c", &lettre);


        switch (lettre) {
            case 'a': printf("Poids ideal selon la formule de Lorentz %.2f", calculerPoidsLorentz(p));
                break;
            case 'b': printf("Poids ideal selon la formule de Lorentz avec l'age %.2f", calculerPoidsLorentzAge(p));
                break;
            case 'c': printf("Poids ideal selon la formule de Devine %.2f", calculerPoidsDevine(p));
                break;


        }
        printf("\n");
    }while(lettre != 'q');
}

float calculerPoidsLorentz(typePersonne p) {
    float pIdeal;
    if (p.sexe == 'f') {
        pIdeal = p.taille * 100 - 100 - (p.taille * 100 - 150) / 2.5;
    }
    if (p.sexe == 'h') {
        pIdeal = p.taille * 100 - 100 - (p.taille * 100 - 150) / 4;
    }
    return pIdeal;
}

float calculerPoidsLorentzAge(typePersonne p) {
    float pIdeal;

    pIdeal = 50 + ((p.taille * 100 - 150) / 4)+((p.annee - 20) / 4);

    return pIdeal;
}

float calculerPoidsDevine(typePersonne p) {
    float pIdeal;
    if (p.sexe == 'f') {
        pIdeal = 45.5 + 2.3 * ((p.taille / 0.0254) - 60);
    }
    if (p.sexe == 'h') {
        pIdeal = 50.5 + 2.3 * ((p.taille / 0.0254) - 60);
    }

    return pIdeal;
}