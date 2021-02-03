/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 5 novembre 2020, 10:31
 */

#include <stdio.h>
#include <stdlib.h>

#define NBELEVES 25
#define NBJ 4
#define TAILLEMAX 4
#define TAILLES 10
#define TAILLE 5

int main(int argc, char** argv) {
    //------------------------------------EX 1---------------------------------
    /*
    float notesEleves[NBELEVES];
    int i;
    // initialisation du tableau des notes 
    for(i=0;i<NBELEVES;i++)
    {
        notesEleves[i]=i%20;
    }
    // affichage des notes
    for(i=0;i<NBELEVES;i++)
    {
        printf("l'eleve numero %d a eu la note %.2f /20 \n",i,notesEleves[i]);
    }
     */


    //------------------------------------EX 2---------------------------------

    //TEMPERATURE
    /*
    float tempmax[NBJ];
    float tempmin[NBJ];
    float mini;
    float maxi;
    int i;
    int jourmin=0;
    int jourmax=0;
    
    //initialisation des tableaux
    
    for(i=0;i<NBJ;i++)
    {
        printf("Donnez la temperature mini pour le jour %d :",i+1);
        scanf("%f",&tempmin[i]);
        printf("Donnez la temperature maxi pour le jour %d :",i+1);
        scanf("%f",&tempmax[i]);
    }
    //affichage des couples min/max
    for(i=0;i<NBJ;i++)
    {
        printf("Jour %d : (%.2f , %.2f)\n",i+1,tempmin[i],tempmax[i]);
    }
    //recherche de la temperature mini des mini
    mini = tempmin[0];
  
    for(i=1;i<NBJ;i++)
    {
        if (mini>tempmin[i])
        {
            mini=tempmin[i];
            jourmin=i;
        }
         
    }
    printf("La temperature mini des mini est de : %.2f\n",mini);
    printf("Le jour est : %d\n",jourmin+1);
    
    maxi = tempmax[0];
    
    for(i=1;i<NBJ;i++)
    {
        if (maxi<tempmax[i])
        {
            maxi=tempmax[i];
            jourmax=i;
        }
    }
    printf("La temperature maxi des maxi est de : %.2f\n",maxi);
    printf("Le jour est : %d\n",jourmax+1);
     
     */
    //------------------------------------EX 3---------------------------------

    /*
     float tabVal[TAILLEMAX];
     float tabValNeg[TAILLEMAX];
     float tabValPos[TAILLEMAX];
     int i;

     //for (int i = 0;i < TAILLEMAX;i++){
     //  tabVal[i]=rand()%200-100;
     //}
     int compte = 0;
     float sommeNeg = 0;
     float miniPos = 0;
     float maxiPos = 0;

     tabValNeg[1] = 0;
     tabValPos[1] = 0;


     for (i = 0; i < TAILLEMAX; i++) {
         printf("Donnez une valeur %d :", i + 1);
         scanf("%f", &tabVal[i]);

         if (tabVal[i] == 0) {
             compte = compte + 1;
         }
         if (tabVal[i] < 0) {
             tabValNeg[i] = tabVal[i];
             sommeNeg = sommeNeg + tabValNeg[i];
         }
         if (tabVal[i] > 0) {
             tabValPos[i] = tabVal[i];
         }

         if (maxiPos < tabValPos[i]) {
             maxiPos = tabValPos[i];
         }

         if (miniPos > tabValNeg[i]) {
             miniPos = tabValNeg[i];
         }
     }

     printf("Il y a %d valeur nulle dans tabVal \n", compte);
     printf("la somme des valeurs négatives est : %f \n", sommeNeg);
     printf("la valeur maximum est : %f \n", maxiPos);
     printf("la valeur minimum est : %f \n", miniPos);
     */
     
    //------------------------------------EX 4---------------------------------
    /*
    int tab1[TAILLES];
    int tab2[TAILLES];

    for (int i = 0; i < TAILLES; i++) {
        tab1[i] = rand() % 200 - 100;
        
    }
    
    for (int i = 0; i < TAILLES; i++) {
        tab2[TAILLES-i-1]=tab1[i];
    }
     */

    // ------------------------------------EX 5---------------------------------

  /*  int tabATrier[TAILLE];
    int tab1[TAILLE];

    int i;
    int indice;
     for (i = 0; i < TAILLE; i++) {
         tabATrier[i] = rand() % 200;
     }
    
    int mini = tabATrier[0];
    int mini2 = tabATrier[0];
    int mini3 = tabATrier[0];
    int mini4 = tabATrier[0];
    int mini5 = tabATrier[0];




    for (i = 0; i < TAILLE; i++) {
        printf(" %d |", tabATrier[i]);
    }

    printf("\n");
    for (i = 0; i < TAILLE; i++) {
        if (mini > tabATrier[i]) {

            mini = tabATrier[i];
        }
    }
    for (i = 0; i < TAILLE; i++) {
        if (mini2 > tabATrier[i] && tabATrier[i] != mini ) {
            mini2 = tabATrier[i];
        }
    }
    for (i = 0; i < TAILLE; i++) {
        if (mini3 > tabATrier[i] && tabATrier[i] != mini2 && tabATrier[i] != mini) {
            mini3 = tabATrier[i];
        }
    }
    for (i = 0; i < TAILLE; i++) {
        if (mini4 > tabATrier[i] && tabATrier[i] != mini2 && tabATrier[i] != mini && tabATrier[i] != mini3) {
            mini4 = tabATrier[i];
        }
    }
    for (i = 0; i < TAILLE; i++) {
        if (mini5 < tabATrier[i]) {
            mini5 = tabATrier[i];
        }
    }



    printf("%d \n", mini);
    printf("%d \n", mini2);
    printf("%d \n", mini3);
    printf("%d \n", mini4);
    printf("%d \n", mini5);
    printf("%d | %d | %d | %d | %d |", mini, mini2, mini3, mini4, mini5);

*/
    int E;
    int nbFace=5;
    E = rand() % nbFace-0;
    printf("%d",E);
    return (EXIT_SUCCESS);
}

