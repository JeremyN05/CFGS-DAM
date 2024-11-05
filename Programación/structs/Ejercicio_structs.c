#include <stdio.h>
#include <stdlib.h>

struct nombre_estudiante {
	char nombre[50];
	int edad;
	int promedio;
};

int main(){

	struct nombre_estudiante estudiante;
	//Rellenamos el segundo cliente por pantalla:
	
	printf("Introduce el nombre del estudiante: ");
	scanf("%d", &estudiante[1].nombre[50]);
	printf("Introduce la edad del estudiante: ");
	scanf("%d", &estudiante[1].edad);
	printf("Introduce el promedio del estudiante: ");
	scanf("%d", &estudiante[1].promedio);


	return EXIT_SUCCESS;

}
