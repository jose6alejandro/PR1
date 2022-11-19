// V0000000, Nombre, Apellido

#include <stdio.h>

#define TAM 20

typedef struct
{
    char   nombre[TAM];
    char   apellido[TAM];
}
NombreCompleto;

typedef struct
{
    NombreCompleto  nombre_completo;
    int             edad;
    int             partidos_jugados;
    float           promedio_puntos;
    float           promedio_faltas;
    float           promedio_perdidas;
}
Jugador;

void                obtener_datos(Jugador*);
float               calcular_valor(Jugador);
int                 calcular_transferibilidad(Jugador, int, int);
void                mostrar_datos(Jugador, Jugador);
NombreCompleto      comparar_jugadores(Jugador, Jugador); 

int main()
{
    Jugador primer_jugador, segundo_jugador;
   
    obtener_datos(&primer_jugador);
    obtener_datos(&segundo_jugador);
    mostrar_datos(primer_jugador, segundo_jugador);
   
   return 0;
}