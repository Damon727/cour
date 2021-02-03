/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 3 novembre 2020, 13:32
 */

#include <stdio.h>
#include <stdlib.h>
#include "mes_fonctions.h"
#include <math.h>

#define NBCARFIN 2
#define NBMAXCAR 50
#define LARGEUR 15
#define HAUTEUR 9



int main(int argc, char** argv) {
    //QUESTION 1   
    /*
       char genre;
       printf("are you male or female (h/f) ? ");
       scanf("%c", &genre);
       afficherMenu(genre);

       afficherMenu('h'); 
     */

    //QUESTION 2   
    /*
    float res, val1, val2;

    printf("val1 : ");
    scanf("%f", &val1);
    printf("val2 : ");
    scanf("%f", &val2);
    res = additionReels(val1, val2);
    printf("resultat : %.2f \n", res);
    printf("resultat : %.2f \n", additionReels(val1, val2));
    res = additionReels(val1,3.14);
    res = additionReels(1.896, 3.14);
    res = additionReels(3.14, val2);
     */


    //QUESTION 4 ET 5   
    /*
    int val,car;
    printf("Donnez une valeur : ");
    scanf("%d",&val);
    afficherCarre(val);
    // calculerCarre
    car= calculerCarre(val);
     */

    //QUESTION 6  ET 7 
    /*
     int a,b,c;
    
     float discri;
     printf("Donnez une valeur pou a : ");
     scanf("%d",&a);
     printf("Donnez une valeur pou b : ");
     scanf("%d",&b);
     printf("Donnez une valeur pou c : ");
     scanf("%d",&c);
     discri= calculerDiscriminant(a,b,c);
     printf("Discriminant : %f \n",discri);
     afficherRacines(a,b,c);
     */


    //QUESTION 8
    /*
    int nombre;
    afficherUneLigne(nombre);
     *  */

    //QUESTION 9  
    /*
    int cote;
    printf("Donnez une valeur :");
    scanf("%d", &cote);
    afficherUnCarre(cote);
     */


    //QUESTION 10   
    /*
     int longueur;
     int largeur;
     printf("Donnez la valeur de la longueur :");
     scanf("%d", &longueur);
     printf("Donnez la largeur largeur :");
     scanf("%d", &largeur);

     afficherRectangle(longueur,largeur);
     */

    //Question 11
    /*
     char c;
     char phrase[255];
     int i,occurrence = 0;
     printf("Ecrire une phrase :");
     gets(phrase);
    
     printf("Donnez le caractère :");
     scanf("%c",&c);
     occurrence = compterSymbole(phrase,c);
     printf("Le nombre d'occurance de %c est %d",c,occurrence);
     */

    //Question 12
    
    char mot[NBMAXCAR];
    char terminaison[NBCARFIN] = {'e', 'r'};
    int finEnEr;

    printf("donner un mot : ");
    scanf("%s", mot);
    finEnEr = verifTerminaison(mot, terminaison);
    if (finEnEr == 1) {
        printf("%s se termine bien en ER\n", mot);
    } else {
        printf("%s ne se termine pas en ER\n", mot);
    }
     

    //Question 13
   /* unsigned char tab[LARGEUR][HAUTEUR];
    int x, y;
    unsigned char lettre;
    int chiffre;
    int nombreDeCroix;

    initGrille(tab);
    do {
        afficherGrille(tab);
        printf("ajouter une croix : lettreChiffre (ex: b4)\n");
        printf("fin avec a-1 :");
        scanf(" %c%d", &lettre, &chiffre);
        if ((lettre >= 'a' && lettre <= 'a' + LARGEUR) && (chiffre >= 1 && chiffre <= HAUTEUR)) {
            tab[lettre - 'a'][chiffre - 1] = 'X';
        }
    } while (lettre != 'a' || chiffre != -1);
    nombreDeCroix = nbCroix(tab);
    printf("il y a %d croix \n", nombreDeCroix);*/



    return (EXIT_SUCCESS);
}

