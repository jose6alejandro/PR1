#include "pr1-ula.h"

Entero mayor(Entero, Entero);

int main() {
   
   limpiar();
   imprimirEntero(mayor(10, 6));
   esperar(2);

   return 0;
}

Entero mayor(Entero a, Entero b) {
   
   if (a > b ) {
      return a;
   }

   return b;
}