#include "pr1-ula.h"

void preguntar(Entero, Entero);
void responder(Entero, Entero, Entero);

int main(){

    Entero aux = 5;
    Entero numA = aux;
    Entero numB = 2;

    limpiar();
    preguntar(numA,numB);
    responder(numA,aux,numB);

    return 0;
}

void preguntar(Entero numA, Entero numB){
    imprimir("Potencia de ");
    imprimirEntero(numA);
    imprimir(" ^ ");
    imprimirEntero(numB);
}

void responder(Entero numA, Entero aux, Entero numB){
    
    if(numB > 1){
        responder(aux * numA, aux, numB - 1);
    }

    if(numB == 1){
        imprimir(" = ");
        imprimirEntero(numA);       
    }
}
