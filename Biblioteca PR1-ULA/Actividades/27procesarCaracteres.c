#include "pr1-ula.h"

int main(){

    Caracter i;
    Entero cont = 0;
    Entero cont2 = 0;

    for ( i = cargarCaracteres(); i != '\0' ; i = siguienteCaracter() ){
            
        imprimirCaracter(i);    
        cont++;

        if(i == 'a')
            cont2++;
    }
        
    saltar(1);
    imprimir("Cantidad de caracteres cargados en memoria: ");
    imprimirEntero(cont);
    saltar(1);
    imprimir("Cantidad de repeticiones de la letra \"a\": ");
    imprimirEntero(cont2);
    saltar(1);


    return 0;
} 