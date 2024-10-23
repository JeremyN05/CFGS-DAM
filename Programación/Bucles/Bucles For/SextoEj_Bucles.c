#include <stdio.h>
#include <stdlib.h>

int main(){
int suma = 0;
int n = 0;
	
	printf("Escribe el número para sumar todos los números que van antes que él\n");
		scanf("%d", &n);
		
	for (int i = 0; i<=n; i++){
		
		suma= suma + i;

	}
	printf("La suma de todos los números antes del número %d es: %d\n", n, suma);
	return EXIT_SUCCESS;
}

