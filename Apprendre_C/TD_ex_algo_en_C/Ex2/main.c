/* 
 * File:   main.c
 * Author: cmaillard
 *
 * Created on 30 septembre 2020, 10:30
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    float note;
    
    printf("Donnez une note entre 0 et 20:");
    scanf("%f",&note);
if (note>10)
{
    printf("Vous avez plus que la moyenne");
}  
else{if(note==10)
{
    printf("Vous avez la moyenne");
}
else{if(note<10)
{
    printf("Vous avez moin que la moyenne");
}
}
}
    return (EXIT_SUCCESS);
}

