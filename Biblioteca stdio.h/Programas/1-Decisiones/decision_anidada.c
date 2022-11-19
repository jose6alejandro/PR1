#include <stdio.h>

int main(){
    
    int n = -1;

    
    if (n  > 0)
    {
        printf("El numero es positivo ");

        if ( n < 10)
        {
            printf("y tiene una sola cifra");
        }
        else
        {
            printf("y tiene una más de una cifra"); 
        }
    }
    else if (n  < 0)
    {
        printf("El numero es negativo ");

        if ( n > -10)
        {
            printf("y tiene una sola cifra");
        }
        else
        {
            printf("y tiene una más de una cifra"); 
        }
    }
    else
    {
        printf("El número es cero");
    }

    printf("\n");

    return 0;
}
