void inicializarobjetos(objetos objeto[], Personaje personajes[], int PersonajeElegido){

	int precioTotal;
	int cantidad_curas = 0;

	strcpy(objeto[0].utilidad, "cura");
	objeto[0].precio = 20;
	objeto[0].cantidad = 30;
	objeto[0].cura = 30;
	objeto[0].stock = 1000;

	strcpy(objeto[1].utilidad, "danoX2");
	objeto[1].precio = 30;
	objeto[1].cantidad = 2;
	objeto[1].danoX2 = personajes[PersonajeElegido].ataque1 * 2;
	objeto[1].stock = 1000;

}

void inicializarinventario(){

int cantidad_curas = 0;
int cantidad_danoX2 = 0;

}