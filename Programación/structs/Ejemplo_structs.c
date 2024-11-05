#include <stdio.h>
#include <stdlib.h>

struct fecha {
	int mes;
	int día;
	int año;
};

struct cuenta{
	int num_cuenta;
	char tipo_cuenta;
	char nombre[80];
	float saldo;
	struct fecha ultimopago;

};

int main(){

	struct cuenta cliente[100];
	/**Declarando "hueco" para 100 cuentas**/

	/**Esta forma de inicializar solo es vádilda en la declaración**/
	struct cuenta usuario = {12345, 'R', "José", 586.38,5,24,1990};
		//num_cuenta, tipo_cuenta, nombre, saldo, fecha.mes, fecha.dia, fecha.año
	
	printf("Num cuenta: %d\n", usuario.num_cuenta);
	printf("Tipo cuenta: %c\n", usuario.tipo_cuenta);
	printf("Día del último pago: %d\n", usuario.ultimopago.día);

	//Rellenamos el segundo cliente por pantalla:
	
	printf("Introduce el número de cuenta: ");
	scanf("%d", &cliente[1].num_cuenta);
	printf("El número de cuenta es: %d\n", cliente[1].num_cuenta);

	return EXIT_SUCCESS;

}
