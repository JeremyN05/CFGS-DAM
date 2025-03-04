#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definimos las constantes
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200

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

// Tiene que recibir un puntero a estudiante, porque va a modificar la edad del estudiante
// No es necesario un valor de retorno, por eso se utiliza el void
// Cumpleañero es un puntero porque va a ser modificado en la función
void cumpleanios(Estudiante * cumpleañero){
	cumpleañero -> edad++;

}

//Vamos a crear una función para imprimir un Estudiante. Lo vamos a hacer de dos formas.

//Recibe un estudiante y muestra por pantalla la información del estudiante

void imprimirEstudiante(const Estudiante * estudiante_a_imprimir){ //El const de delante de Estudiante, hace que el contenido de Estudiante, no se pueda modificar.
	printf("Nombre: %s\n", estudiante_a_imprimir -> nombre);
	printf("\tEdad: %d\n", estudiante_a_imprimir -> edad);
	printf("\tNota: %f\n", estudiante_a_imprimir -> nota);
}	

/*Una función de imprimir sin los printf */
//Convertir un estudiante a una cadena de texto
//Esta función da un warning, porque la variable retval deja de existir cuando acaba la función.

/*Warning*/
/*char * estudianteToString(const Estudiante * datos){
	char retval[MAX_BUFFER];

//snprintf (dónde, cuando, el qué [Lo que harías con un printf])
	snprintf(retval, MAX_BUFFER, "El estudiante %s de %d años ha sacado un %f.", datos -> nombre, datos -> edad, datos -> nota);

//Quiero que sea un argumento y rellenarla
	return retval;
}*/

void * estudianteToString(const Estudiante * datos, char * retval){

	snprintf(retval, MAX_BUFFER*sizeof(char), "El estudiante %s de %d años ha sacado un %f.", datos -> nombre, datos -> edad, datos -> nota);

	return retval;
}
	
void cambiarNombre_Estudiante(Estudiante * RenombrarEstudiante, char * nuevo_nombre){

	printf("Introduzca el nuevo nombre: ");
	scanf("%s", nuevo_nombre);

	strcpy(RenombrarEstudiante -> nombre, nuevo_nombre);
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
	
	printf("\n");

	//inicializar(Listado + i, nombre, edad, nota);
	inicializar(&Listado[i], nombre, edad, nota);

	//El estudiante de la posición uno ha cumplido años
	printf("Edad antigua de %s: %d\n",Listado[i].nombre, Listado[i].edad);
	cumpleanios(&Listado[i]);
	printf("Edad nueva: %d\n", Listado[i].edad);

	printf("\n");

	/* Vamos a imprimir estudiantes*/

	imprimirEstudiante(&Listado[i]);

	//El estudiante... de ... años ...

	printf("\n");

	char StringArellenar[MAX_BUFFER];
	estudianteToString(&Listado[i], StringArellenar);
	printf("%s\n", StringArellenar);

	printf("\n");


	cambiarNombre_Estudiante(Listado, nombre);
	printf("El nuevo nombre %s\n", Listado[i].nombre);

	printf("\n");
	
}

return EXIT_SUCCESS;
}
