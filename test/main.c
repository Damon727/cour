/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 09:04
 */

#include <stdio.h>
#include <stdlib.h>
#include "serie.h"
#include <unistd.h>



int main(int argc, char** argv) {
    char *device = "/dev/ttyS0";
    int fdSerie;
    char message[1000];
    fdSerie = ouvrirPort(device);
    configurerSerie(fdSerie, 9300, ECHO);
    
    int nb = recevoirMessage(fdSerie, message , '\r');
    printf("%s", message);
    fermerPort(fdSerie);
    
   
    return (EXIT_SUCCESS);
}

