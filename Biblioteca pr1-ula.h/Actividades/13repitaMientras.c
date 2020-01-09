#include "pr1-ula.h"

int main(){

    Entero n = 5;
    Entero i = 0;
        
    while(i++ < n){
        limpiar();
        imprimirEntero(i);
        esperar(1);
    }

    limpiar();

    return 0;
} 