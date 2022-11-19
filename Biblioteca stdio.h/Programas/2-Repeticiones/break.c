#include <stdio.h>

int main() 
{
    int numero;

    printf("Introduzca un número: ");
    scanf("%d", &numero);
    
    for (int i = 0; i < 10; i++) 
    {
        if (numero == 6)
        {
            break;
        }

        printf(" %d ", i + 1);
    }

    printf("\n");

    return 0;
}