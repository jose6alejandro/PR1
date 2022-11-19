#include <stdio.h>

int main()
{
    int  a = 5;
    int* b = &a;

    *b = *b + 1;

    printf("El contenido del entero x ahora es: %d \n", x);

    return 0;
}
