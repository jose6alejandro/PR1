#include <stdio.h>

int main(){

    int x = 5;
    int *i = &x;

    *i = *i + 1;

    printf("El contenido del entero x ahora es: %i\n", x);

    char y = 'a';
    char *c = &y;

    *c  = 65;

    printf("El contenido del caracter y ahora es: %c\n", y);

    float z = 19.9;
    float *f = &z;

    *f = *f - 3;

    printf("El contenido del flotante z ahora es: %.2f\n", z);


    return 0;
}
