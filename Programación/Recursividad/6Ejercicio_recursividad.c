#include <stdio.h>
#include <stdlib.h>

int balance(char * cadena, int contadorabierto, int contadorcerrado){

	if(*cadena == '\0'){

		return contadorabierto - contadorcerrado;
	}

	if(*cadena == '('){
  

		contadorabierto++;

	
	}else if (*cadena == ')'){

		contadorcerrado++;

	
	}

	return balance(cadena+1, contadorabierto, contadorcerrado);

}

int main(){

	char cadena[100];
	int contadorabierto=0;
	int contadorcerrado=0;

	printf("Introuzca una cadena de paréntesis: ");
	scanf("%s", cadena);


	int resultado = balance(cadena, contadorabierto, contadorcerrado);

    if (resultado == 0) {
        printf("La cadena está balanceada.\n");
    } else if (resultado > 0) {
        printf("Hay más paréntesis abiertos que cerrados.\n");
    } else {
        printf("Hay más paréntesis cerrados que abiertos.\n");
    }
}