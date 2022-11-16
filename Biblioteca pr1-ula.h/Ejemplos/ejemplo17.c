#include "pr1-ula.h"

#define TAM 4

Entero promedio(Entero [TAM]);

int main() 
{
    Entero notas[TAM];
    Entero i = 0;
   
    for (i = 0; i < TAM; i++) 
    {
        notas[i] = generarAleatorio(1,20);
    }

    imprimir("Notas acumuladas: ");

    for (i = 0; i < TAM; i++) 
    {
        imprimirEntero(notas[i]);
        espaciar(1);
    }

    saltar(1);
    imprimir("Nota definitiva: ");
    imprimirEntero(promedio(notas));
    saltar(1);

    return 0;
}

Entero promedio(Entero notas[TAM]) 
{

    Entero promedioNotas = 0;

    for (Entero i = 0; i < TAM; i++) 
    {
        promedioNotas += notas[i];
    }

    return (promedioNotas / TAM);
}