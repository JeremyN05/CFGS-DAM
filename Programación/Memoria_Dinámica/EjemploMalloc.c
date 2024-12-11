#include <stdio.h>
#include <stdlib.h>

int main{
	int p_error = malloc(sizeof(int)); 
	//Aqui hay un casting implícito.
	// malloc devuelve un void* (Puntero a void). Hay que convertirlo para poder utilizarlo.

	//Como se debería hacer, casting implicito.
	int *p = (int *) malloc(sizeof(int));
	
	if (p == NULL){ //Si malloc falla es porque no hay memoria disponible
		printf("ERROR FATAL \n");

		return 1; //El programa ha fallado
	}

	*p = 42; //Usamos la memoria
	printf("El valor es: %d\n", *p);
	free(p); //Libramos la memoria reservada
	free(p_error);

	return EXIT_SUCCES;
}
