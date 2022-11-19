#include <stdio.h>

int main(){

    float calificaciones [2][3];

    for (int i = 0; i < 2; i++)
    {
        printf("Estudiante %d: \n", i + 1);

        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &calificaciones[i][j]);
        }
    }

	printf("\ncalificaciones: \n\n");
    
    for (int i = 0; i < 2; i++)
    {
        printf("Estudiante %d: \n", i + 1);
        
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f\n", calificaciones[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}
