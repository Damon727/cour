

/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 10:25
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    float age;
    printf("Donnez votre age");
    scanf("%f",&age);
if (age>=18)
{
    printf("Majeur");
}    

    return (EXIT_SUCCESS);
}

