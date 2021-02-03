/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 11:42
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int tentative;
    int code;
    int essaie;
    code=384;
    tentative=0;
    
    
    while( tentative < 3 && code != essaie)
    {
    printf("Donnez le code :");
    scanf("%d",&essaie);
    
    if(essaie != code)
    {
        printf("code incorrect \n");
    
    }
    else{
        printf("code Ok");
    }
    tentative++;
    }
    return (EXIT_SUCCESS);
}

