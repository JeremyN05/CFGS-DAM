#include <stdio.h>
#include <stdlib.h>

char Capitalizar (char minus){ 
char mayus = minus - 32;

printf("La Letra %c en mayúsculas es: %c\n", minus, mayus);

return 0;

}

int main(){

char Letra_minuscula;

printf("Escribe una letra minúscula: \n");

scanf("%c", &Letra_minuscula);

Capitalizar (Letra_minuscula);


}
