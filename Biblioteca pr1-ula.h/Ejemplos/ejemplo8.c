#include "pr1-ula.h"

void mensaje(Entero);

int main() {

	mensaje(1);
   mensaje(0);

   return 0;
}

void mensaje(Entero msj) {
   
   limpiar();
   
   if (msj == 1) {

   	imprimir("Buen día");
   }

   if (msj != 1) {

   	imprimir("feliz noche");
   }

   esperar(2);
}