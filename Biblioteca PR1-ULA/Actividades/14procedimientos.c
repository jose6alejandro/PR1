#include "pr1-ula.h"

void preguntar();
void responder();

int main(){
    
    preguntar();
    esperar(2);
    responder();

    return 0;
}

void preguntar(){
    imprimir("¿Cuál es tu deporte favorito?:");
}

void responder(){
    imprimir(" es el Baloncesto");
}
 