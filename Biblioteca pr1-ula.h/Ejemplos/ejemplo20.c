#include "pr1-ula.h"

Entero buscarLetra(Caracter);

int main() {

	Entero buscar = buscarLetra('e');

	if (buscar) {
		imprimir("La letra se encuentra en la frase");
	}

	if (buscar != 1) {
		imprimir("La letra  no se encuentra en la frase");
	}	

	saltar(1);

   return 0;
}

Entero buscarLetra(Caracter letra)	{
   
   Caracter c;

   for (c = cargarCaracteres(); c != '\0'; c = siguienteCaracter()) {
   	
   	if (letra == c) {
   		return 1;
   	}
   }

   return 0;
}