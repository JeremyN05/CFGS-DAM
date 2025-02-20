#include <stdio.h>
#include <stdlib.h>

int profundidad(char * cadena, int balance){

	static int profundidad_max = 0;

	if(*cadena == '\0'){

		return profundidad_max;
	}

	if(balance > profundidad_max){
			profundidad_max = balance;
		}

	if(*cadena == '('){
  

		return profundidad(cadena+1, balance+1);

	
	}else if (*cadena == ')'){


		return profundidad(cadena+1, balance-1);

	
	}else return profundidad(cadena+1, balance);

}

int main(){

	char cadena[100];
	int balance=0;

	printf("Introuzca una cadena de paréntesis: ");
	scanf("%s", cadena);

	int p = profundidad(cadena, balance);
	printf("Hay: %d \n", p);
}