#include "pr1-ula.h"

#define tam 5

int main(){

    Entero vector[tam];
    Entero aux;
    Entero i;
    
    for (i = 0; i < tam; i++){
        vector[i] = generarAleatorio(1, 10);
        imprimirEntero(vector[i]);
        espaciar(2);
    }

    aux = vector[0];
        
    for (i = 0; i < tam; i++){
        if(aux < vector[i])
            aux = vector[i];
    }

    saltar(1);
    imprimir("El número mayor es: ");
    imprimirEntero(aux);
    saltar(1);

    return 0;
}

 