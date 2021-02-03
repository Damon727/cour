/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 10:59
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {

    float heures;
    float minutes;
    int temps;
    int temps2;
    float cout1;
    float cout2;
    float cout3;
    float cout4;
    
    
    printf("Donnez le nombre d'heures:");
    scanf("%f",&heures);
    printf("Donnez le nombre de minutes:");
    scanf("%f",&minutes);
    
    temps = (heures*60+minutes)/15;
    cout1= temps*0.50;
    cout2= (temps-10)*0.40+cout1;
    cout3= (temps-12)*0.20+cout1+cout2;
    cout4= (temps-28)*0.10+cout1+cout2+cout3;
    
    if(temps <=4)
    {
        printf("Gratuit");
    }
    else{if(temps>4 && temps<=10)
    {
        printf( "Coute: %f euros",cout1); 
        
    }
    else{if(temps>10 && temps <=12){
        printf("Coute: %f euros",cout2);
    }
    else{if(temps>12 && temps<=28){
        printf("Coute: %f euros",cout3);
    }
    else{if(temps>28){
        printf("Coute: %f euros",cout4);    
    }
    }
    }
    }
    }
    
    
    return (EXIT_SUCCESS);
}

