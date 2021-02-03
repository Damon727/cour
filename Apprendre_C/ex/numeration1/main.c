/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 21 septembre 2020, 14:53
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int a = 170;
    int b = 255;
    
    int s =a ^ b;
    printf("s = %d\n",s);
    
    
    return (EXIT_SUCCESS);
}

