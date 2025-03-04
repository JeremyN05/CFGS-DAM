#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tienda.h"
#include "objeto.h"

void inicializartienda(objetos objeto[], Personaje personajes[]){

	char opcion;
	int valor_retorno = 0;
	int cantidad_curas = 0;
	int cantidad_danoX2 = 0;
	int precioTotal;

	printf("¡Hola!, bienvenido a la tienda Doña Marta \n");

	printf("¿Qué desea comprar? C (Curas) D (Daño x 2)");
	valor_retorno = scanf(" %c",&opcion);

	while (valor_retorno == 0 || (opcion != 'C' && opcion != 'c' && opcion != 'D' && opcion != 'd')){

		while (getchar() != '\n');

		printf("Error: el dato introducido no es válido. Introduzca 'C' o 'D': ");
        valor_retorno = scanf(" %c", &opcion);

		}

	if(opcion == 'C' || opcion == 'c'){

		printf("El precio de las curas es de %d \n", objeto[0].precio);

		printf("¿Cuantas curas quiere comprar?");
		valor_retorno = scanf("%d", &cantidad_curas);

		while(valor_retorno == 0){

			while (getchar() != '\n');

			printf("Error, el dato introducido no es un número, intentelo de nuevo.");
			scanf("%d", &cantidad_curas);

		}

		precioTotal = objeto[0].precio * cantidad_curas;

		if(precioTotal > personajes[PersonajeElegido].dinero){

			printf("No cuenta con el dinero suficiente.\n");

		}else 

		personajes[PersonajeElegido].dinero -= precioTotal;

		personajes[PersonajeElegido].inventario +=cantidad_curas;

		printf("Compra realizada con éxito, tienes %d curas en el inventario y %d monedas restantes.\n", cantidad_curas, personajes[PersonajeElegido].dinero);
	
	}else if(opcion == 'D' || opcion == 'd'){

		printf("El precio de dañoX2 es de %d \n", objeto[1].precio);

		printf("¿Cuantos dañoX2 desea comprar?");
		valor_retorno = scanf("%d", &cantidad_danoX2);

		while(valor_retorno == 0){

			while (getchar() != '\n');

			printf("Error, el dato introducido no es un número, intentelo de nuevo.");
			scanf("%d", &cantidad_danoX2);

		}

		precioTotal = objeto[1].precio * cantidad_danoX2;

		if(precioTotal > personajes[PersonajeElegido].dinero){

			printf("No cuenta con el dinero suficiente.\n");

		}else 

		personajes[PersonajeElegido].dinero -= precioTotal;
		personajes[PersonajeElegido].inventario +=cantidad_danoX2;

		printf("Compra realizada con exito, tienes %d dañoX2 en el inventario y %d monedas restantes", cantidad_danoX2, personajes[PersonajeElegido].dinero);

	}


}