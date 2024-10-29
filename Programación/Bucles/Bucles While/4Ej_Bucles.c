#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int contador;


	printf("Introduce el número el cual quieras contar sus digitos: \n");
	scanf("%d", &n);
		
	while(n > 0){
			// En esta parte se ejecuta el bucle
			// En este caso, el número dado por el usuario se dividira entre 10, y la función contador lo que hace es contar cuantas vueltas da n = n /10 y contarlas.
	
		n = n /10;
		contador++;

	}
		printf("%d\n", contador);

return 0;
}
