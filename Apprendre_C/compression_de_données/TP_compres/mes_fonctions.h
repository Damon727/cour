/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mes_fontions.h
 * Author: cmaillard
 *
 * Created on 20 janvier 2021, 10:50
 */

#ifndef MES_FONTIONS_H
#define MES_FONTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
    
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#pragma pack(push, 1)
#define NBCOULEURS 256
typedef struct
{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;

} typeEnTeteFichierBmp; 

typedef struct
{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilises;
    unsigned int nbCouleursImportantes;
} typeEnTeteImageBmp;

typedef struct
{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha; // reserve
}typeCouleur;

//void decompressBmp(FILE *fdSource,FILE *fdDest);
void decompressBmp (char *src,char *dst);
void compressBmp (char *src,char *dst);

#ifdef __cplusplus
}
#endif

#endif /* MES_FONTIONS_H */

