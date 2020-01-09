#include "pr1-ula.h"

void preguntar(Entero );
void parpadear(Entero );
void mover(Entero, Entero );
void figura(Entero, Entero );

int main(){
    
    Entero n = 4;
    Entero i = 0;
        
    preguntar(1);
    parpadear(n);

    preguntar(2);
    mover(n, i);

    preguntar(3);        
    limpiar();        
    figura(n, i);
    
    return 0;
}

void parpadear(Entero n){

    if(n > 0){
        limpiar();
        esperar(1);
        imprimir("Primer parcial");
        esperar(1);
        parpadear(n - 1);
    }
}

void mover(Entero n, Entero i){

    if(n > 0){
        limpiar();
        espaciar(i);
        imprimir("A");
        esperar(1);
        mover(n - 1, i + 1);
    }
}

void figura(Entero n, Entero j){

    if(n > 0){

        Entero i;
        
        for (i = -1; i < j; ++i){
            imprimir("O");
            esperar(1);
            espaciar(1);
        }
        saltar(1);
        figura(n - 1, j + 1);     
    }
}

void preguntar(Entero i){
   
    limpiar();
    imprimir("Pregunta ");
    imprimirEntero(i);
    esperar(2);
}