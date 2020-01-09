/*
    V026589702, José Alejandro Castro
*/

#include "pr1-ula.h"

Entero potencia(Entero,Entero);
Caracter decimalAASCII(Entero);
void imprimirCadena(Cadena);
Entero binarioADecimal(Cadena);
Cadena agregarCaracter(Cadena,Caracter);
Cadena extraerSubcadena(Cadena,Entero,Entero);
void traducirMensaje(Cadena);

int main(){

    Cadena id = leerCadena();
    traducirMensaje(id);   

    return 0;
}

Entero potencia(Entero base,Entero exponente){
    
    if(exponente > 0)
        return base * potencia(base,exponente - 1);

    return 1;
}

Caracter decimalAASCII(Entero ascii){
    
    Caracter a = ascii;

    return a;
}

void imprimirCadena(Cadena texto){
    imprimir(texto.caracteres);   
}

Entero binarioADecimal(Cadena binario){
    
    Entero i;
    Entero cont = 0;
    Entero decimal = 0;

    for (i = binario.tam - 1; i >= 0; i--){
        if(binario.caracteres[i] == '1'){
            decimal = potencia(2, cont) + decimal;
        }
    
        cont++;
    }

    return decimal;
}

Cadena agregarCaracter(Cadena texto, Caracter letra){

    texto.tam = texto.tam + 1;
    texto.caracteres[texto.tam - 1] = letra;

    return texto;
}

Cadena extraerSubcadena(Cadena texto, Entero inicial, Entero final){
    
    Cadena subTexto;
    subTexto.tam = 0;
    Entero i = 0;

    while(inicial <= final){
        subTexto.caracteres[i++] = texto.caracteres[inicial++];
        subTexto.tam++;
    }

    subTexto.caracteres[subTexto.tam] = '\0';

    return subTexto;
}

void traducirMensaje(Cadena cadenaEnBinario){
    Cadena msj;
    msj.tam = 0;
    Entero i = 1,j = (cadenaEnBinario.tam/8);

    while(j--){
        Entero num = binarioADecimal(extraerSubcadena(cadenaEnBinario,8*(i-1),8*i-1));
        msj = agregarCaracter(msj,decimalAASCII(num));
        i++;
    }
    imprimirCadena(msj);
}