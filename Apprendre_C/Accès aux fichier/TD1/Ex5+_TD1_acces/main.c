/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 14 janvier 2021, 09:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#pragma pack(push, 1)

#define NBMAXCAR 50
#define NBPERS 5

typedef struct personne {
    char nom[NBMAXCAR];     //50 octets
    char prenom[NBMAXCAR];  //50 octets
    int age;                //4 octets
    float poids;            //4 octets
    char sexe; // 'f' ou 'm'  1 octets
} typePersonne; //109 octets


int main(int argc, char** argv) {
    FILE *fic;
    typePersonne tabPersonne[NBPERS];
    int i;
    int retour;
    //init des 5 personnes
    
    for (i = 0; i < NBPERS; i++) {
        tabPersonne[i].age = 30 + i;
        tabPersonne[i].poids = 80.3;
        tabPersonne[i].sexe = 'f';
        strcpy(tabPersonne[i].nom, "fox");
        strcpy(tabPersonne[i].prenom, "samantha");
    }
    
    // ouverture du fichier en lecture
    
    fic = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/NetBeansProjects/Apprendre_C/Accès aux fichier/TD1/Ex4/essai2.txt", "r");
    if (fic == NULL) {
        printf("%s\n", strerror(errno));
        exit(errno);
    }
   
    
    //lecture des 5 personnes
    /*
     retour=fread(tabPersonne,sizeof (typePersonne),NBPERS,fic);
    if(retour!=NBPERS)
    {
        printf("%s\n", strerror(errno));
        exit(errno);
    }*/
    
     
    //lecture 5 personnes
    for(i=0;i<NBPERS;i++){
        retour=fscanf(fic,"nom :%s\nprenom :%s\nage :%d\npoids :%.2f\nsexe :%c\n",
                tabPersonne[i].nom,
                tabPersonne[i].prenom,
                &tabPersonne[i].age,
                &tabPersonne[i].poids,
                &tabPersonne[i].sexe);
        if(retour == EOF)
        {
            printf("pb ecriture fscanf\n");
            exit(errno);
        }
    }
    // affichage
    
    for(i=0;i<NBPERS;i++){
      printf("nom :%s\nprenom :%s\nage :%d\npoids :%.2f\nsexe :%c\n",
                tabPersonne[i].nom,
                tabPersonne[i].prenom,
                tabPersonne[i].age,
                tabPersonne[i].poids,
                tabPersonne[i].sexe);
      printf("---------------------\n");
    }
    
    //fermeture de fichier
    retour = fclose(fic);
    
    if (retour == EOF){
        printf("%s\n",strerror(errno));
        exit(errno);
    }


    return (EXIT_SUCCESS);
}