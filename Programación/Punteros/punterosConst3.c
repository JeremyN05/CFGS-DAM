#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 10;
	int trampa = 30;

	const int * const ptr = &numero; //Con los dos Cons, ya no se puede modificar la dirección de memoria, ni el contenido de la dirección
	printf("Valor: %d\n", *ptr);

	//*ptr = 20; //Esto daría un error porque, cambia el contenido de prt que es una dirección de memoria, el número es modificable.
	numero = 20; //Cambiar el valor directamente
	printf("Nuevo valor: %d\n", *ptr);

	//Vamos a trampear:
	ptr = &trampa; ya no es modificable el contenido de la dirección de memoria. //Error

	*ptr = 30;//Error
	priintf("Nuevo valor: %d\n", *ptr);
	return 0;
}