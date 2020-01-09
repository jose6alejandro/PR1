#include "pr1-ula.h"

/*
   Segundo Quiz de Programación 1 semestre U2019
*/

void procesarMatriz(Entero matriz[3][2]);

int main(){

   /*
   Entero matriz[3][2] = {{20,  6}, {11,  3}, { 6, 19}};
   procesarMatriz(matriz);                       
   */
   return 0;
}

void procesarMatriz(Entero matriz[3][2]){
  
   Entero sumaPar = 0;
   Entero i, j;

   for (i = 0; i < 3; i++){     
      for (j = 0; j < 2; j++){

         if (matriz[i][j] == 6){
            imprimirCaracter('a');
         }
         if (matriz[i][j] != 6){
            imprimirEntero(matriz[i][j]);
         }
         espaciar(1);
         
         if((matriz[i][j] % 2 == 0)){
            sumaPar = matriz[i][j] + sumaPar; 
         }
      } 
      saltar(1);
   }
   
   imprimirEntero(sumaPar);
}