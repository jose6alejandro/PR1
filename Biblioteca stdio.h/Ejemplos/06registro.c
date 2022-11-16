#include <stdio.h>

struct coordenada{
    float x;
    float y;
    float z;    
};

struct fecha{
    int dia;
    int mes;
    int anio;    
};

int main(){
    struct coordenada _coordenada; 
    struct fecha _fecha; 

    printf("El tamaño del registro coordenada es: %.2f bytes\n", (float)sizeof(_coordenada));
    printf("El tamaño del registro fecha es: %i bytes\n", (int)sizeof(_fecha));

    return 0;
}
