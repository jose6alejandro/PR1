#include "pr1-ula.h"

int main() 
{
    Caracter c;

    for (c = cargarCaracteres(); c != '\0'; c = siguienteCaracter()) 
    {
        imprimirCaracter(c);
    }

    saltar(1);

    return 0;
}
