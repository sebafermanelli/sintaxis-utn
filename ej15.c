#include <stdio.h>
#include <string.h>

/*
#include <ctype.h>
*/

main() {
    char cadena [6];
    char true;

    system("cls");

    printf("EJERCICIO 15 DE LA PRACTICA LENGUAJES\n");
    printf("Escribe una cadena de 6 caracteres con el alfabeto V = {a, b, c, d, x, y, z}:\n");

    do {
        true='s';
        scanf("%6s", cadena);
        fflush(stdin);
        for (int i=0;i<6;i++) {
            if(cadena[i] != 'a' && cadena[i] != 'b' && cadena[i] != 'c' && cadena[i] != 'd' && cadena[i] != 'x' && cadena[i] != 'y' && cadena[i] != 'z') {
                true='n';
            }
        }
    } while (strlen(cadena) == 6 && true == 'n' && (cadena[5] != 'a' || cadena[5] != 'b' || cadena[5] != 'c' || cadena[5] != 'd' || cadena[5] != 'x' || cadena[5] != 'y' || cadena[5] != 'z'));

    system("cls");
    printf("LA CADENA ES: %6s", cadena);
    printf("\n");

    printf("SUFIJOS:\n");
    for (int i=1;i<6;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=2;i<6;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=3;i<6;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=4;i<6;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=5;i<6;i++) {
        printf("%c", cadena[i]);
    }

    printf("\n");
    
    printf("PREFIJOS:\n");
    for (int i=0;i<5;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=0;i<4;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=0;i<3;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=0;i<2;i++) {
        printf("%c", cadena[i]);
    }
    printf("\t");
    for (int i=0;i<1;i++) {
        printf("%c", cadena[i]);
    }
}