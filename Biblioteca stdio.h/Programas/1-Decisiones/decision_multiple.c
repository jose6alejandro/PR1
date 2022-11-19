#include <stdio.h>

int main(){
    
    float temperatura_promedio = 15.2;

    printf("La temperatura °C promedio del dia fue ");
    
    if (temperatura_promedio  > 18 && temperatura_promedio  < 28)
    {
        printf("normal");
    }
    else if (temperatura_promedio  > 28)
    {
        printf("alta");
    }
    else
    {
        printf("baja");
    }

    printf("\n");

    return 0;
}
