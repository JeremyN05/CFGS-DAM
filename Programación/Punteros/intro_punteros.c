#include <stdio.h>
#include <stdlib.h>

int main(){

	int x = 10;
	int *p; //Esta variable es de tipo "int *", es decir, puntero a entero.
		//Esto quiere decir que va a almacenar la dirección de memoria de una variable de tipo entero.
	
	p= &x;
	printf("Valor de x: %d\n", x); //Saca el número 10
	printf("Dirección de x: %p\n", &x); //Saca 0x7fffbe446b1c que es la dirección memoria
	printf("valor de p: %p\n", p); //Saca lo mismo que el de arriba, porque son iguales
	
	//¿Cómo accedo al contenido de una dirección de memoria?
	
	printf("Contenido de p: %d\n", *p); //El asteristo te enseña el contenido de la dirección de memoria

return EXIT_SUCCESS;
}
