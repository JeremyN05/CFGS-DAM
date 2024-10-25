#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int dígito;
int suma=0;

	printf("Introduce el número el cual quieras sumar sus digitos: \n");
	scanf("%d", &n);
		
	while(n > 1){
		dígito= n % 10;
		suma = suma + dígito;
		n = n /10;
	}

	printf("La suma de los digítos es: %d\n", suma);

return 0;
}
