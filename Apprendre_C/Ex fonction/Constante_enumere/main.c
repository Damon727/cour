/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 3 décembre 2020, 10:16
 */

#include <stdio.h>
#include <stdlib.h>
#include "type_enum.h"

/*
 * 
 */
int main(int argc, char** argv) {



    /*
        char *nomJour[7] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", " dimanche"};
        jours aujourdhui = Jeudi;
        jours weekend = Samedi;
        printf("%s\n%s\n", nomJour[aujourdhui],nomJour[weekend]);
     */
    if (estUnPalindrome("coucou")) 
    {
        printf("coucou est un palindrome\n");
    } 
    else 
    {
        printf("coucou n'est pas un palindrome\n");
    }
     if (estUnPalindrome("eluparcettecrapule")) 
    {
        printf("eluparcettecrapule est un palindrome\n");
    } 
    else 
    {
        printf("eluparcettecrapule n'est pas un palindrome\n");
    }
    return (EXIT_SUCCESS);
}

