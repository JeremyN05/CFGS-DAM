#include <stdio.h>
#include <stdlib.h>

void es_vocal(char Letra){
	
printf("Escribe una letra vocal\n");
scanf("%c", &Letra);
scanf("%c", &Letra); 

/*Se pone doble scanf, porque sino da un error, el cual no deja escribir la letra, como que se salta esa parte, al poner doble scanf lo que hacemos es dejar que nos permita escribir la letra.*/

if (Letra == 'a' || Letra == 'A' || Letra == 'e' || Letra == 'E' || Letra == 'i' || Letra == 'I' || Letra == 'o' || Letra == 'O' || Letra == 'u' || Letra == 'U'){

printf("La letra %c es una vocal\n", Letra);

}else{

printf("La letra %c no es una vocal\n", Letra);
}

}
 
void calcular_area_figura(){

double Acírculo, Acuadrado, radio, lado;
int opcion;


printf("¿Qué figura deseas calcular (círculo = 1, o cuadrado = 2)\n");

scanf("%d", &opcion);

if (opcion == 1){
	
		printf("Introduce el radio del círculo:\n");
		scanf("%lf", &radio);
		
		Acírculo = 3.1416 * radio * radio;

		printf("El área del círculo con radio %lf es %lf\n", radio, Acírculo);
		
	}else if (opcion == 2){
	
		printf("Introduce el lado del cuadrado:\n");
		scanf("%lf", &lado);

		Acuadrado = lado * lado;

		printf("El área del cuadrado con lado %lf es %lf\n", lado,  Acuadrado);
	
	}else{
		printf("Error en la función calcular_area_figura\n");
}

double calcular_promedio_tres_num(double num1, double num2, double num3){

	double promedio_3 = (num1 + num2 + num3)/3;
	{
}


double calcular_promedio_cuatro_num(double num1, double num2, double num3,double num4){
	
	double promedio_4 = (num1 + num2 + num3 + num4)/4;

}

void calcular_promedio(double num1, double num2, double num3, double num4){

	double números;

	printf("¿Cuántos números deseas promediar (3 o 4)?\n");
	scanf("%lf", &números);

if (números == 3){

	printf("Introduce el número 1:\n");
	scanf("%lf", &num1);
	printf("Introduce 3l número 2:\n");
	scanf("%lf", &num2);
	printf("Introduce el número 3:\n");
	scanf("%lf", &num3);
	
	printf("El promedio de %lf, %lf y %lf es:\n", num1, num2, num3);

}else if (números == 4){
	
	printf("Introduce el número 1:\n");
	scanf("%lf", &num1);
	printf("Introduce 3l número 2:\n");
	scanf("%lf", &num2);
	printf("Introduce el número 3:\n");
	scanf("%lf", &num3);
	printf("Introduce el número 4:\n");
	scanf("%lf", &num4);
	
	printf("El promedio de %lf, %lf, %lf y %lf es:\n", num1, num2, num3, num4);

}

int main(){

int funciones;

	printf("Selecciona una opción\n");

	printf("1. Verificar si una letra es una vocal\n");
	printf("2. Calcular el área de una figura (círculo o cuadrado)\n");
	printf("3. Calcular el promedio de 3 o 4 números\n");

	scanf("%d", &funciones);
	
switch(funciones){

	case 1:
		char Letra2;
		es_vocal(Letra2);

	break;
	
	case 2:	
		double radio2, area2;
		int opcion2;
		calcular_area_figura();	
	
	break;

	case 3:
	
		calcular_promedio();	

	break;
}

}

