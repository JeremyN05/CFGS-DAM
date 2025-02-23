#include <stdio.h>
#include <stdlib.h>

int balance(char * cadena, int contadorabierto, int contadorcerrado){

	if(*cadena == '\0'){

		return balance;
	}

	if(*cadena == '('){
  

		contadorabierto++;

	
	}else if (*cadena == ')'){

		contadorcerrado++;

	
	}

	if(contadorabierto > contadorcerrado){
		
		printf("Hay más paréntesis abiertos que cerrados. \n");
				
	}else if(contadorcerrado > contadorabierto){

		printf("Hay más paréntesis cerrados que abiertos. \n");
	
	}else if(contadorabierto == contadorcerrado){
		
		printf("Está balanceado");

	}

	return balance(cadena+1, contadorabierto, contadorcerrado);

}

int main(){

	char cadena[100];
	int contadorabierto=0;
	int contadorcerrado=0;

	printf("Introuzca una cadena de paréntesis: ");
	scanf("%s", cadena);

	int p = balance(cadena, contadorabierto, contadorcerrado);
	printf("Hay: %d \n", p);
}