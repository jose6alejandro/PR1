#include "pr1-ula.h"

#define FILA 3
#define COLUMNA 4
#define PROFUNDIDAD 4

int main() {
   
   Entero arreglo[FILA][COLUMNA][PROFUNDIDAD];  
   Entero suma = 0;
   
   for (Entero k = 0; k < PROFUNDIDAD; k++) {
      
      imprimir("Profundidad ");
      imprimirEntero(k);
      saltar(1); 
      
      for (Entero i = 0; i < FILA; i++){
      
         for (Entero j = 0; j < COLUMNA; j++){

            arreglo[i][j][k] = generarAleatorio(10, 20);  
            suma = suma + arreglo[i][j][k];
            imprimirEntero(arreglo[i][j][k]);      
            espaciar(1); 
         }     

         saltar(1);
      }
   }

   imprimir("La suma de los elementos del cubo es: ");
   imprimirEntero(suma);
   saltar(1);

   return 0;
}
