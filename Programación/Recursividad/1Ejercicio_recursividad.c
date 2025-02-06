#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar_consonantes(char * arr, int * numero_consonantes, int tamaño){

 	if (tamaño == 0){
 		return 0;
 	}

 	if ( arr[tamaño -1] != 'a' && arr[tamaño -1] != 'e' && arr[tamaño -1] != 'i' && arr[tamaño -1] != 'o' && arr[tamaño -1] != 'u' && arr[tamaño -1] != 'A' && arr[tamaño -1] != 'E' && arr[tamaño -1] != 'I' && arr[tamaño -1] != 'O' && arr[tamaño -1] != 'U'){
		(*numero_consonantes)++; //Paso la variable original inicializada en 0 IMPORTANTE, inicializar las cosas (paso por referencia, para que se modifique).
	}

	return contar_consonantes(arr, numero_consonantes, tamaño-1);

}

int main(){

char palabra[50];

printf("Introduzca la palabra: ");
scanf("%s", palabra);

int tamaño = strlen(palabra);
int numero_consonantes = 0;

contar_consonantes(palabra, &numero_consonantes, tamaño);

printf("La palabra %s tiene %d letras consonantes \n", palabra, numero_consonantes);

}
