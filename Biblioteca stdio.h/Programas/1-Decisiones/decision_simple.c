#include <stdio.h>

//  Operadores relacionales y lógicos (>, >=, ==, !=, <=, <, &&, ||)

int main(){
    
    float nota;

    printf("Introduzca su nota del primer parcial de Programación 1: ");
    scanf("%f", &nota);
    printf("\n");

    if(nota < 10)
    {
        printf("Debes práticar más para el siguiente parcial\n");
    }

    if(nota >= 10 && nota < 16)
    {
        printf("Bien, pero debes práticar más\n");
    }    
        

    if(nota >= 16 && nota < 20)
    {
        printf("Muy bien, sigue así\n");
    }

    if(nota == 20)
    {
        printf("Excelente, sigue así\n");
    }

    return 0;
}
