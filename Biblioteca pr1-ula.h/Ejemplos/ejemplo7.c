#include "pr1-ula.h"

void mensaje();

int main() 
{
    mensaje();

    return 0;
}

void mensaje()  
{   
    limpiar();
    imprimir("Hola, es mi primer procedimiento");
    esperar(2);
}