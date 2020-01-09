#include "pr1-ula.h"

/*
    Primer parcial de Programación 1 semestre U2019
*/

Entero tiempoAsegundos(Entero, Entero, Entero);
Entero mayor(Entero[3][3]);
Entero binarioADecimal(Cadena); //8 bits
Caracter buscar(Cadena, Caracter[2]);

int main(){
    /*
    Entero matriz[3][3] = {{22, 43, 55}, {10, 60, 10}, {20, 19, 67}};  

    Cadena binario = leerCadena();    
    imprimirEntero(binarioADecimal(binario));

    Cadena texto = leerCadena();
    Caracter letra[2] = {"la"};
    imprimirCaracter(buscar(texto, letra));
       
    imprimirEntero(tiempoAsegundos(70, 15, 36));
    imprimirEntero(mayor(matriz));
    */
    return 0;
}

Entero tiempoAsegundos(Entero hora, Entero minutos, Entero segundos){
    return ( (hora * 3600) + (minutos * 60) + segundos);
}

Entero mayor(Entero matriz[3][3]){
    
    Entero i, j;
    Entero nroMayor = matriz[0][0];

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if(nroMayor < matriz[i][j])
                nroMayor = matriz[i][j];

        }
    }

    return nroMayor;
}

Entero binarioADecimal(Cadena binario){

    Entero i, j;
    Entero cont = 0;
    Entero decimal = 0;
    Entero potencia = 1;

    for (i = binario.tam - 1; i >= 0; i--){
        if(binario.caracteres[i] == '1'){
           for (j = 0; j < cont; j++){
                potencia = (2 * potencia);     
           } 
           decimal =  potencia + decimal; 
           potencia = 1; 
        }
        cont++;
    }

    return decimal;
}

Caracter buscar(Cadena texto, Caracter letra[2]){
    
    Entero i;

    for(i = 0; i < texto.tam - 1; i++){
        if(texto.caracteres[i] == letra[0] && texto.caracteres[i + 1] == letra[1])
            return 's';
    }

    return 'n';
}