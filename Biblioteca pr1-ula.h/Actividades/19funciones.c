#include "pr1-ula.h"

Entero convertirFahrenheit(Entero);
Entero convertirKelvin(Entero);

int main(){

    Entero temp = 8; /*temperatura Celsius*/

    imprimir("La temperatura en Fahrenheit es: ");
    imprimirEntero(convertirFahrenheit(temp));
    saltar(1);
    imprimir("La temperatura en Kelvin es: ");
    imprimirEntero(convertirKelvin(temp));
    saltar(1);

    return 0;
}

Entero convertirFahrenheit(Entero temp){
    return (1.8) * temp + 32;
}

Entero convertirKelvin(Entero temp){
    return temp + 273;
}