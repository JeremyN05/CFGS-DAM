#include <stdio.h>
#include <stdlib.h>

int main(){
	int número = 0;

	printf("Introduce un número entero: ");
	scanf("%d", &número );

	int *arr = (int *) malloc (número*sizeof(int));

	if (arr == NULL){
		printf("ERROR no se puedo asignar memoria \n");
		return 1;
	}

	for (int i = 0; i < número; ++i){

		arr[i] = i * 2;

		printf("arr[%d] = %d \n", i, arr[i]);
	}

	/*Modifica el puntero para que sea un array el doble de grande y, en la segunda parte del array, se guardan los números impares*/



	int * arr_ampliado = (int*) realloc(arr,2*número*sizeof(int));

	if (arr_ampliado == NULL){

		free(arr);
		printf("ERROR no se puedo asignar memoria \n");

		return 1;
	}

	arr = arr_ampliado;

	for (int i = número, valor = 1; i < 2*número; ++i, valor += 2){

		arr[i] = valor;

		printf("arr[%d] = %d \n", i, arr[i]);
	}

	free(arr_ampliado);
	return EXIT_SUCCESS;
}
