#include <stdio.h>
#include <stdlib.h>

int main(){

	char str1[100];
	int posicion;
	char caracter;

	printf("Introduzca una palabra:\n");
	scanf("%s", str1);

	printf("¿Qué posición desea modificar?\n");
	scanf("%d", &posicion);

	printf("¿Qué caracter desea poner?\n");
	scanf("%c\n", &caracter);

	return 0;

}
