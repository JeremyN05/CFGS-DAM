#include <stdio.h>
#include <stdlib.h>

int main(){

	int arr[5] = {10, 20, 30, 40, 50}; //Equivale a int *arr = {.....}
	int *p = arr;
	
	for	(int i = 0; i < 5; i++){
	printf("Elemento %d: %d (en la dirección %p)\n", i, *(p + i), p+i);
}
	printf("Lo mismo pero con long:\n");
	long long_arr[5] = {10, 20, 30, 40, 50};
	long *long_p = long_arr;

	for (int i = 0; i < 5; i++){
	printf("Elemento %d: %ld (en la dirección %p)\n", i, *(long_p + i), long_p+i);
	}

return EXIT_SUCCESS;
}
