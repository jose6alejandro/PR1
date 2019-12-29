#include "pr1-ula.h"

#define fila        4
#define columna     3
#define profundidad 2

int main(){

    Entero vector[fila][columna][profundidad];  
    Entero suma = 0;

    for (Entero k = 0; k < profundidad; k++){   
            
        imprimir("Profundidad ");
        imprimirEntero(k);
        saltar(1);

        for (Entero i = 0; i < fila; i++){

            for (Entero j = 0; j < columna; j++){
                vector[i][j][k] = generarAleatorio(10, 20);
                suma = suma + vector[i][j][k];
                imprimirEntero(vector[i][j][k]);
                espaciar(2);    
            }
                saltar(1);
        }
    }

    imprimir("La suma de los elementos del cubo es: ");
    imprimirEntero(suma);
    saltar(1);

    return 0;
} 