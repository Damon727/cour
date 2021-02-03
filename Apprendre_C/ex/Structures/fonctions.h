/* 
 * File:   fonctions.h
 * Author: cmaillard
 *
 * Created on 26 novembre 2020, 09:32
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
        unsigned int annee;
        float taille;
        float poids;
    } typePersonne;

    typePersonne creePersonne();
    void affichePersonne(typePersonne p);
    typePersonne *creePersonnePtr();
    void affichePersonnePtr(typePersonne*p);
#ifdef __cplusplus
}
#endif

#endif /* FONCTIONS_H */

