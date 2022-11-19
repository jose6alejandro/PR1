#include "stdio.h"

#define TAM 5

void ordenamiento_seleccion(int [TAM]);
void imprimir_vector(int [TAM]);

int main()
{
    int vector[TAM] = {9, 0, 2, 7, 1};
    
    ordenamiento_seleccion(vector);
    imprimir_vector(vector);
    
    return 0;
}

void ordenamiento_seleccion(int vector[TAM])
{    
    int aux = 0;

    for (int i = 0; i < TAM; i++)
    { 
        int menor = i;
       
        for (int j = i + 1; j < TAM; j++)
        {
            if (vector[menor] > vector[j])
            {
                menor = j;
            }
        }
        aux = vector[menor];
        vector[menor] = vector[i];
        vector[i] = aux;
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

