#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void imprimir_vocales(char * palabra){
	
	if(*palabra == '\0'){

		return;
	}

	char letra = tolower(*palabra);

	if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){

		printf("las vocales son: %c \n", *palabra);
	}

	return imprimir_vocales(palabra+1);

}

int main(){

	char palabra[50];

	printf("Introuzca la palabra: ");
	scanf("%s", palabra);

	printf("la palabra es: %s \n", palabra);

	imprimir_vocales(palabra);

	return 0;
}
