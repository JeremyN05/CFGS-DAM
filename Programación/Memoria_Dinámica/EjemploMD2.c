#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 5;
	//int *arr = (int *)calloc(n, sizeof(int));

	//int arr[5]; Reserva estática
	int *arr = (int *) malloc(5*sizeof(int));

	if (arr == NULL){
		printf("ERROR no se puedo asignar memoria \n");
		return 1;
	}

	for (int i = 0; i < n; i++){
		printf("arr[%d] = %d \n", i, arr[i]);
	}

	/*Lo mismo con calloc*/

	int * arr2 = (int *) calloc(5,sizeof(int)); //Hacemos la reserva de memoría e inicializa en 0

	if (arr2 == NULL){
		printf("ERROR no se puedo asignar memoria \n");
		return 1;
	}

	for (int i = 0; i < n; i++){
		printf("arr2[%d] = %d \n", i, arr2[i]);
	}

	free(arr);
	free(arr2);
	return EXIT_SUCCESS;
}
