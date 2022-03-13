#include "pr1-ula.h"

// Operadores aritméticos (+, -, *, /, %, ++, --)

int main() {

   Entero a = 10;
   Entero b = 6;
   Entero c = a + b;

   c = c / 2;

   imprimirEntero(c);

   c++;

   esperar(2);
   imprimirEntero(c * a);
   
   return 0;
}
