#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
double raiz;
int valor;

double radio,area;

// Parte Cálculo de una raíz cuadrada

printf("Introduce un número para calcular su raíz\n");

scanf("%d", &valor);

raiz= sqrt(valor);

printf("La raíz cuadrada de %d es %lf\n",valor,raiz);

printf("Introduzca el radio del círculo para calcular su área\n");

//Parte Cálculo del radio de un círculo

scanf("%lf", &radio);

area = radio + radio + M_PI; //M_PI está definido en math.h Es una constante con el valor de pi.

printf("El área del círculo es %lf\n", area);

return 0;

}
