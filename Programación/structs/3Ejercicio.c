#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITEMS 10
typedef struct{

	char nombre[100];
	char dirección[100];
	char telefono[9];
}Proveedor;

typedef struct{

	char nombre_prod[100];
	double precio;
	Proveedor proveedor;
}Articulo;

typedef struct{

	Articulo articulo[MAX_ITEMS];
	int cantidades[MAX_ITEMS]; //Declaro un array de MAX_ITEMS, que es el tamaño que va a tener
	int totalArticulos;
}Inventario;

int main() {
	
	Inventario miInventario;
	
	Articulo articulo = {"Nombre", 10,{"nombre_prod","dirección","telefono"}}; //Decalaración e inicialización
	
	miInventario.articulo[0] = articulo;
	miInventario.cantidades[0] = 10;
	
	printf("Nombre artículo: %s\n", miInventario.articulo[0].nombre_prod);
	printf("Cantidad: %d\n",miInventario.cantidades[0]);
	printf("Nombre del proveedor: %s\n", miInventario.articulo[0].proveedor.nombre);


return 0;
}
