#include <stdio.h>
#include <stdlib.h>

int main(){
	const int LIMITE = 100; //Definir una constante

	int * trampa = &LIMITE; //Esta asignación genera un Warning (que no es un error)

	printf("El valor de LIMITE es: %d\n", LIMITE);

	//LIMITE = 200; //Esta daría un error porque LIMITE es constante
	
	return 0;
}