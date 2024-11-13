#include <stdio.h>
#include <stdlib.h>

//Ejemplo de paso de un argumento a una función por valor
//Quiero que realmente incremente la variable dada como argumento

void incrementar(int *n){
	printf("Valor recibido: %d\n", *n);
	//(*n)++;
	*n = *n + 1; //Solo modifica el contenido, no el puntero
	printf("Valor incrementado en la función: %d\n", *n);

}

int main(){
	int valor = 10;
	incrementar(&valor); // le estoy dando el valor 10, no la variable
	printf("Valor en el main: %d\n", valor); //Imprime un 11, porque modifica la dirección de memoria y sustituye el 10 por un 11, esta modificación es para siempre

return EXIT_SUCCESS;
}
