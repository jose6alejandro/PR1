#include <stdio.h>

//  Ejemplo de tipos de datos del usuario

typedef int Entero;

typedef struct
{
    Entero dia;
    Entero mes;
    Entero anio;  
}
Fecha;

int main()
{    
    Fecha fecha;

    fecha.dia = 6;

    printf("El día asignado es: %d \n", fecha.dia);

    return 0;
}
