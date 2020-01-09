#include "stdio.h"

int main(){
    
    int inicial, final;

    printf("Introduzca su año de nacimiento: ");
    scanf("%d", &inicial);

    printf("Introduzca el año actual: ");
    scanf("%d", &final);

    printf("La suma de estos dos años es: %d\n", inicial + final);
    
    return 0;
}