#include <stdio.h>
#include <stdlib.h>

int busqueda_binaria(int * array, int a_buscar, int inicio, int fin){

	int mitad = (inicio + fin) / 2;

	if (array[mitad] == a_buscar){
		return mitad;
	}

	if (inicio > fin){
		return -1;
	}
	

	if(array[mitad] > a_buscar){

		return busqueda_binaria(array, a_buscar, inicio, mitad-1);

	}else {

		return busqueda_binaria(array, a_buscar, mitad+1, fin);
	} 

	printf("%d", busqueda_binaria);
}

int main(){

	int array[10]= { -5, 1, 9, 10, 11, 12, 17, 120, 150, 1500};
	int a_buscar = 120;
	int encontrado = busqueda_binaria (array, 120, 0, 9);

	return 0;
}
