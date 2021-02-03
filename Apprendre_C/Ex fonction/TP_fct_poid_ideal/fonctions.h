/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fonctions.h
 * Author: cmaillard
 *
 * Created on 1 décembre 2020, 13:23
 */

#ifndef FONCTIONS_H
#define FONCTIONS_H
#define NBMAXCARNOM 70
#define NBMAXCARPRENOM 50

#ifdef __cplusplus
extern "C" {
#endif
typedef struct personne {
        char nom[NBMAXCARNOM];
        char prenom[NBMAXCARPRENOM];
        char sexe;
        int annee;
        float taille;
        float poids;
    } typePersonne;

    typePersonne creePersonne();
    void afficherFiche(typePersonne p);
    void afficherCorpulence(typePersonne p);
    void afficherMenu(typePersonne p);
    float calculerPoidsLorentz(typePersonne p);
    float calculerPoidsLorentzAge(typePersonne p);
    float calculerPoidsDevine(typePersonne p);
    
#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */

