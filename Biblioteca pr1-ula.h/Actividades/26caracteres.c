#include "pr1-ula.h"

Caracter letra(Caracter, Caracter, Caracter);
void ordenar(Caracter, Caracter, Caracter);

int main(){
        
    saltar(1);
    imprimir("El caracter aleatorio es: ");
    imprimirCaracter(letra(97,98,99));
    saltar(2);
    ordenar(111,109,97);
    saltar(1);

    return 0;
}

/*primer sub-programa*/
Caracter letra(Caracter letraA, Caracter letraB, Caracter letraC){
    
    Entero num = generarAleatorio(1,4);
        
    if(num == 1)
        return letraA;
        
    if(num == 2)
        return letraB;

    return letraC;
} 

/*segundo sub-programa*/
void ordenar(Caracter letraA, Caracter letraB, Caracter letraC){
    
    Caracter a, b, c, aux;

    /*decisión simple para cada condición*/
    
    if(letraA > letraB){
        a = letraB;
        b = letraA;         
    }
        
    if(letraA < letraB){
        a = letraA;
        b = letraB; 
    }

    if(b > letraC){
        aux = letraC;
        c = b;
        b = aux;
          
        if(a > b){
            aux = a;
            a = b;
            b = aux;                
        }
    }

    if(b < letraC){
        c = letraC;
    }


    imprimir("Los caracteres ordenados alfabéticamente son: ");
    imprimirCaracter(a);
    espaciar(1);
    imprimirCaracter(b);
    espaciar(1);
    imprimirCaracter(c);
    espaciar(1);

}