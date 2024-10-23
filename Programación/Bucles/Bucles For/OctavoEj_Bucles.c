#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int divisores = 0;
	  printf("Escribe él número el cual quieras saber sus divisores: \n");
	     scanf(" %d", &n);
	  
	     for ( int i = 1; i <= n; i++){
	     
	if (n % i == 0){
		divisores++;

		}
	
	}
	
	   printf("Los divisores del número %d son: %d\n", n, divisores);

	return EXIT_SUCCESS;
}

