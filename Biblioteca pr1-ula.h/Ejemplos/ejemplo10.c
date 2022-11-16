#include "pr1-ula.h"

void movimiento(Entero);

int main() 
{   
    movimiento(6);

    return 0;
}

void movimiento(Entero tam) 
{   
    Entero i = 0; 
 	
    for (i = 0; i < tam; i++) 
    {   	
        limpiar();
        saltar(i);
        espaciar(i + 1);
        imprimir("⚽");
        esperar(1);
    }

}