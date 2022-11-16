#include "../pr1-ula.h"
 
// instalar previamente mplayer  

void sonido(Entero);

int main() 
{
    sonido(2);

    return 0;
}

void sonido(Entero i) 
{   
    if (i == 1) 
    {
        reproducirAudio("sonido1");
    }

    if (i != 1) 
    {      
        reproducirAudio("sonido2");
        esperar(5);
        detenerAudio("sonido2");
    }
}


