#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;
printf("Ingrese un número entero\n");

	scanf("%d", &numero);

	if (numero %2 == 0){
	
		printf("Es un número Par\n");

	}else{
		printf("Es un número Impar\n");

	}	

return 0;
}
