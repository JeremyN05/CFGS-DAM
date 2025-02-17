#include <stdio.h>
#include <stdlib.h>

int numeros_triangulares(int numero){

	if(numero == 0){
		return 0;
	}

	return numero + numeros_triangulares(numero - 1);

}

int main(){

	int numero;
	
	printf("Introduce un número: ");
	scanf("%d", &numero);

	printf("%d \n", numeros_triangulares(numero));

	numeros_triangulares(numero);

	return 0;
}