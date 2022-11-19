#include <stdio.h>

int main()
{    
    int numero;

    do 
    {
        printf("Introduzca un número: ");
        scanf("%d", &numero);
    } 
    while (numero != 6);

    return 0;
}