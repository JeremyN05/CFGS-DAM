#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
												/*AUTOR: Jeremy Narváez Lobato*/

//Se definen las constantes que se utilizaran

#define MAX_TITULO 80 //Definimos que el título del libro tenga como máximo 80 caracteres.
#define MAX_AUTOR 60 //Definimos que el nombre del autor tenga como máximo 60 caracteres.
#define SIZE_CATALOG 40 //Definimos que el catalogo contenga como máximo 40 cadenas de caracteres.

// Asocia un valor numérico a cada categoría de libros
typedef enum{
		
		FICCION, // Se corresponde con el número 0
		NO_FICCION, // Se corresponde con el número 1
		POESIA, // Se corresponde con el número 2
		TEATRO,// Se corresponde con el número 3 
		ENSAYO, // Se corresponde con el número 4

}CATEGORY;

//Aqui se define la estructura que va a seguir BOOK, es decir, todos los datos que se inserten en BOOK, tienen que seguir esta estructura.
typedef struct{
	int ID_LIBRO;
	char Titulo[MAX_TITULO]; //Definimos que el título tiene como máximo número de caracteres la regla MAX_TITULO, que son 80 caracteres.
	char Autor[MAX_AUTOR]; //Definimos que el Autor tiene como máximo número de caracteres la regla MAX_AUTHOR, que son 60 caracteres.
	float Precio;
	CATEGORY Genero; //CATEGORY contiene Genres.
	int Stock;

}LIBRO;

// Función para imprimir los detalles de un libro
// Recibe un puntero a un libro y muestra sus atributos
void printBOOK(const LIBRO * Libro){ // Para no tener que estar todo el rato escribiendo un printf con los datos de libro, se crea una variable que ya tenga este printf hecho, y asi solo lo llamamos donde lo necesitemos. 
	
	printf("ID %d título %s autor o autores %s precio %.2f género %d stock %d \n", Libro -> ID_LIBRO, Libro -> Titulo, Libro -> Autor, Libro -> Precio, Libro -> Genero, Libro -> Stock); //Este printf muestra por pantalla el contenido de BOOK, es decir, muestra el contenido que esta en la dirección de memoría de BOOK, si usaramos el punto en vez de la flecha, prodiamos modificar el valor que esta en la dirección de memoria de BOOK 
}

//Variable que muestra todos los libros con sus respectivos datos.
void Mostrar_Libros(const LIBRO * Libros){ //Es un puntero de BOOK a Books, poque queremos mostrar o modificar los datos que Books contiene.

	for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.
	printBOOK(&Libros[i]); //Este printBOOK, es la variable creada anteriormente, el cual nos ahorra tener que estar escribiendo printf todo el rato, el &Books[i] nos indica que imprima todo lo que haya dentro de la dirección de memoria de Books el & accede a la dirección de memoría de Books.
	}

}

//Función que muestra el libro que desea ver el usuario
void Mostrar_ID(const LIBRO * Libros, int ID){

	for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.
		
		if(Libros[i].ID_LIBRO == ID){ //En este fragmento de código se compara el valor de ID_BOOK, que representa el identificador único del libro, con el identificador proporcionado por el usuario. Si ambos valores coinciden, el programa procederá a imprimir en pantalla la información correspondiente al libro.

			printBOOK(&Libros[i]); //Imprime todos los datos de Books, siempre que se cumpla lo indicado en el bucle.
			printf("\n");
			break;
		}
		else if(ID < 1 || ID > 40){ //Aquí verificamos si el identificador proporcionado por el usuario es menor que 1 o mayor que 40, valores que representan los límites válidos dentro de la variable books. En caso de que el ID dado por el usuario esté fuera de este rango, se genera un mensaje de error indicando que dicho identificador no existe.

			printf("El ID %d no existe \n", ID);
			printf("\n");
			break;
		}
	}
}

//Función que aumenta o disminuye el stock de un libro dado por el usuario.
void Aumentar_o_Disminuir_stock(LIBRO * Libros, int numero_ID, int cantidad){
			

		for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.

			if(numero_ID == Libros[i].ID_LIBRO){ //En este bucle for, comprobamos que el número_ID que indica el usuario exista dentro de Books, si existe, se procedera a realizar lo que haya dentro de este.

				printf("El libro con el ID %d tiene un stock de %d \n", numero_ID, Libros[i].Stock); //En este printf mostramos por pantalla el stock que contiene el ID del libro.
				
				Libros[i].Stock += cantidad; //En esta parte modificamos el valor dentro de la dirección de memoría de Books (Con el punto), que en este caso se corresponde a Available_quantity para sumar este con el número indicado por el usuario, se usa el punto para modificar el valor y no la -> porque es la dirección de memoria.

				printf("El libro con el ID %d ahora tiene un stock de %d\n", numero_ID, Libros[i].Stock); //Mostramos el stock despues de realizar el aumento o disminución del stock indicado por el usuario.
				
				break;
			}
		}
}

//Variable que muestra los libros de una categoría dada por el usuario.
void Mostrar_Libro_Genero(const LIBRO * Libros, int Num_Category){ //Esta variable se podría hacer con un swicht, pero decidi hacerlo con un bucle for, porque es más rapido de hacer.

		printf("Los libros con la categoria seleccionada son: \n");

		for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.

			if(Num_Category == Libros[i].Genero){ //Comprobamos que el Num_Category coincida con algún dato en Books[i].Genres, si coinciden, imprimira por pantalla los libros que pertenezcan a la categoría indicada por el usuario.
			
				printBOOK(&Libros[i]); //Imprime todos los datos de Books, siempre que se cumpla lo indicado en el bucle.
			
			}else if(Num_Category < 0 | Num_Category > 4){ //Sí el número de la categoría es menor que 0 o mayor que 4, mostrara por pantalla el printf con el error.

				printf("Error la categoria %d no existe \n", Num_Category);
				printf(" \n");
				break;
			}
	}
}

// Redimensiona el array y permite ingresar nuevos libros
LIBRO * Añadir_Libro(LIBRO * catalogo, int cantidad_libros_añadir){ //función para añadir libros

	int Cantidad_libros = SIZE_CATALOG + cantidad_libros_añadir; //Se crea una variable para saber cuantos libros desea añadir el usuario, para ello aumentamos el tamaño del catalogo con la cantidad de libros que el usuario quiera añadir

	LIBRO * catalogo2 = (LIBRO *) realloc(catalogo,Cantidad_libros * sizeof(LIBRO)); //Creamos una dirección de memoria dinámica para guardar los libros nuevos que el usuario añada.

	if (catalogo2 == NULL){ //Cuando catalogo2 es un numero nulo, salta un error.
		printf("ERROR no se puedo asignar memoria \n");
		exit(EXIT_FAILURE) ;
	}

	catalogo = catalogo2; //Indicamos que catalogo2 sigue la estructura de catalogo, esto nos evita poner las variables que ya exiten en catalogo, es decir, nos ahorramos escribir int ID_libro, char Titulo, etc...

	for (int i = 40; i < Cantidad_libros; i++){ //Creamos el bucle que recorre los libros del catalogo.

	printf("Introduzca el ID (Mayor a 40): ");
	int valor_entorno = scanf("%d", &catalogo2[i].ID_LIBRO);

	if (valor_entorno == 0){

		printf("Error, el dato introducido no es un número \n");
	}

	printf("Introduzca el título del libro: ");
	scanf(" %[^\n]", catalogo2[i].Titulo);

	printf("Introduce el nombre del Autor: ");
	scanf(" %[^\n]", catalogo2[i].Autor);

	printf("Introduzca el precio del libro: ");
	scanf("%f", &catalogo2[i].Precio);

	int añadir_Genero;

	printf("Introduzca el género del libro(0 = FICTION 1 = NO_FICCION, 2 = POESIA, 3 = TEATRO, 4 = ENSAYO): ");
	scanf("%d", &añadir_Genero);

	catalogo2[i].Genero = añadir_Genero; //Creo una nueva variable para igualarla al catalago2[i].Genero, porque sino no te pilla el genero, que es un int, no una cadena de caracteres.

	printf("Introduzca el stock del libro: ");
	scanf("%d", &catalogo2[i].Stock);
	}

	for (int i = 0; i < Cantidad_libros; i++){ //Bucle que recorre todos los libros del catalogo2 incluyendo los libros que el usuario añadio, para imprimir todos los libros juntos.

		printf("ID %d título %s autor o autores %s precio %.2f género %d stock %d \n", catalogo2[i].ID_LIBRO, catalogo2[i].Titulo, catalogo2[i].Autor, catalogo2[i].Precio, catalogo2[i].Genero, catalogo2[i].Stock);
	}

	 return &catalogo2[0];
}

// Función para buscar libros por autor
// Busca coincidencias en el nombre del autor
void imprimir_autor(LIBRO *Libros, char *buscar_autor) {
    if (buscar_autor == NULL) {
        printf("Error: el autor a buscar es NULL\n");
        return;
    }

    int encontrado = 0;

    for (int i = 0; i < SIZE_CATALOG; i++) { // Recorre todos los libros en el catálogo
        if (Libros[i].Autor != NULL) { // Verifica que el autor del libro no sea NULL
            // Busca la cadena directamente dentro del campo Autor
            if (strstr(Libros[i].Autor, buscar_autor) != NULL) {
                printBOOK(&Libros[i]); // Muestra el libro
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("No existe el autor indicado\n");
    }
}


void inicializar_libro (LIBRO * libro,int id, char * titulo, char * autor, int precio, int genero, int stock){ //Creamos una función que guarde los datos de los nuevos libros.

	libro->ID_LIBRO = id;
	strcpy(libro->Titulo , titulo);
	strcpy(libro->Autor , autor);
	libro->Precio = precio;
	libro->Genero = genero;
	libro->Stock = stock;

}



//argc: número de argumentos recibidos 
//argv: array de cadenas de texto
int main(int argc, char ** argv){ //argv empieza en el argumento cero que equivale a ./Biblioteca_prueba.c, el primer argumento sería lo que viene despúes. 


		LIBRO * catalogo = (LIBRO * ) malloc (SIZE_CATALOG * sizeof(LIBRO)); //Pasamos de memoría estática a memoría dinámica.
	
	if (catalogo == NULL){
		printf("ERROR no se puedo asignar memoria \n");
}
        inicializar_libro( &catalogo[0], 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10);
        inicializar_libro( &catalogo[1], 2, "1984", "George Orwell", 12.49, FICCION, 5);
        inicializar_libro( &catalogo[2], 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8);
        inicializar_libro( &catalogo[3], 4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12);
        inicializar_libro( &catalogo[4], 5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7);
        inicializar_libro( &catalogo[5], 6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9);
        inicializar_libro( &catalogo[6], 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6);
        inicializar_libro( &catalogo[7], 8, "The Odyssey", "Homer", 17.49, FICCION, 4);
        inicializar_libro( &catalogo[8], 9, "Ulysses", "James Joyce", 25.00, FICCION, 2);
        inicializar_libro( &catalogo[9], 10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3);
        inicializar_libro( &catalogo[10], 11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11);
        inicializar_libro( &catalogo[11], 12, "The Iliad", "Homer", 18.50, FICCION, 7);
        inicializar_libro( &catalogo[12], 13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15);
        inicializar_libro( &catalogo[13], 14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20);
        inicializar_libro( &catalogo[14], 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13);
        inicializar_libro( &catalogo[15], 16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6);
        inicializar_libro( &catalogo[16], 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5);
        inicializar_libro( &catalogo[17], 18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8);
        inicializar_libro( &catalogo[18], 19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4);
        inicializar_libro( &catalogo[19], 20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14);
        inicializar_libro( &catalogo[20], 21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6);
        inicializar_libro( &catalogo[21], 22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8);
        inicializar_libro( &catalogo[22], 23, "Othello", "William Shakespeare", 10.99, TEATRO, 7);
        inicializar_libro( &catalogo[23], 24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5);
        inicializar_libro( &catalogo[24], 25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4);
        inicializar_libro( &catalogo[25], 26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10);
        inicializar_libro( &catalogo[26], 27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9);
        inicializar_libro( &catalogo[27], 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3);
        inicializar_libro( &catalogo[28], 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15);
        inicializar_libro( &catalogo[29], 30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10);
        inicializar_libro( &catalogo[30], 31, "Paradise Lost", "John Milton", 12.00, POESIA, 7);
        inicializar_libro( &catalogo[31], 32, "Beowulf", "Anonymous", 15.00, POESIA, 5);
        inicializar_libro( &catalogo[32], 33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4);
        inicializar_libro( &catalogo[33], 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9);
        inicializar_libro( &catalogo[34], 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11);
        inicializar_libro( &catalogo[35], 36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8);
        inicializar_libro( &catalogo[36], 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5);
        inicializar_libro( &catalogo[37], 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12);
        inicializar_libro( &catalogo[38], 39, "The Republic", "Plato", 16.00, ENSAYO, 6);
        inicializar_libro( &catalogo[39], 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10);

    if (argc < 2){
        // Caso inicial.

        Mostrar_Libros(catalogo);
		printf("\n");

		int ID = 1;
		Mostrar_ID(catalogo, ID);

		int numero_ID = 1;
		int cantidad = 2;
		Aumentar_o_Disminuir_stock(catalogo, numero_ID, cantidad);

		int Num_Category = 3;
		Mostrar_Libro_Genero(catalogo, Num_Category);

		int Cantidad_libros = 0;
		catalogo = Añadir_Libro(catalogo, Cantidad_libros);

		char * buscar_autor;
		imprimir_autor(catalogo, buscar_autor);

    } else if(argc == 2){ //Si la línea de comandos recibe 2 argumentos ejecuta las siguiente funciones.
        // Mostrar o en añadir

        if (strcmp(argv[1],"mostrar") == 0){ //Si el primer argumento es mostrar, ejecuta la funcion Mostrar_Libros que imprime todo los libros que hay.
            // Llamo a la función mostrar todos los libros

        	Mostrar_Libros(catalogo);

            printf("\n");

        }

    } else if(argc == 3){ //Si la línea de comandos recibe 3 argumentos ejecuta las siguientes funciones.

        if(strcmp(argv[1], "mostrar") == 0){ //Si el primer argumento es mostrar y el segundo es un número entonces ejecuta la función Mostrar_ID,
        	int ID = atoi(argv[2]); //atoi junta el 1 y el 5, es decir, el número 15 en realidad son dos caracteres 1 y 5, atoi lo que hace es convertir esos dos caracteres en uno solo 
        	Mostrar_ID(catalogo, ID);

        }else if(strcmp(argv[1], "categoria") == 0){ //Por el contrario si el primer argumento es categoria y un número de categoria ejecuta la función Mostrar_Libro_Genero.

        	int Num_Category = atoi(argv[2]);
        	Mostrar_Libro_Genero(catalogo, Num_Category);

        }else if (strcmp(argv[1],"añadir") == 0){

        	int Cantidad_libros = atoi(argv[2]);
        	catalogo = Añadir_Libro(catalogo, Cantidad_libros);

        }else if (strcmp(argv[1],"buscar") == 0){

        	char * buscar_autor = argv[2];
        	imprimir_autor(catalogo, buscar_autor);
        }

    } else if (argc == 4){ //Si la línea de comandos recibe 4 argumentos entonces ejecuta las siguiente funciones.
        
        if(strcmp(argv[1], "stock") == 0){ //Aqui comprobamos que el primer argumento se corresponda con la palabra stock, si es asi, se ejecuta el programa.
			
			int numero_ID = atoi(argv[2]); //Comprobamos que el segundo argumento se un número, atoi sirve para que por ejemplo si el usuario quiere aumentar el stock de un libro a 15, el 15 lo cuente como un solo caracter, porque sino lo cuenta como dos (1 y 5).

			int cantidad = atoi(argv[3]); //Pasa lo mismo que arriba por si el usuario quiere añdir 20 libros más de stock

        	Aumentar_o_Disminuir_stock(catalogo, numero_ID, cantidad);
        }
    }

	 //Si devuelve 1 o cualquier otro número distinto a cero, indicara que ha surgido un error.

	free(catalogo);

	return 0;
}
