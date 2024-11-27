#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero = 10;
	int trampa = 30;

	const int * ptr = &numero; //Direccion de memoria de numero, solo es modificable el valor, no la dirección de memoria
	//El valor apuntado es constante

	printf("Valor: %d\n", *ptr);

	//*ptr = 20; //Esto daría un error porque, cambia el contenido de prt que es una dirección de memoria, el número es modificable.
	numero = 20; //Cambiar el valor directamente
	printf("Nuevo valor: %d\n", *ptr);

	//Vamos a trampear:
	ptr = &trampa;
	printf("Nuevo valor: %d\n", *ptr);
	return 0;
}