#include <stdio.h>
#include <stdlib.h>

int main(){

float num1;
float num2;

char operador;

printf("Introduce el primer número a operar:\n");
	scanf("%f", &num1);
printf("Introduce el segundo número a operar:\n");
	scanf("%f",&num2);
printf("Introduce el operardor (+. -, *. /)\n");
	scanf("%c", &operador);
	scanf("%c", &operador);

switch(operador){

	case '+':
		float suma = num1 + num2;
		printf("El resultado de la suma es: %f\n", suma);

	break;

case '-':
		float resta = num1 - num2;
 		printf("El resultado de la resta es: %f\n", resta);

  	break;

case '*':
		float multi = num1 * num2;
	 	printf("El resultado de la multiplicación es: %f\n", multi);

	break;

case '/':

		float divi = num1 / num2;
	 	printf("El resultado de la división es: %f\n", divi);
	  
	break;


default: printf("El operador no es válido\n");
	 
}


return 0;
}
