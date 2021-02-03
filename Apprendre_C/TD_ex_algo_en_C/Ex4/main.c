/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 10:50
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    float a;
    float b;
    float c;
    float delta;
    
    printf("Donnez la valeur de a:");
    scanf("%f",&a);
    printf("Donnez la valeur de b:");
    scanf("%f",&b);
    printf("Donnez la valeur de c:");
    scanf("%f",&c);
    
    delta= (b*b)-4*a*c;
            
    if(delta>=0)
    {
        printf("Il ya a des solutions");
    }
    else{if(delta<0){
        printf("IL n'y a pas de solutions");
    }
    }
    
    
    return (EXIT_SUCCESS);
}

