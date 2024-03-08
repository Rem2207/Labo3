#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int arg, char *argv[]){

    int entero=0;
    char cadena[20+1];

    memset(cadena,0x00,sizeof(cadena));
    memcpy(cadena,"chocolate",4);
    puts("Hola chochi");
    puts("Pase 0");
    entero=atoi(argv[1]);
    printf("cadena : %s\n", cadena);
    memset(cadena,0x00,sizeof(cadena));
    memcpy(cadena,"leche",5);
    puts("Pase 1");
    printf("cadena : %s\n", cadena);

    return 0;



}