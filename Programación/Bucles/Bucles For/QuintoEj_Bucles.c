#include <stdio.h>
#include <stdlib.h>

int main(){
int n = 0;
int factorial = 1;

	  printf("Escribe el número a factorizar:\n");
	     scanf(" %d", &n);
	  
	     for ( int i = n; i > 0; i--){
	     
	factorial = factorial * i;

	}
	
	   printf("La factorización del número %d es: %d\n", n, factorial);

	return EXIT_SUCCESS;
}

