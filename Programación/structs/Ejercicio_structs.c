#include <stdio.h>
#include <stdlib.h>

struct nombre_estudiante {
	char nombre[50];
	int edad;
	double promedio;
};

int main(){

	struct nombre_estudiante estudiante;
	//Rellenamos el segundo cliente por pantalla:
	
	printf("Introduce el nombre del estudiante: ");
	scanf("%s", estudiante.nombre);
	printf("Introduce la edad del estudiante: ");
	scanf("%d", &estudiante.edad);
	printf("Introduce el promedio del estudiante: ");
	scanf("%lf", &estudiante.promedio);

	printf("Los datos del estudiante son: %s %d %lf\n", estudiante.nombre, estudiante.edad, estudiante.promedio);
	return EXIT_SUCCESS;

}
