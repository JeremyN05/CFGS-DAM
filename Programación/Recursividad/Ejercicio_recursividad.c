#include <stdio.h>
#include <stdlib.h>

int busqueda_binaria(int * array, int a_buscar, int inicio, int fin){

	int mitad = (inicio + fin) % 2;
	if (a_buscar == array[mitad]){
		return 1;
	
	}else if(a_buscar < array[mitad]){

		ret =busqueda_recursiva (array, a_buscar, inicio, mitad);

	}else {
		ret = busqueda_recursiva(array, a_buscar, fin, mitad);
	} 

}

int main(){

	int array[10]= { -5, 1, 9, 10, 11, 12, 17, 120, 150, 1500};
	int a_buscar = 120;
	int encontrado = busqueda_binaria (array, 120, 0, 9);

	return 0;
}
