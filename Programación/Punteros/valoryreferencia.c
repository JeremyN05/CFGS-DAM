#include <stdio.h>
#include <stdlib.h>

//Ejemplo de paso de un argumento a una función por valor
void incrementar(int n){
	printf("Valor recibido: %d\n", n);
	n++;
	printf("Valor incrementado en la función: %d\n", n);

}

int main(){
	int valor = 10;
	incrementar(valor); // le estoy dando el valor 10, no la variable
	printf("Valor en el main: %d\n", valor); //Imprime un 10

}

return EXIT_SUCCESS;
}
