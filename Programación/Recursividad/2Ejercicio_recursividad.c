#include <stdio.h>
#include <stdlib.h>

int contar_digitos(int * contador, int numero){

	if (numero == 0){
		return 0;
	}

	int digito = numero % 10;

	if (digito % 2 == 0){
		(*contador)++;
	}

	return contar_digitos(contador, numero / 10);
}

int main(){

int numero;

	printf("Introuzca los números: ");
	scanf("%d", &numero);

	int contador = 0;

	contar_digitos(&contador, numero);

	printf("Hay %d números pares \n", contador);

}
