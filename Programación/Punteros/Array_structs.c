#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
//*Como funcionan los punteros con los structs

typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;

}Estudiante;
/*
//Estudiante inicializar(char * nombre, int edad, float nota){
	//Creo una variable de tipo Estudiante
	Estudiante estudiante_nuevo;

	//Inicializo el estudiante e.edad = edad, ...
	return estudiante_nuevo;
}
*///No es correcto, porque una vez la nota se utilice el espacio de memoria que se reservo para esa nota, que da libre, y eso quiere decir que puede dar un error, ya que al quedar libre se puede sobrescribir.

/*Estudiante * inicializar(char * nombre, int edad, float nota){

	Estudiante estudiante_nuevo;

	//Inicializo
	return &estudiante_nuevo;
}*///Esta manera es valida, pero no hemos visto como hacerlo, porque no sabemos reservar memoria.
 
void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){

	//estudiante_a_rellenar -> nombre = nombre; es incorrecto, porque no guardamos el nombre, sino igualamos el valor de nombre al valor de la memoria en el que se guarda.
	estudiante_a_rellenar -> edad = edad; //Se pone la flechita, porque estudiante_a_rellenar, es un puntero, no un estudiante.
	estudiante_a_rellenar -> nota = nota;
	strcpy(estudiante_a_rellenar -> nombre, nombre); //Aqui copiamos el nombre letra por letra, sin igualar el valor en la memoría.
}

int main(){
	Estudiante Listado[MAX_ESTUDIANTES]; //Aqui se reserva la memoria para los estudiantes, que son 560 bytes.
	
	int num_estudiantes;
	
	float nota;
	int edad;
	char nombre[MAX_NOMBRE];

	printf("%p\n", Listado);
	printf("Sizeof listado: %lu\n", sizeof(Listado)); //560, porque ocupan 28 bytes.
	printf("Sizeof estudiante: %lu\n", sizeof(Estudiante));

	printf("¿Cuántos estudiantes desea inicializar? ");
	scanf("%d", &num_estudiantes);
	
for (int i = 0; i < num_estudiantes; i++){	
	printf("Introduce el nombre: ");
	scanf("%s", nombre);

	printf("Introduce la edad: ");
	scanf("%d", &edad);

	printf("Introduce la nota: ");
	scanf("%f", &nota);
	
	//inicializar(Listado + i, nombre, edad, nota);
	inicializar(&Listado[i], nombre, edad, nota);
}

return EXIT_SUCCESS;
}
