#include <stdio.h>

int main()
{
    char palabra[] = "Programación 1";
    char* ptr;

    ptr = &palabra[0];

    for (int i = 0; *(ptr + i) != '\0'; i++)
    {
       printf("%c", *(ptr + i));
    }

    printf("\n");
    
    return 0;
}
