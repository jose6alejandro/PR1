#include "pr1-ula.h"

void invertirCadena(Cadena);

int main() 
{
    Cadena frase = leerCadena();

    invertirCadena(frase);

    return 0;
}

void invertirCadena(Cadena frase) 
{
    //  imprimir(frase.caracteres);
   
    for (Entero i = frase.tam - 1; i >= 0; i--) 
    {
        imprimirCaracter(frase.caracteres[i]);
    }
}