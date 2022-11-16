#include "pr1-ula.h"

int main() 
{
    Entero contador = 0;

    for (contador = 1; contador < 5; contador++)    
    {	
        limpiar();
        imprimirEntero(contador);
        esperar(1);
    }

    return 0;
}
