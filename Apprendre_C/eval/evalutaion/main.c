/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 08:33
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>


int main(int argc, char** argv) {
    
    int ligne;
    int colonne;
    
    initialiserleds();
    
    for(colonne = 0;colonne <= 7; colonne = colonne+1){
        for(colonne = 0;colonne <ligne; colonne = colonne+1){
            Allumer(ligne,colonne,ROUGE);
            Allumer(colonne,ligne,ROUGE);
        }   
    }
    usleep(100000);
    Effacer();

    return (EXIT_SUCCESS);
}

