/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mes_fonctions.h
 * Author: cmaillard
 *
 * Created on 3 novembre 2020, 13:58
 */

#ifndef MES_FONCTIONS_H
#define MES_FONCTIONS_H
#define HAUTEUR 9
#define LARGEUR 15

#ifdef __cplusplus
extern "C" {
#endif
    void afficherMenu(char sexe);
    float additionReels(float v1, float v2);
    void afficherCarre(int nombre);
    int calculerCarre(int nombre);
    float calculerDiscriminant(int a, int b, int c);
    void afficherRacines(int a, int b, int c);
    void afficherUneLigne(int nombre);
    void afficherUnCarre(int cote);
    void afficherRectangle(int longueur, int largeur);
    int compterSymbole(char phrase[], char c);
    int verifTerminaison(char *chaine, char fin[2]);
    int nbCroix(unsigned char grille[LARGEUR][HAUTEUR]);
    void afficherGrille(unsigned char grille[LARGEUR][HAUTEUR]);
    void initGrille(unsigned char grille[LARGEUR][HAUTEUR]);

#ifdef __cplusplus
}
#endif

#endif /* MES_FONCTIONS_H */

