#include <stdio.h>
#include <stdlib.h>

int main(){

	float suma,resta,multi,ent1,ent2;

	float divi;

	scanf("%d\n", &ent1);
	scanf("%d", &ent2);

	float resultado_suma= ent1 + ent2;

	float resultado_resta= ent1 - ent2;

	float resultado_multiplicación= ent1 * ent2;

	float resultado_división= ent1 / ent2;


	printf("El resultado de la suma es: %f\n", resultado_suma);
	printf("El resultado de la resta es: %f\n", resultado_resta);
	printf("El resultado de la multiplicación es: %f\n", resultado_multiplicación);
	printf("El resultado de la división es: %f\n", resultado_división);


	return 0;
}
