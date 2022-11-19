#include "stdio.h"

int main()
{    
    int i = 0;
    int numero;
    
    printf("Introduzca un número: ");
    scanf("%d", &numero);
    
    while (i < numero)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}