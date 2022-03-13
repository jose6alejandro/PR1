void traducirMensaje(Cadena);

void traducirMensaje(Cadena cadenaEnBinario){
	Cadena msj;
	msj.tam = 0;
	Entero i = 1,j = (cadenaEnBinario.tam/8);
	while(j--){
		 Entero num = binarioADecimal(extraerSubcadena(cadenaEnBinario,8*(i-1),8*i-1));
		 msj = agregarCaracter(msj,decimalAASCII(num));
		i++;
	}
	imprimirCadena(msj);
}