/*
    Segundo parcial de Programación 1 semestre U2019
*/

#include <stdio.h>

/*
	prototipos del parcial
*/
void intercambiar(int *, int *);
void invertir(char *, int);
void ordenarParesPrimero(int *, int);
int buscar(char*, int, char*, int);
void intercalar(char*, int, char*, int);
int binarioADecimal(char*, int);
void digitosALetras(char*, int);

int main(){

    /*Prueba 1*/
    int a = 7, b = 5;
    intercambiar(&a, &b);
    printf("%d %d\n", a, b);

    /*Prueba 2*/
    char cadena[50] = "invertir";
    invertir(cadena, 50);
    printf("%s\n", cadena);

    /*Prueba 3*/
    int vector[10] = {1, 20, 32, 12, 9, 7, 5, 2, 8, 4};
    int i;
    ordenarParesPrimero(vector, 10);
    
    for (i = 0; i < 10; i++)
        printf("%i ", vector[i]);
    
    printf("\n");

    /*Prueba 4*/
    char cadena1[50] = "Parcial -_- 2";
    char subCadena[40] = "-_-";
    printf("%i\n", buscar(cadena1, 50, subCadena, 40));

    /*Prueba 5*/
    char cadena2[50] = "( ) $ 0";
    char subCadena2[40] = ": : : : emojis";
    intercalar(cadena2, 50, subCadena2, 40);
    printf("%s\n", cadena2);

    /*Prueba 6*/
    printf("%i\n", binarioADecimal("00000111", 8));

    /*Prueba 7*/
    char cadena3[50] = "1 2 3 4 5 6 7 8 9 :)";
    digitosALetras(cadena3, 50);
    printf("%s\n", cadena3);

    return 0;
}

void intercambiar(int *p1, int *p2){

    int aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}

void invertir(char *palabra, int tam){

    int i, j,  t;
    char aux;

    for (t = 0; (palabra[t] != '\0') && (t < tam); t++){ }

    
    for (i = 0, j = t - 1 ; i < t / 2; i++, j--){
        aux = palabra[i];
        palabra[i] = palabra[j];
        palabra[j]= aux;
    }
}

void ordenarParesPrimero(int *vector, int tam){
    
    int i, j;
    int aux = 0;

    for (i = 0; i < tam; i++){
        for (j = 0; j < (tam - 1 - i); j++){
            if(vector[j] > vector[j + 1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1]= aux;
            }
            if(vector[j] % 2 != 0 && vector[j + 1] % 2 == 0){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1]= aux;               
            }
        }
    }
}

int buscar(char* cadena, int tam, char* subCadena, int tam2){
    
    int i, j, aux = 0, cont = 0;
    int t, t2;

    for (t = 0; (cadena[t] != '\0') && (t < tam); t++){ }

    for (t2 = 0; (subCadena[t2] != '\0') && (t2 < tam2); t2++){ }

    for (i = 0; i < t; i++){

        if(cadena[i] == subCadena[0]){  
            cont = (i + 1);
            aux = 1;
            for (j = 1; j < t2; j++, cont++){
                if(cadena[cont] != subCadena[j]){
                    aux = 0;                    
                    break;
                }
            }

            if(aux != 0)
                return 1;
        }

    }

    return 0;
}

void intercalar(char* cadena, int tam, char* cadena2, int tam2){
    
    int i, j;
    int t, t2;
    
    char aux[tam];

    for (t = 0; (cadena[t] != '\0') && (t < tam); t++){}

    for (t2 = 0; (cadena2[t2] != '\0') && (t2 < tam2); t2++){}

    for (i = 0, j = 0; i < tam; i++, j++){
        
        if(t >= t2){
            if(i < t2){
                aux[j] = cadena[i];
                aux[++j] = cadena2[i];
            }else{
                aux[j] = cadena[i];
            }
        }else{
            if(i < t){
                aux[j] = cadena2[i];
                aux[++j] = cadena[i];
            }else{
                aux[j] = cadena2[i];
            }           
        }

    }

    for (i = 0; i < tam; i++){
        cadena[i] = aux[i];
    }

}

int binarioADecimal(char* cadena, int tam){
    
    int i, j, t;
    int cont = 0;
    int decimal = 0;
    int potencia = 1;

    for (t = 0; (cadena[t] != '\0') && (t < tam); t++){}

    for (i = t - 1; i >= 0; i--){
        if(cadena[i] == '1'){
           for (j = 0; j < cont; j++){
                potencia = (2 * potencia);     
           } 
           decimal =  potencia + decimal; 
           potencia = 1; 
        }
        cont++;
    }

    return decimal;
}

void digitosALetras(char* cadena, int tam){
   
    int i, j, k, t;
    char aux[tam];
    char *letra[9] = {"UNO","DOS","TRES", "CUATRO", "CINCO", "SEIS", "SIETE", "OCHO", "NUEVE"};

    for (t = 0; (cadena[t] != '\0') && (t < tam); t++){}

    for (i = 0, j = 0; j < tam; i++, j++){
        
        if(cadena[i] == '1'){
            for (k = 0; letra[0][k] != '\0'; k++, j++){
                aux[j] = letra[0][k];
            }
            j--;
        }
        else if(cadena[i] == '2'){
            for (k = 0; letra[1][k] != '\0'; k++, j++){
                aux[j] = letra[1][k];
            }
            j--;
        }
        else if(cadena[i] == '3'){
            for (k = 0; letra[2][k] != '\0'; k++, j++){
                aux[j] = letra[2][k];
            }
            j--;
        }
        else if(cadena[i] == '4'){
            for (k = 0; letra[3][k] != '\0'; k++, j++){
                aux[j] = letra[3][k];
            }
            j--;
        }   
        else if(cadena[i] == '5'){
            for (k = 0; letra[4][k] != '\0'; k++, j++){
                aux[j] = letra[4][k];
            }
            j--;
        }
        else if(cadena[i] == '6'){
            for (k = 0; letra[5][k] != '\0'; k++, j++){
                aux[j] = letra[5][k];
            }
            j--;
        }
        else if(cadena[i] == '7'){
            for (k = 0; letra[6][k] != '\0'; k++, j++){
                aux[j] = letra[6][k];
            }
            j--;
        }   
        else if(cadena[i] == '8'){
            for (k = 0; letra[7][k] != '\0'; k++, j++){
                aux[j] = letra[7][k];
            }
            j--;
        }  
        else if(cadena[i] == '9'){
            for (k = 0; letra[8][k] != '\0'; k++, j++){
                aux[j] = letra[8][k];
            }
            j--;
        }                                                            
        else{
            aux[j] = cadena[i];
        }
    }

    for(i = 0; i < tam; ++i){
        cadena[i] = aux[i];
    }

}
