#include <stdio.h>
#include <stdlib.h>

int main(){

	char str1[100];
	printf("Introduce una palabra:\n");
	scanf("%s", str1); //no hace falta usar el & porque, ya de por si una cadena de caracteres es una dirección de memoria, por lo cual, solo se pone donde empieza la cadena de caracteres.

	printf("%s\n",str1);

	return 0;
}
