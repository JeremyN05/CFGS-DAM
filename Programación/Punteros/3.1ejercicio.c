#include <stdio.h>
#include <stdlib.h>

int main(){

	int arr[5] = {10, 20, 30, 40, 50};
	int *p = arr;
	int suma =0;

	for (int i = 0; i < 5; i++){
		
		suma += *(p+i); //Suma todos los números dentro del contenido de p
			       //Mejor suma += *(p++)
}
	printf("La suma de todos los números es: %d\n", suma);

return EXIT_SUCCESS;
}
