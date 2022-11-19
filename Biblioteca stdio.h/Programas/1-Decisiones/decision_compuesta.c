#include <stdio.h>

int main(){
    
    int n;

    printf("Introduzca cuántos libros ha leido este año: ");
    scanf("%i",&n);

    if (n < 2)
    {
        printf("Deberias leer más libros");
    }
    else
    {
        printf("Muy bien, leer ayuda mucho!");
    }
    
    return 0;
}
