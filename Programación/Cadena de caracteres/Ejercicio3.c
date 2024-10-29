#include <stdio.h>
#include <stdlib.h>

int main(){
// El programa al ejecutarse indica que son distintas, esto debido a que el comando str1 o variable, guarda la dirreción de memoria donde se guardan los datos, por eso nos idica que es distinto aunque sean iguales, por que las dirrecciones de memoria se guardan de manera aleatoria.
//
	char str1[100] = "iguales";
	char str2[100] = "iguales";

	if (str1 == str2){
		printf("Son iguales");
	
	}else{
		printf("Son distintas\n");
	
	}

	return EXIT_SUCCESS;

}
