#include <stdio.h>
#include <stdlib.h>

int main(){
int suma = 0;
	for (int i = 0; i<=10; i++){
		
		suma= suma + i;

	}
	printf("La suma de todos los números del 1 al 10 es %d\n", suma);
	return EXIT_SUCCESS;
}

