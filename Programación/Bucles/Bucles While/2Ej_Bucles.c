#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int dígito;
int suma=0; //En suma ponemos un 0 porque necesitamos inicializar el bucle.

	printf("Introduce el número el cual quieras sumar sus digitos: \n");
	scanf("%d", &n);
		
	while(n > 1){
		dígito= n % 10;
		suma = suma + dígito;
		n = n /10;

	// Se repite el bucle hasta que el número dado por el usuario sea 0.
	
	}

	printf("La suma de los digítos es: %d\n", suma);

return 0;
}
