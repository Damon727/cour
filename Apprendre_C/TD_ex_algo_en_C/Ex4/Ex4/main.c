/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 11:23
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int val;
    printf("Donnez une valeur comprise entre 0 et 255:");
    scanf("%i",&val);
    
    if(val>=128){
        val=val-128;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=64){
        val=val-64;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=32){
        val=val-32;
                printf("1");
    }
    else{
        printf("0");
    }    
    if(val>=16){
        val=val-16;
                printf("1");
    }
    else{
        printf("0");
    }    
    if(val>=8){
        val=val-8;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=4){
        val=val-4;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=2){
        val=val-2;
                printf("1");
    }
    else{
        printf("0");
    }
    if(val>=1){
        val=val-1;
                printf("1");
    }
    else{
        printf("0");
    }
    
    return (EXIT_SUCCESS);
}

