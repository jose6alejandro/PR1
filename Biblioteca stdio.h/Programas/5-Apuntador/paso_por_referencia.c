#include <stdio.h>

void intercambiar(int *, int *);

int main(){

    int a = 6;
    int b = 10;
    
    printf(" Original: a = %i y b = %i \n", a, b);

    intercambiar(&a, &b);
    
    printf(" Modificado: a = %i y b = %i \n", a, b);

    return 0;
}

void intercambiar(int* c, int* d) 
{
    int aux = *c;
    *c = *d;
    *d = aux;
}