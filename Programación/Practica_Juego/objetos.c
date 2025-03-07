#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "objetos.h"
#include "tienda.h"
#include "Personajes.h"

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

void inicializarCuras(objetos objeto[], Personaje personajes[], int PersonajeElegido, int cantidad_curas){

	int precioTotal;

		if(cantidad_curas > 0){

			precioTotal = objeto[0].precio * cantidad_curas;

			printf("Tiene que pagar: %d monedas de oro", precioTotal);

				if(precioTotal > personajes[PersonajeElegido].oro){

				printf("No cuenta con el dinero suficiente.\n");

				}else 

				personajes[PersonajeElegido].oro -= precioTotal;

				personajes[PersonajeElegido].inventario +=cantidad_curas;

				objeto[0].cantidad-=cantidad_curas;

				printf("Compra realizada con éxito, tienes %d curas en el inventario y %d monedas restantes.\n", cantidad_curas, personajes[PersonajeElegido].oro);

		} 
}