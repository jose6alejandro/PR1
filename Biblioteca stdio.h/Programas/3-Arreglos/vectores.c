#include <stdio.h>

int main(){

    float calificaciones [5] = {12.2, 14.5, 19, 17.3, 9.8};

    printf("calificaciones: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%.1f  ", calificaciones[i]);
    }

    printf("\n");
    
    return 0;
}
