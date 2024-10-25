#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int dígito;


	printf("Introduce el número el cual quieras invertir sus digitos: \n");
	scanf("%d", &n);
		
	while(n > 0){
		dígito= n % 10;
		n = n /10;
		printf("%d\n", dígito);
	}

return 0;
}
