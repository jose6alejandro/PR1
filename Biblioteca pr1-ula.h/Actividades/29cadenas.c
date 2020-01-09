#include "pr1-ula.h"

int main(){

    Cadena id = leerCadena();
    Entero i;
    Entero j = id.tam - 1;
    Entero cont = 0;

    imprimir("La palabra: \"");
        
    for (i = 0; i < id.tam; i++){

        imprimirCaracter(id.caracteres[i]);
            
        if(id.caracteres[i] == ' '){
            i++;
            imprimirCaracter(id.caracteres[i]);                      
        }

        if(id.caracteres[j] == ' ')
            j--;                

        if(id.caracteres[i] != id.caracteres[j])
            cont++;

        j--;
    }

    if(cont != 0)
        imprimir("\" no es palíndromo");

    if(cont == 0)
        imprimir("\" si es palíndromo");

    saltar(1);

    return 0;
}

/*
Palíndromo: palabra o frase que se lee igual 
            de izquierda a derecha o viceversa.

Ejemplos:   reconocer, sometemos, amor a roma,
            la ruta natural, amad a la dama, ana
*/