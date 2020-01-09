#include "pr1-ula.h"

int main(){

    Caracter a = cargarCaracteres();
    Caracter b = siguienteCaracter();
    Caracter c;
    Entero cont = 0;

    imprimir("Sílaba: ");
    imprimirCaracter(a);
    imprimirCaracter(b);

    for ( c = siguienteCaracter(); c != '\0' ; c = siguienteCaracter() ){
        if(a == c && b == siguienteCaracter())
            cont++;
    }

    saltar(1);
    imprimir("Cantidad de veces que se repite: ");
    imprimirEntero(cont);
    saltar(1);

    return 0;
} 