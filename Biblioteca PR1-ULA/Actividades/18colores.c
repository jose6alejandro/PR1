#include "pr1-ula.h"

void cargar();
void primerMensaje();
void segundoMensaje();

int main(){

    Entero i;
    
    limpiar(); 
    reproducirAudio("audio");

    for (i = 0; i < 50; i++){
        primerMensaje();
        cargar(i);
        limpiar();
        segundoMensaje();
        cargar(i);
        limpiar();
    }

    segundoMensaje();
    cargar(i);
    saltar(2);

    
    return 0;
}

void cargar(Entero n){
    
    Entero j;

        saltar(1);
        
        if(n < 50 )
            imprimirColor("MAGENTA", "NORMAL","   ▌▌ "); 

        if(n >= 50 )
            imprimirColor("MAGENTA", "NORMAL","   ►  "); 

        for (j = 0; j < n; j++)
           imprimirColor("MAGENTA", "NORMAL","▄");

        esperarMilisegundos(500);
}

void primerMensaje(){
    
    saltar(2);
    imprimirColor("MAGENTA", "NORMAL","                                           88 88                       ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","   88' 88'    ,dPPYba,          ''         88 ''                       ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","   88  88    P'    'Y8         ''             88                       ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","  mmmMmmMmm   8'       ,adPPYYba,  ,adPPYb,88 88  ,adPPYb,   ,aPPba,   ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","   88  88      8b 8b   '      `Y8 a8''   `Y88 88 a8'       a8'     '8a ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","  mmdMmmMmm         8b ,adPPPPP88 8b       88 88 8b        8b       d8 ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","   88  88   '8a,    8b 88,    ,88 '8a,   ,d88 88 '8a,      '8a,   ,a8' ");
    saltar(1);
    imprimirColor("MAGENTA", "NORMAL","   88  88     ´8bbdP'  `´8bbdP''Y8 `'8bbdP'Y8 88  `'YbbdP'   `'YbdP'   ");
    saltar(1);
    
    imprimirColor("CIAN", "NORMAL","        ______             ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","      /______  |           ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |       | |      ♩    ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     | ===== | |    ♫      ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |       | |   ♫       ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |  .-.  | |    ♩ ♫    ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     | ' . ' | |  ♫        ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","  ..'| '._.' | |           ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL",".'   |_______|/");
    imprimirColor("CIAN", "NORMAL","LIKE!");
    saltar(1);
}

void segundoMensaje(){

    saltar(2);
    imprimirColor("ROJO", "NORMAL","                                           88 88                       ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","   88' 88'    ,dPPYba,          ''         88 ''                       ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","   88  88    P'    'Y8         ''             88                       ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","  mmmMmmMmm   8'       ,adPPYYba,  ,adPPYb,88 88  ,adPPYb,   ,aPPba,   ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","   88  88      8b 8b   '      `Y8 a8''   `Y88 88 a8'       a8'     '8a ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","  mmdMmmMmm         8b ,adPPPPP88 8b       88 88 8b        8b       d8 ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","   88  88   '8a,    8b 88,    ,88 '8a,   ,d88 88 '8a,      '8a,   ,a8' ");
    saltar(1);
    imprimirColor("ROJO", "NORMAL","   88  88     ´8bbdP'  `´8bbdP''Y8 `'8bbdP'Y8 88  `'YbbdP'   `'YbdP'   ");
    saltar(1);

    imprimirColor("CIAN", "NORMAL","        ______            ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","      /______  |          ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |       | |     ♩    ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     | ===== | |        ♫ ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |       | |    ♩     ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |  .-.  | |    ♫     ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","     |  '.'  | |  ♫       ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL","  ..'|  '-'  | |          ");
    saltar(1);
    imprimirColor("CIAN", "NORMAL",".'   |_______|/");
    imprimirColor("CIAN", "NORMAL"," LIKE!");
    saltar(1);
}


