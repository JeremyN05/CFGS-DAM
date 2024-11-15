#include <stdio.h>
#include <stdlib.h>

//*ptr será lo que hay que imprimir
//tipo indica el tipo de variable

void printValor(void * ptr, char tipo){

	switch(tipo){
		case 'd':
			//printf("Double %lf\n", ((double *)ptr); Esto no es correcto porque no accedemos al contenido del puntero
			printf("Double %lf\n", *((double *)ptr));
			break;
		default:
			printf("Error");
	}
}

int main(){
	int num = 10;
	
	void * dir= &num; //Void significa nada, es decir, que no sabes que hay	
	
	printValor(dir, 'd');

return EXIT_SUCCESS;
}
