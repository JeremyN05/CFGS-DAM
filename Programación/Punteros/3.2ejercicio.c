#include <stdio.h>
#include <stdlib.h>

int main(){

	int suma= 0;
	int arr[5] = {10, 20, 30, 40, 50};
	int *p;
	p = arr+5;

	for (int i = 5; i > 0; i--){
		suma += *(p-i);
		printf("Elemento %d: %d\n", i, *(p-i));
}

return EXIT_SUCCESS;
}
