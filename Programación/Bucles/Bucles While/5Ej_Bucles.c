#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int r;

	srand(time(NULL)); //Cada segundo
	//srand(getpid()); //Identificador del proceso 
	
		for (int i = 0; i < 4; i++);
		// rand() % 5 genera números aleatorio entre 0 y 4 incluidos. Al sumar 1, consigo números aleatorios entre 1 y 5.
		r = (rand() % 5) + 1;
		//Hacer módulo ocho da números aleatorios entre 0 y 6
		printf("%d\n", r);

	return EXIT_SUCCESS;

}

/* Construir una función que calcule un número aleatorio entre dos valores dados como argumento*/
