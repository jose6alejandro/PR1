#include "pr1-ula.h"
 
/*
   Colores Básicos:
   NEGRO, AZUL, ROJO, MORADO, VERDE, CIAN, MAGENTA, BLANCO.
*/

int main() {

   saltar(1);
   
   // Usando colores básicos
   imprimirColor("NEGRO","VERDE", "Programando de día ");
   
   saltar(2);
   esperar(1);
   
   // Usando colores extendidos
   imprimirColor2(17, 13, "Programando de noche");
   
   saltar(2);
   esperar(1);
   
   return 0;
}


