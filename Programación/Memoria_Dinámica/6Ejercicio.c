#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamaño;

	printf("Ingresa el tamaño: ");
	scanf("%d", &tamaño);

	int *arr = (int *) malloc (tamaño*sizeof(int));

	if (arr == NULL){
		printf("ERROR se puede asignar memoria \n");

		return 1;
	}

	for (int i = 0; i < tamaño; i++){

		printf("Introduce el valor de %d: ", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < tamaño; i++){

		printf("%d \n", arr[i]);
	}
	return EXIT_SUCCESS;
}