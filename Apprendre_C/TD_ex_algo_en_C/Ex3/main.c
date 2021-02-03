/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 10:39
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    float masse;
    float taille;
    float imc;
    
    
   
    printf("Donnez votre masse:");
    scanf("%f",&masse);
    printf("Donnez votre taille:");
    scanf("%f",&taille);
    imc=masse/(taille*taille);
    printf("Voici votre imc: %f \n",imc );
    
            
    if(imc>18.5 && imc<25)
    {
        printf("Vous etes dans la moyenne");
    }
    else{if(imc<18.5 || imc>25){
        printf("Vous n'etes pas dans la moyenne");
    }
    }
    
     

    return (EXIT_SUCCESS);
}

