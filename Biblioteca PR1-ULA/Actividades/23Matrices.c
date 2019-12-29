#include "pr1-ula.h"

#define fila    4
#define columna 4

int main(){

    Entero  vector[fila][columna];
    Entero  contador = 0;
    Entero  num = 0;
    Entero  repetido = 0;
    Entero  cantidad = 0;
        
    /*ingresar y mostrar los datos*/
    for (Entero i = 0; i < fila; i++){
            
        for (Entero j = 0; j < columna; j++){
            vector[i][j] = generarAleatorio(0, 10);
            imprimirEntero(vector[i][j]);
            espaciar(2);
        }

        saltar(1);
    }

    /*buscar el número que más se repite*/
    for (Entero x = 0; x < fila; x++){
        for (Entero y = 0; y < columna; y++){
                
            num = vector[x][y];
            contador = 0;
                
            for (Entero i = 0; i < fila; i++){
                for (Entero j = 0; j < columna; j++){
                    if(num == vector[i][j])
                        contador++;
                }   
            }

            if(y == 0){
                repetido = num;
                cantidad = contador;
            }

            if(y > 0){
                if(contador > cantidad){
                    repetido = num;
                    cantidad = contador;                        
                }
            }

        }
    }

    /*Mostar resultado*/
    saltar(1);
    imprimir("El número: ");
    imprimirEntero(repetido);
    imprimir(" es el que más se repite con: ");
    imprimirEntero(cantidad);
    imprimir(" apariciones");
    saltar(1);

    return 0;
}
