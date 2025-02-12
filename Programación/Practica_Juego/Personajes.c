
#include "Personajes.h"

void InicializarPersonajes(Personaje personajes[], int * cantidad){

	strcpy(personajes[0].Nombre, "El caballero Pelayo");
	personajes[0].ataque1 = 20;
	personajes[0].ataque2 = rand () % 41;
	personajes[0].vida = 250;

	strcpy(personajes[1].Nombre, "La arquera Jeanne	de Clisson");
	personajes[1].ataque1 = 30;
	personajes[1].ataque2 = rand () % 61;
	personajes[1].vida = 200;

	strcpy(personajes[2].Nombre, "El hechicero Froilan");
	personajes[2].ataque1 = 45;
	personajes[2].ataque2 = rand () % 81;
	personajes[2].vida = 150;

}

void MostrarPersonajes(Personaje personajes[], int * cantidad){
	cantidad = 3;

	for (int i = 0; i < cantidad; i++){
		printf("Nombre: %s\n. Daño del primer ataque");
	}
}