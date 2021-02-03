/* 
 * File:   poker.c
 * Author: 
 *
 * Created on 28 novembre 2019, 08:53
 * Modified on 
 * Description : définition des fonctions pour le poker aux dés
 */
#include "poker.h"


#define NBMAXCAR 50
#define NBDES 5
#define NBJOUEUR 2
#define NBFACES 6

void msleep(unsigned int maxTime) {

    struct timespec req;
    struct timespec rem;
    time_t secondes = 0;
    long nanoSecondes = 0;
    if (maxTime >= 1000) {
        do {
            secondes++;
            maxTime -= 1000;
        } while (maxTime >= 1000);
    }
    nanoSecondes = maxTime * 1000000;
    req.tv_sec = secondes;
    req.tv_nsec = nanoSecondes;
    nanosleep(&req, &rem);

}

unsigned int aleatoire(unsigned int maxAlea) {
    struct timeb t;
    float a, b;
    unsigned int nbmilli;
    ftime(&t);
    nbmilli = t.time * 1000 + t.millitm;
    srand(nbmilli);
    a = rand();
    b = (maxAlea * a) / RAND_MAX;
    msleep(250);
    return ( (unsigned int) b);


}

int calculerScore(int des[], int nbDes) {
    unsigned int idem[NBFACES] = {0, 0, 0, 0, 0, 0};
    // compteurs de combinaison
    int paire = 0, brelan = 0, carre = 0, poker = 0;
    int score = 0;
    // faire le compte des faces identiques pour chaque valeur de face
    for (int i = 0; i < nbDes; i++) {
        idem[des[i]]++;
    }
    // pour chaque face de des, compter le nombre d'occurence
    for (int i = 0; i < NBFACES; i++) {
        if (idem[i] == 2) {
            paire++;

        }
        if (idem[i] == 3) {
            brelan++;

        }
        if (idem[i] == 4) {
            carre++;

        }
        if (idem[i] == 5) {
            poker++;

        }
    }
    // application de la pondération pour chaque combinaison pour avoir le score
    score = paire * 10 + brelan * 30 + carre * 60 + poker * 70;

    return score;

}

/**
 * @brief tester si l'age est supérieur à l'age limite
 * @param age age a tester
 * @param ageLimite limite d'age
 * @return -1 si age<ageLimite, 0 sinon
 */
int testerAge(int age, int ageLimite) {
    float retourne;
    if (age >= ageLimite) {
        retourne = 0;
    } else {
        retourne = -1;
    }
    return retourne;
}

/**
 * @brief demander la mise du joueur lui redemandant tant que celle-ci est plus grande que son solde
 * @param solde solde du joueur
 * @return le valeur de la mise
 */
int demanderMise(int solde) {
    int mise;
    
    do{
        printf("votre mise (solde de %d) ? ", solde);
        scanf("%d", &mise);
    }while (mise > solde) ;
    return mise;
}

/**
 * @brief tire une valeur aleatoire entre 0 et nbFace
 * @param nbFace
 * @return une valeur E[0..nbFace[
 */
int lancerUnDes(int nbFace) {
    int E;
    E = aleatoire(nbFace);
    return E;
}

/**
 * @brief afficher la position et la valeur de chacun des dés
 * @param des le tableau correspondant aux valeurs des dés
 * @param nbDes nombre de dés
 */
void afficherCombinaison(int des[], int nbDes) {
    int i;
    printf("----------------------------------------\n numero du des");
    for (i = 0; i < nbDes; i++) {
        printf(" | %d",i);
    }
    printf(" |\n");
    printf("----------------------------------------\n valeur du des");
    for (i = 0; i < nbDes; i++) {
        printf(" | %d",des[i]);
    }
    printf(" |\n");
    printf("----------------------------------------\n%s",GREY);
}

/**
 * @brief demander la position du dés à relancer tant que la position n'est pas comprise entre [-1..4]
 * @return la position du dés
 */
int demanderNumeroDeDes() {
    int num;
    printf("numero du des a relancer (0,1,2,3,4 ou -1 si aucun) :");
    scanf("%d", &num);
    while (num<-1 && num > 4) {
        printf("numero du des a relancer (0,1,2,3,4 ou -1 si aucun) :");
        scanf("%d", &num);
    }
    return num;
}
