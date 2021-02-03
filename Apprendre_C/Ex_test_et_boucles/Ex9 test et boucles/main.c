/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 7 octobre 2020, 10:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    unsigned long cases;
    unsigned long somme =1;
    unsigned long total=1;
    



    for (cases = 2; cases <= 64; cases++) {
        somme=somme*2;
        total=total+somme;
  }
    printf("il y'a %lu de grain de riz",total);

    return (EXIT_SUCCESS);
}

