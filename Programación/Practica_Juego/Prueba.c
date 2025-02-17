#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Personajes.h"

void InicializarPersonajes(Personaje personajes[3], int *cantidad) {
    *cantidad = 3;

    strcpy(personajes[0].Nombre, "El caballero Pelayo");
    personajes[0].ataque1 = 20;
    personajes[0].ataque2 = rand() % 41;
    personajes[0].vida = 250;

    strcpy(personajes[1].Nombre, "La arquera Jeanne de Clisson");
    personajes[1].ataque1 = 30;
    personajes[1].ataque2 = rand() % 61;
    personajes[1].vida = 200;

    strcpy(personajes[2].Nombre, "El hechicero Froilan");
    personajes[2].ataque1 = 45;
    personajes[2].ataque2 = rand() % 81;
    personajes[2].vida = 150;
}

void MostrarPersonajes(Personaje personajes[], int cantidad) {
    printf("Personajes disponibles:\n");

    for (int i = 0; i < cantidad; i++) {
        printf("%d - Nombre: %s\n   Daño del primer ataque: %d\n   El daño del segundo ataque varía entre 0 y %d\n   Vida: %d\n",
               i, personajes[i].Nombre, personajes[i].ataque1, personajes[i].ataque2, personajes[i].vida);
    }

    // Selección de personaje por parte del usuario
    int seleccion;
    printf("Seleccione un personaje (0-2): ");
    scanf("%d", &seleccion);

    if (seleccion >= 0 && seleccion < cantidad) {
        printf("Has seleccionado: %s\n", personajes[seleccion].Nombre);
    } else {
        printf("Selección inválida.\n");
    }
}

int main() {
    Personaje personajes[3]; // Declaración del array
    int cantidad = 0;        // Declaración de la cantidad de personajes

    InicializarPersonajes(personajes, &cantidad);
    MostrarPersonajes(personajes, cantidad);

    return 0;
}
