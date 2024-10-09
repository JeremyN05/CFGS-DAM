#include <stdio.h>
#include <stdlib.h>

int main(){

float monto;
float resultado_monto;

char Estudiante = 'E';
char Profesor = 'P';
char rol;

printf("Ingrese el monto total de la compra:\n");

scanf("%f", &monto);

printf("Ingrese su rol o la inicial\n");

scanf("%c", &rol);
scanf("%c", &rol);

	if (rol == Estudiante){
		printf("Su descuento es del 15 por ciento\n");

		resultado_monto = monto - (monto * 0,15);

		printf ("El resultado del monto es:%f\n", resultado_monto);

	}else if (rol == Profesor){
		printf("Su descuento es del 10 por ciento\n");

		resultado_monto = monto - (monto * 0,10);

		printf("El resultado del monto es:%f\n", resultado_monto);
	}else{
		printf("Otro, sin descuento\n");
	}
	
return 0;	

}


