#include "stdio.h"

#define TAM 5

void ordenamiento_burbuja(int [TAM]);
void imprimir_vector(int [TAM]);

int main()
{
    int vector[TAM] = {9, 0, 2, 7, 1};
    
    ordenamiento_burbuja(vector);
    imprimir_vector(vector);
    
    return 0;
}

void ordenamiento_burbuja(int vector[TAM])
{    
    int aux = 0;

    for (int i = 0; i < TAM - 1; i++) 
    {        
        for (int j = 0; j < TAM - 1 - i; j++) 
        {    
            if (vector[j] > vector[j + 1]) 
            {  
                aux = vector[j + 1];
                vector[j + 1] = vector[j];
                vector[j] = aux;
            }
        }
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

