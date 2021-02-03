
#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"



typePersonne creePersonne() {
    typePersonne p;

    printf("Donnez un nom :");
    scanf("%s", p.nom);
    printf("Donnez un prenom :");
    scanf("%s", p.prenom);
    printf("Donnez une annee :");
    scanf("%d", &p.annee);
    printf("Donnez un poids :");
    scanf("%f", &p.poids);
    printf("Donnez une taille :");
    scanf("%f", &p.taille);


    return p;
}

void affichePersonne(typePersonne p) {
    printf("Nom : %s\n",p.nom);
    printf("Prenom : %s\n",p.prenom);
    printf("Anne de naissance : %d\n",p.annee);
    printf("Taille : %.2f\n",p.taille);
    printf("Poids : %.2f\n",p.poids);
}

typePersonne *creePersonnePtr() {
    typePersonne *p;
    p=(typePersonne *)malloc(sizeof(typePersonne));
    printf("Donnez un nom :");
    scanf("%s", p->nom);
    printf("Donnez un prenom :");
    scanf("%s", p->prenom);
    printf("Donnez une annee :");
    scanf("%d", &p->annee);
    printf("Donnez un poids :");
    scanf("%f", &p->poids);
    printf("Donnez une taille :");
    scanf("%f", &p->taille);


    return p;
}
void affichePersonnePtr(typePersonne *p) {
    printf("Nom : %s\n",p->nom);
    printf("Prenom : %s\n",p->prenom);
    printf("Anne de naissance : %d\n",p->annee);
    printf("Taille : %.2f\n",p->taille);
    printf("Poids : %.2f\n",p->poids);
}