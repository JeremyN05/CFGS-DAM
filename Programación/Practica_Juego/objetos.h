#ifndef OBJETOS_H
#define OBJETOS_H
#include "Personajes.h"

typedef struct{

	int precio;
	char utilidad[20];
	int cantidad;
	int cura;
	int danoX2;
	int stock;


}objetos;

void inicializarobjetos(objetos objeto[], Personaje personajes[], int PersonajeElegido);
void inicializarCuras(objetos objeto[], Personaje personajes[], int PersonajeElegido, int cantidad_curas);

#endif