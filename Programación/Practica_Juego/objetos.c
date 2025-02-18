#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utilidades.h"

void curación(utilidades utilidad[], Personaje personajes[], int i){

	utilidad[0].precio = 20;
	utilidad[0].cura = 30;

	PersonajeElegido[i].vida += utilidad[0].cura;

	if (personajes[i].vida > personajes[i].vidaMax) {
    	
    	personajes[i].vida = personajes[i].vidaMax;  // No permite que la vida supere el máximo
}
	
	printf("%s a obtenido %d de hp \n ", personajes[PersonajeElegido].nombre, utilidad[0].cura);
	printf("La vida de %s pasa a ser %d hp \n", personajes[PersonajeElegido].nombre, personajes[PersonajeElegido].vida);

}

void dañoPor2(utilidades utilidad[], Personaje personajes[]){

	utilidad[1].precio = 30;
	utilidad[1].dañoX2 = personajes[PersonajeElegido].ataque1 * 2;

	if(turnoJugador == 2){
		utilidad.dañoX2 = 0;
	}


}