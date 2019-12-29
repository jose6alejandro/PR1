/*
  V026589702, José Alejandro Castro.
*/

#include "pr1-ula.h"

void imprimirHora(Entero);
void imprimirMin(Entero);
void imprimirSec(Entero);
void convertirASec(Entero,Entero,Entero);
void convertirAFormat(Entero);
void calHoras(Entero, Entero);

int main(){
  /*
    convertirASec(70, 15, 36);
    convertirAFormat(72000);
    calHoras(252936,72000);
  */
  
  return 0;
}

void imprimirHora(Entero hora){
  imprimirEntero(hora);
}

void imprimirMin(Entero minuto){
  imprimirEntero(minuto);
}

void imprimirSec(Entero segundo){
  imprimirEntero(segundo);
}

void convertirASec(Entero hora, Entero minuto, Entero segundo){
  imprimirSec(((hora * 3600) + (minuto * 60) + segundo));
}

void convertirAFormat(Entero segundo){

  Entero hh = segundo / 3600;
  Entero mm = ((segundo - (hh * 3600)) / 60);
  Entero ss = segundo - (hh * 3600) - (mm * 60);

  if(hh < 10)
    imprimir("0");

  imprimirHora(hh);
  imprimir(":");

  if(mm < 10)
    imprimir("0");

  imprimirMin(mm);
  imprimir(":");

  if(ss < 10)
    imprimir("0");

  imprimirSec(ss);
}

void calHoras(Entero segundosA, Entero segundosB){
  
  if(segundosA > segundosB)
    convertirAFormat(segundosA - segundosB);
  
  if(segundosB >= segundosA)
    convertirAFormat(segundosB - segundosA);

}