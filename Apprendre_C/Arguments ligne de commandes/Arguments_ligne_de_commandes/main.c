/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 10 décembre 2020, 09:22
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv) {

    /*
    float a,b,c,delta;
    if (argc != 4){
        printf("usage : %s a b c\n",argv[0]);
        exit(0);
    }
    
    sscanf(argv[1],"%f",&a);
    if(a== 0){
        printf("usage : %s a b c \na doit etre different de 0\n",argv[0]);
        exit(0);
    }
    sscanf(argv[2],"%f",&b);
    sscanf(argv[3],"%f",&c);
    
    delta=b*b-4*a*c;
    
    if (delta<0){
        printf("pas de racine pour le polynome (%.2f)x²+(%.2f)x + (%.2f) = 0\n",a,b,c);
    }
    else{
        printf("le polynome (%.2f)x²+(%.2f)x + (%.2f) = 0 a pour racines : \n",a,b,c);
        printf("x1 = %f \nx2 = %f\n",(-b-sqrtf(delta))/(2*a),(-b+sqrtf(delta))/(2*a));
    }
     */

    /*
    int i;
    for(i=0;i<argc;i++){
       
        printf("argv[%d] = %s\n",i,argv[i]);
    }
     */
    float val1, val2, resultat;

    if (argc != 4) {
        printf(" usage : %s operation val1 val2\n", argv[0]);
        exit(0);

    }
    //tester le premier argument
    // est ce une addition
    sscanf(argv[2], "%f", &val1);
    sscanf(argv[3], "%f", &val2);
    
    if (strcmp(argv[1], "+") == 0) {
        //convertion des arguments val1 et val2 en float
        
        // faire l'addition
        resultat = val1 + val2;
        printf("%.2f + %.2f =%.2f\n", val1, val2, resultat);
    }
    if (strcmp(argv[1], "-") == 0) {
        //convertion des arguments val1 et val2 en float
        
        // faire la soustraction
        resultat = val1 - val2;
        printf("%.2f - %.2f =%.2f\n", val1, val2, resultat);
    }
    if (strcmp(argv[1], "/") == 0) {
        //convertion des arguments val1 et val2 en float
       
        // faire la division
        resultat = val1 / val2;
        printf("%.2f / %.2f =%.2f\n", val1, val2, resultat);
    }
    if(strcmp(argv[1], "x") == 0){
        //convertion des arguments val1 et val2 en float
        
        // faire la multiplication
        resultat = val1 * val2;
        printf("%.2f * %.2f =%.2f\n", val1, val2, resultat);
    }
    return (EXIT_SUCCESS);
}

