#include <stdio.h>

int main(){
    
    float nota;

    printf("Introduzca su nota del primer parcial de Programación 1: ");
    scanf("%f",&nota);
    printf("\n");

    if(nota < 10)
        printf("Debes práticar mucho para el siguiente parcial\n");

    if(nota >= 10 && nota < 16)
        printf("Bien, pero debes práticar más para el siguiente parcial\n");

    if(nota >= 16 && nota < 20)
        printf("Muy bien, pero no dejes de práticar para el siguiente parcial\n");

    if(nota == 20)
        printf("Excelente, sigue asi para el siguiente parcial\n");

    return 0;
}
