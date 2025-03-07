#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Personajes.h"
#include "tienda.h"
#include "objetos.h"

void inicializartienda(objetos objeto[], Personaje personajes[], int PersonajeElegido){

	char opcion;
	int valor_retorno = 0;
	int cantidad_curas = 0;
	int cantidad_danoX2 = 0;
	int precioTotal;

	inicializarobjetos(objeto, personajes, PersonajeElegido);
	
	printf("\x1b[38;5;46m ¡Hola!, bienvenido a la tienda Doña Marta \n\n\x1b[0m");

	printf("¿Qué desea comprar? C (Curas) D (Daño x 2) ");
	valor_retorno = scanf(" %c",&opcion);

	while (valor_retorno == 0 || (opcion != 'C' && opcion != 'c' && opcion != 'D' && opcion != 'd')){

		while (getchar() != '\n');

		printf("Error: el dato introducido no es válido. Introduzca 'C' o 'D':  ");
        valor_retorno = scanf(" %c", &opcion);

		}

	if(opcion == 'C' || opcion == 'c'){

		printf("El precio de las curas es de %d \n", objeto[0].precio);


		printf("¿Cuantas curas quiere comprar? ");
		scanf(" %d", &cantidad_curas);

		printf("Cantidad de curas: %d\n", cantidad_curas);

		inicializarCuras(objeto, personajes, PersonajeElegido, cantidad_curas);

	
	}else if(opcion == 'D' || opcion == 'd'){

		inicializarobjetos(objeto, personajes, PersonajeElegido);

		printf("El precio de dañoX2 es de %d \n", objeto[1].precio);

		printf("¿Cuantos dañoX2 desea comprar? ");
		valor_retorno = scanf("%d", &cantidad_danoX2);

		while(valor_retorno == 0){

			while (getchar() != '\n');

			printf("Error, el dato introducido no es un número, intentelo de nuevo. ");
			scanf("%d", &cantidad_danoX2);

		}

		precioTotal = objeto[1].precio * cantidad_danoX2;

		if(precioTotal > personajes[PersonajeElegido].oro){

			printf("No cuenta con el dinero suficiente.\n");

		}else 

		personajes[PersonajeElegido].oro -= precioTotal;
		personajes[PersonajeElegido].inventario +=cantidad_danoX2;

		printf("Compra realizada con exito, tienes %d dañoX2 en el inventario y %d monedas restantes", cantidad_danoX2, personajes[PersonajeElegido].oro);

	}


}