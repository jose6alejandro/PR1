#include "persona.h"

void obtener_datos(Persona* persona)
{
    scanf("%s", persona->nombre_completo.nombre);
    scanf("%s", persona->nombre_completo.apellido);
    scanf("%d", &persona->edad);
}

void imprimir_datos(Persona persona)
{
    printf("Nombre: %s\n", persona.nombre_completo.nombre);
    printf("Apellido: %s\n", persona.nombre_completo.apellido);
    printf("Edad: %d\n", persona.edad);
}