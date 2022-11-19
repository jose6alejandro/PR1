#include <stdio.h>

typedef struct
{
    float x;
    float y;
    float z;  
}
Punto3D;

int main()
{    
    Punto3D coordenada; 

    coordenada.x = 0;
    coordenada.y = 9;
    coordenada.z = 3;

    printf("El tamaño del tipo Punto3D es: %d bytes\n", sizeof(coordenada));

    printf("Las coordenadas asignadas son: (%.1f; %.1f; %.1f) \n", 
            coordenada.x, coordenada.y, coordenada.z);

    return 0;
}
