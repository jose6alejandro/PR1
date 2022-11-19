#include <stdio.h>

int suma(int, int);

int main()
{
    int resultado = suma(8, 2);

    printf("%d\n", resultado);

    return 0;
}

int suma(int a, int b)
{
    return a + b;
}
