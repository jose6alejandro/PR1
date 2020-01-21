#include "pr1-ula.h"

Entero compararCadena(Cadena, Cadena);
void imprimirResultado(Cadena, Cadena, Cadena);

int main(){

    Cadena palabras = leerCadena();
    
    Cadena a;
    Cadena b;
    Cadena c;

    a.tam = 0;
    b.tam = 0;
    c.tam = 0;

    Entero i = 0;
    Entero j = 0;
    Entero aux = 0;

    /*Separar en tres cadenas*/

    for (i = 0; i < palabras.tam; i++){

        if(palabras.caracteres[i] != 32 && aux == 0){
            a.caracteres[i] = palabras.caracteres[i];
            a.tam++;
        }

        if(palabras.caracteres[i] != 32 && aux == 1){
            b.caracteres[j++] = palabras.caracteres[i];
            b.tam++;
        }

        if(palabras.caracteres[i] != 32 && aux == 2){
            c.caracteres[j++] = palabras.caracteres[i];
            c.tam++;
        }

        if(palabras.caracteres[i] == 32){
            j = 0;
            aux++;
        }
    }

    a.caracteres[a.tam] = '\0';
    b.caracteres[b.tam] = '\0';
    c.caracteres[c.tam] = '\0';

    /*Ordenar cadenas*/
    
    aux = compararCadena(a, b);

    if(aux != 1){

        aux = compararCadena(b, c);

        if(aux == 1){

            aux = compararCadena(a, c);

            if(aux == 1)
                imprimirResultado(c, a, b);             
                        
            if(aux != 1){
                imprimirResultado(a, c, b);
                aux = 1;   
            }  
            
        }

        if(aux != 1)
            imprimirResultado(a, b, c); 

        aux = 0;
    }

    if(aux == 1){

        aux = compararCadena(a, c);

        if(aux == 1){

            aux = compararCadena(b, c);

            if(aux == 1)
                imprimirResultado(c, b, a);               
                         
            if(aux != 1){
                imprimirResultado(b, c, a);
                aux = 1; 
            }                      
        }

        if(aux != 1)
          imprimirResultado(b, a, c);

    }

    return 0;
}

Entero compararCadena(Cadena palabra1, Cadena palabra2){
   
    Entero i;

    for (i = 0; palabra1.tam; i++){

        if(palabra1.caracteres[i] > palabra2.caracteres[i])
            return 1;    

        if(palabra1.caracteres[i] < palabra2.caracteres[i])
            return 2;   
    }
 
}

void imprimirResultado(Cadena palabra1, Cadena palabra2, Cadena palabra3){
    imprimirCadena(palabra1);
    espaciar(1);
    imprimirCadena(palabra2);
    espaciar(1);
    imprimirCadena(palabra3);
}