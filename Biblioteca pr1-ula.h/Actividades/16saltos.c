#include "pr1-ula.h"

void mover(Entero, Entero);

int main(){

    Entero numA = 0;
    Entero numB = 5;

    mover(numA, numB);

    return 0;
}

void mover(Entero numA, Entero numB){
    
    if(numB > 0){
        limpiar();
        saltar(numA);
        espaciar(numA);
        imprimirEntero(numA + 1);
        esperar(1);     
        numA = numA + 1;
        mover(numA, numB - 1);
    }
}