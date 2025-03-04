#ifndef OBJETOS_H
#define OBJETOS_H

typedef struct{

	int precio;
	int utilidad;
	int cantidad;
	int cura;
	int danoX2;
	int stock;


}objetos;

void inicializarobjetos(objetos objeto[], Personaje personajes[], int PersonajeElegido);

#endif