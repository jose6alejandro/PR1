#include "pr1-ula.h"

// Operadores relacionales y lógicos (>, >=, ==, !=, <=, <, &&,||)

int main() 
{
    Entero i = 5;
    Entero j = 9;

    if (i > j) 
    {
        imprimir("i es mayor a j");
    }
   
    if (i < j) 
    {
        imprimir("i es menor a j");
    }

    if (i == j) 
    {
        imprimir("i es igual a j");
    }
   
    return 0;
}
