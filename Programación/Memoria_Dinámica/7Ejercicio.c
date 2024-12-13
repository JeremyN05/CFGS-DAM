#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamaño;

	printf("Ingresa el tamaño de la cadena: ");
	scanf("%d", &tamaño);

	char *arr = (char *) malloc ((tamaño+1)*sizeof(char));

	if (arr == NULL){
		printf("ERROR se puede asignar memoria \n");

		return 1;
	}

		printf("Introduce la cadena: ");

		scanf("%d", &tamaño);
		fgets(arr, tamaño+1, stdin);

		printf("%s \n", arr);

	free(arr);
	return EXIT_SUCCESS;
}