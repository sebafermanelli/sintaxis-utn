#include <stdio.h>

/*
#include <string.h>
#include <ctype.h>
*/

main() {
    char xyz[3]={'x','x','x'};

    system("cls");
    printf("EJERCICIO 14 DE LA PRACTICA LENGUAJES\n");
    printf("Las palabras posibles de 3 simbolos que se puedan formar con el alfabeto V = {z, x, y} son:\n");

    for (int c1=0;c1<3;c1++) {
        for (int c2=0;c2<3;c2++) {
            for (int c3=0;c3<3;c3++) {
                printf("- %c%c%c -", xyz[0]+c1, xyz[1]+c2, xyz[2]+c3);
            }
        }
        printf("\n");
    }
}