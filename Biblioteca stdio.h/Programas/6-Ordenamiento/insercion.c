#include "stdio.h"

#define TAM 5

void ordenamiento_insercion(int [TAM]);
void imprimir_vector(int [TAM]);

int main()
{
    int vector[TAM] = {9, 0, 2, 7, 1};
    
    ordenamiento_insercion(vector);
    imprimir_vector(vector);
    
    return 0;
}

void ordenamiento_insercion(int vector [TAM])
{
    int aux = 0;
    int j = 0;

    for (int i = 0; i < TAM; i++)
    {
        j = i - 1;
        aux = vector[i];
        
        while (j >= 0 && aux < vector[j])
        {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
        
        vector[j + 1] = aux;
    }  
}

void imprimir_vector(int vector[TAM])
{        
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vector[i]);
    }

    printf("\n");
}

