#include "stdio.h"

//  Operadores aritméticos (+, -, *, /, %, ++, --)

int main()
{   
    float a = 10;
    float b = 2; 
    float c = (a / b) + (1 / b); 
    
    printf("El resultado de la operación es: %f \n", c);

    return 0;
}