#include <stdio.h>
#include <stdlib.h>

//Ejemplo de paso de un argumento a una función por valor
//Quiero que realmente incremente la variable dada como argumento
//
void intercambiar(int *n1, int *n2, int *n3){
	*n3 = *n2;
	*n2 = *n1;
	*n1 = *n3;
}

int main(){
	int n1 = 10;
	int n2 = 30;
	int n3 = 0;

	intercambiar(&n1, &n2, &n3); // le estoy dando el valor 10, no la variable

	printf("%d\n", n1);
	printf("%d\n", n2);

return EXIT_SUCCESS;
}
