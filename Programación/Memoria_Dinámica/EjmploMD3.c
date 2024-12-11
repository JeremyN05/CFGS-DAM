#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 3;
	//int *arr = (int *)calloc(n, sizeof(int));

	//int arr[5]; Reserva estática
	int *arr = (int *) malloc(3*sizeof(int));

	if (arr == NULL){
		printf("ERROR no se puedo asignar memoria \n");
		return 1;
	}

	/*Forma cutre*/
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 5;

	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	printf("\n");

	/*Forma pro*/
	for (int i = 1; i < 3; i++){
		arr[i] = 2*i+1; 
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	printf("\n");

	//Vamos a Ampliar el Array A 5 elementos

	int * arr_ampliado = (int*) realloc(arr,5*sizeof(int));
	if (arr_ampliado == NULL){

		free(arr); //Realloc no libera la memoría
		printf("ERROR no se puedo asignar memoria \n");
		return 1;
	}

	//Para evitar confusiones entre arr_ampliado y arr es recomendable añadir:
	/*arr = arr_ampliado;*/

	//MALA Práctica arr se ha quedado "colgado"

	//terminamos de inicializar
	arr_ampliado[3] = 7;
	arr_ampliado[4] = 9;

	for (int i = 1; i < 5; i++){

		printf("arr_ampliado[%d] = %d \n", i, arr_ampliado[i]);
	}

	free(arr_ampliado);
	return EXIT_SUCCESS;
}
