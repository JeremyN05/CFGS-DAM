#include <stdio.h>
#include <stdlib.h>

int main() {

int edad;

printf("Introduzca la edad de su hijo para saber su clasificación: \n");

	scanf("%d", &edad);

	if (edad < 12){
	
		printf("Niño\n");

	}else if (edad >= 12 && edad <= 17){
		printf("Adolescente");

	}
	
	else if (edad >=18 && edad <= 64){
		printf("Adulto\n");

	}else{
		printf("Mayor\n");
	
	}
	

return 0;
}
