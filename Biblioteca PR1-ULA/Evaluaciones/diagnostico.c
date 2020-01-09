#include "pr1-ula.h"

/*
   Prueba diagnóstico de Programación 1 semestre U2019
*/

void figura(Entero);
Entero mayor(Entero[2][3], Entero[5]);
Cadena agregarCaracteres(Cadena, Caracter[2]);
Caracter ordenarCadena(Cadena);

int main(){
    /* 
    Entero vector[5] ={2, 1, 33, 60, 7};  
    Entero matriz[3][3] = {{2, 3, 5}, {10, 120, 35}}; 
    Cadena texto = leerCadena();
    Caracter letra[2] = {"to"};

    imprimirEntero(mayor(matriz, vector));
    saltar(1);
    imprimirCadena(agregarCaracteres(texto,letra));
    saltar(1);
    imprimirCaracter(ordenarCadena(texto));
    saltar(1);    
    figura(3);   
    */
    return 0;
}

void figura(Entero n){ 

    Entero cantidad = n ;
    Entero espacios = 1;
    Entero saltarLinea = 1;
    Entero i = n * n;

    while(i--){

        if((espacios >= cantidad)) 
            imprimirCaracter(111); 
        
        if(espacios < cantidad){
            imprimirCaracter(32);
            espacios++;
        }
        
        if(saltarLinea == n){
            saltar(1);
            cantidad--;
            espacios = 1;
            saltarLinea = 0;
        }

        saltarLinea++;
    }
}

Entero mayor(Entero matriz[2][3], Entero vector[5]){

    Entero i, j;
    Entero paresMatriz = 0;
    Entero paresVector = 0;
    
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0)
                paresMatriz++;
        }
    }

    for (i = 0; i < 5; i++){
        if(vector[i] % 2 == 0)
            paresVector++;
    }

    if(paresVector >= paresMatriz)
        return 1;

    return 0;
}

Cadena agregarCaracteres(Cadena texto, Caracter letra[2]){

    texto.tam = texto.tam + 2;
    texto.caracteres[texto.tam - 2] = letra[0];
    texto.caracteres[texto.tam - 1] = letra[1];

    return texto;
}

Caracter ordenarCadena(Cadena texto){

    Entero i,j;
    Entero aux = 0;

    for(i = 0; i < texto.tam - 1; i++) {    
        for(j = 0; j < texto.tam - 1 - i; j++) {     
            if(texto.caracteres[j] > texto.caracteres[j + 1]) {
                aux = texto.caracteres[j + 1];
                texto.caracteres[j + 1] = texto.caracteres[j];
                texto.caracteres[j] = aux;
            }
        }
    }

    return texto.caracteres[texto.tam / 2];
}

