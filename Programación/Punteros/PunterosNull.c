#include <stdio.h>
#include <stdlib.h>

//*ptr será lo que hay que imprimir
//tipo indica el tipo de variable

int main(){

	int * dir = NULL;
	printf("Dirección de memoria: %p\n",dir);
	printf("Contenido de esa dirección: %d\n",*dir);

return EXIT_SUCCESS;
}
