#include "pr1-ula.h"

#define PARCIAL 3
#define NOTAS 8

int main() {
   
   Entero estudiante[PARCIAL][NOTAS];
   Entero i = 0;
   Entero j = 0;

   // Guardar notas
   for (i = 0; i < PARCIAL; i++) {

      for (j = 0; j < NOTAS; j++) {
         
         estudiante[i][j] = generarAleatorio(1,20);
      }
      
   }

   // Mostrar notas
   for (i = 0; i < PARCIAL; i++) {

      imprimir("Parcial ");
      imprimirEntero(i + 1);
      imprimir(": ");

      for (j = 0; j < NOTAS; j++) {

         imprimirEntero(estudiante[i][j]);
         espaciar(1);
      }

      saltar(1);    
   }

   saltar(1);

   return 0;
}
