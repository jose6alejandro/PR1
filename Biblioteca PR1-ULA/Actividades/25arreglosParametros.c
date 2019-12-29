#include "pr1-ula.h"

#define tam 10
#define x   10 
#define y   10
#define fila 5
#define colum 5 
#define profun 5

Entero promediar(Entero[tam]);
Entero sumar(Entero[x][y]);
Entero repetir(Entero[fila][colum][profun]);

int main(){

    limpiar();

    Entero vector[tam];
        for (Entero i = 0; i < tam; i++){
            vector[i] = generarAleatorio(1,21);
            imprimirEntero(vector[i]);
            espaciar(1);
        }

        saltar(1);
        imprimir("El promedio de los elementos del arreglo es: ");
        imprimirEntero(promediar(vector));
        saltar(2);

    Entero matriz[x][y];
        for (Entero i = 0; i < x; i++){
            for (Entero j = 0; j < y; j++){
                matriz[i][j] = generarAleatorio(10,11);
                imprimirEntero(matriz[i][j]);
                espaciar(1);
            }
            saltar(1);
        }

        imprimir("La suma diagonal de la matriz es: ");
        imprimirEntero(sumar(matriz));
        saltar(2);


    Entero cubo[fila][colum][profun];
        for (Entero k = 0; k < profun; k++){
            imprimir("Profundidad ");
            imprimirEntero(k);
            saltar(1);

            for (Entero i = 0; i < fila; i++){
                for (Entero j = 0; j < colum; j++){
                    cubo[i][j][k] = generarAleatorio(10,11);
                    imprimirEntero(cubo[i][j][k]);
                    espaciar(1);
                }
                saltar(1);
            }       
        }

        imprimir("La cantidad de ocurrencias del número 20 en el cubo es: ");
        imprimirEntero(repetir(cubo));
        saltar(1);

    return 0;
}

/*primer sub-programa*/
Entero promediar(Entero vector[tam]){
    
    Entero suma = 0;

        for (Entero i = 0; i < tam; i++){
            suma = suma + vector[i];
        }

    return (suma / tam);
}   

/*segundo sub-programa*/
Entero sumar(Entero matriz[x][y]){
    
    Entero suma = 0;

        for (Entero i = 0; i < x; i++){
            for (Entero j = 0; j < y; j++){
                if(i == j)
                    suma = suma + matriz[i][j];
            }
        }
    return suma;
}

/*tercer sub-programa*/
Entero repetir(Entero cubo[fila][colum][profun]){
    
    Entero num  = 20;
    Entero cont = 0;

        for (Entero k = 0; k < profun; k++){
            for (Entero i = 0; i < fila; i++){
                for (Entero j = 0; j < colum; j++){
                    if(num == cubo[i][j][k]){
                        cont++;
                    }
                }
            }
        }   
    return cont;
}