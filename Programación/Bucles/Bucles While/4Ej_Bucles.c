#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int dígito; 
int contador;


	printf("Introduce el número el cual quieras contar sus digitos: \n");
	scanf("%d", &n);
		
	while(n > 0){

		dígito= n  ;
		contador = dígito  ;
		n = n /10;

		printf("%d\n", contador);
	}

return 0;
}
