#include "pr1-ula.h"

#define TAM 10

int main() {
   
   Entero notas[TAM];
   Entero i = 0;
   
   // Guardar notas
   for (i = 0; i < TAM; i++) {

      notas[i] = generarAleatorio(1,20);
   }

   // Mostrar notas
   for (i = 0; i < TAM; i++) {

      imprimirEntero(notas[i]);
      espaciar(1);
   }

   saltar(1);

   return 0;
}
