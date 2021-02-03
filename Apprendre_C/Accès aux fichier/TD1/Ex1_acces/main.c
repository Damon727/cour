#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


void afficherErreur();

int main() {
    FILE *fd;
    int resultat;
    char caractere;

    fd = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/essai.txt", "w");
    
    if (fd == NULL) // pb ouverture fichier
    {
        afficherErreur();
    } else {
        resultat = fputs("Bonjour\n",fd);
        printf("valeur de retour : %d\n",resultat);

    fclose(fd);
    }
    printf("_______________________________________\n");
    
    fd = fopen("/home/USERS/ELEVES/SNIR2020/cmaillard/essai.txt", "r");
    
    if (fd == NULL) // pb ouverture fichier
    {
        afficherErreur();
    } else {
        //lecture
        while (!feof(fd)) {
            caractere = fgetc(fd);
            printf("%c",caractere);
        }


        fclose(fd);
    }
    
    
    return EXIT_SUCCESS;
}

void afficherErreur() {
    if (errno != 0) {
        printf("Erreur : %s\n", strerror(errno));
    }
}