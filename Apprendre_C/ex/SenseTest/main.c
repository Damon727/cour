/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 16 septembre 2020, 08:48
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

/*
 * 
 */
int main(int argc, char** argv) {

    char message[10] = "coucou";
    int retour;
    int colonne;
    int ligne;
    
    InitialiserLeds();
    /*
  for(colonne = 0;colonne <8; colonne = colonne+1){
        
    Allumer(7,colonne,BLEU);
    Allumer(6,colonne,BLEU);
    Allumer(5,colonne,BLEU);
    Allumer(4,colonne,BLANC);
    Allumer(3,colonne,BLANC);
    Allumer(2,colonne,ROUGE);
    Allumer(1,colonne,ROUGE);
    Allumer(0,colonne,ROUGE);
    
   
    }  

    
    for(colonne = 2;colonne <6; colonne = colonne+1){
        Allumer(0,colonne,ROUGE);
        Allumer(colonne,colonne,BLEU);
    }
// ecriture equivalente
    
colonne =0;
int ligne= 2;
while(ligne <6){
    Allumer(ligne,0,VERT);
    ligne++;
}*/
    
    
    
    
    for(ligne = 7; ligne >=0;ligne = ligne++){
        sleep(1);
        Effacer();
     for(colonne = 7; colonne >=0;colonne= colonne++){
           Allumer(ligne,colonne,BLEU );
           Allumer(colonne,ligne,ROUGE );}}
   
    for(ligne = 7; ligne >=0;ligne = ligne--){
        sleep(1);
        Effacer();
     for(colonne = 7; colonne>=0;colonne= colonne--){
           Allumer(ligne,colonne,BLEU );
           Allumer(colonne,ligne,ROUGE );}}
            
    
    
    
    
            
  
 
    retour = printf("%s\n", message); 
    retour = printf("%d\n", retour);
   
    return (EXIT_SUCCESS );
}

