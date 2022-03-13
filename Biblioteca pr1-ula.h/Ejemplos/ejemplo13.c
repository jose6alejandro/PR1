#include "pr1-ula.h"

void consultarNumero(Entero);

int main() {
   
   Entero aleatorio = generarAleatorio(1,9);

   saltar(1);
   imprimir("El número aleatorio es ");
   imprimirEntero(aleatorio);
  
   consultarNumero(aleatorio);

   return 0;
}

void consultarNumero(Entero n) {
   
   if ((n % 2) ==  0) {
      
      imprimir(" y es par");
   }

   if ((n % 2) !=  0) {

      imprimir(" y es impar");
   }

   saltar(1);
}