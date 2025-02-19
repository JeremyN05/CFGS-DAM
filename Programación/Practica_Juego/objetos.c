#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "objetos.h"

void inicializarobjetos(objetos objeto[], Personaje personajes[], int PersonajeElegido){

	strcpy(objeto[0].utilidad, "cura");
	objeto[0].precio = 20;
	objeto[0].cantidad = 30;
	objeto[0].cura = 30;

	strcpy(objeto[1].utilidad, "danoX2");
	objeto[1].precio = 30;
	objeto[1].cantidad = 2;
	objeto[1].danoX2 = personajes[PersonajeElegido].ataque1 * 2;

	if(objeto[0].cantidad > 0){

		personajes[PersonajeElegido].vida += objeto[0].cura;
	}

	objeto[0].cantidad--;

	printf("%s ha obtenido %d de hp \n", personajes[PersonajeElegido].nombre, objeto[0].cura);
	printf("La vida de %s pasa a ser %d hp \n", personajes[PersonajeElegido].nombre, personajes[PersonajeElegido].vida);

}