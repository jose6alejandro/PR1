#include <stdio.h>

#define TAM 30

typedef struct
{
    char nombre[TAM];
    char apellido[TAM];
}
NombreCompleto;

typedef struct
{
    NombreCompleto nombre_completo;
    int edad;
}
Persona;

void obtener_datos(Persona*);
void imprimir_datos(Persona);