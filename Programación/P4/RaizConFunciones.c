#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int CalcularRaiz(){

int valor;

double raiz;


// Parte Cálculo de una raíz cuadrada

printf("Introduce un número para calcular su raíz\n");

scanf("%d", &valor);

raiz= sqrt(valor);

printf("La raíz cuadrada de %d es %lf\n",valor,raiz);

return 0; //como todo ha ido bien, devuleve un 0.
	  


}

int CalcularArea(){

double radio;
	
double area;

//Parte Cálculo del radio de un círculo

printf("Introduzca el radio del círculo para calcular su área\n");

scanf("%lf", &radio);

area = radio + radio + M_PI; //M_PI está definido en math.h Es una constante con el valor de pi.

printf("El área del círculo es %lf\n", area);

return 0;

}

int main(){

CalcularRaiz();

CalcularArea();

return 0;

}
