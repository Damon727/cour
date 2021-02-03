/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "mes_fonctions.h"

void afficheEnTeteFichierBmp(typeEnTeteFichierBmp ef) {
    printf("Signature : %c%c\n", ef.signature[0], ef.signature[1]);
    printf("Taille fichier : %u\n", ef.tailleFichier);
    printf("Reserve : %u\n", ef.reserve);
    printf("Adresse info img : %u\n", ef.adresseImg);

}

void afficheEnTeteImageBmp(typeEnTeteImageBmp ei) {
    printf("Taille en-tete : %u\n", ei.tailleEnTete);
    printf("Largeur image : %u\n", ei.largeur);
    printf("Hauteur image : %u\n", ei.hauteur);
    printf("Nombre de plans : %u\n", ei.nbPlan);
    printf("Bits utilisés par pixel : %u\n", ei.bitParPixel);
    printf("Type de compression : %u\n", ei.typeCompression);
    printf("Taille image: %u\n", ei.tailleImage);
    printf("Résolution horizontale : %u\n", ei.resolutionHorizontale);
    printf("Résolution verticale : %u\n", ei.resolutionVerticale);
    printf("Nb de couleurs utilisées : %u\n", ei.nbCouleursUtilises);
    printf("Nb couleurs importantes : %u\n", ei.nbCouleursImportantes);

}

void afficherSteganoTxt(FILE *fic, int pas) {

    int retour;

    char message[50];
    int i = 0;



    retour = fseek(fic, 1078, SEEK_SET);

    while (i < 15) {

        message[i] = fgetc(fic);
        fseek(fic, pas, SEEK_CUR);

        printf("%c", message[i]);
        i++;
    }



}
void extraireSteganoImg(FILE *ficsrc,FILE *ficdst){
    int i,retour;
    unsigned char octet;
    fseek(ficsrc,1078,SEEK_SET);
    i=0;
    for(i=0;i<80*60+1078;i++){
        retour=fread(&octet,sizeof(unsigned char),1,ficsrc);
        if(retour !=1){
            if(!feof(ficsrc)){
                printf("pb lecture %s\n",strerror(errno));
                exit(errno);
            }
        }else{
            retour=fwrite(&octet, sizeof (unsigned char),1,ficdst);
            
        }
        fseek(ficdst,999,SEEK_CUR);
    }
}