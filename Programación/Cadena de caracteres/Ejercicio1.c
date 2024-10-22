#include <stdio.h>
#include <stdlib.h>

int main(){

	char str1[100];
	int posicion;
	char caracter;

	printf("Introduzca una palabra: ");
	scanf("%s", str1);

	printf("¿Qué posición desea modificar? ");
	scanf(" %d", &posicion);

	printf("¿Qué caracter desea poner? ");
	scanf(" %c", &caracter);

	str1[posicion - 1]=caracter;

	printf("La nueva palabra es: %s\n", str1);

	return EXIT_SUCCESS;

}
