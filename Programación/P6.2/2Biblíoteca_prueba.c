#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
												/*AUTOR: Jeremy Narváez Lobato*/

//Se definen las constantes que se utilizaran

#define MAX_TITULO 80 //Definimos que el título del libro tenga como máximo 80 caracteres.
#define MAX_AUTOR 60 //Definimos que el nombre del autor tenga como máximo 60 caracteres.
#define SIZE_CATALOG 40 //Definimos que el catalogo contenga como máximo 40 cadenas de caracteres.

//Aqui se define una estructura numerada, esta estructura empieza por cero y termina en 4, 0 se relaciona con la categoría FICTION, y asi sucesivamente con las demás.
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

//Función que nos ahorra tener que estar escribiendo todo el rato el printf que hay dentro.
void printBOOK(LIBRO * Libro){ // Para no tener que estar todo el rato escribiendo un printf con los datos de libro, se crea una variable que ya tenga este printf hecho, y asi solo lo llamamos donde lo necesitemos. 
	
	printf("ID %d título %s autor o autores %s precio %.2f género %d stock %d \n", Libro -> ID_LIBRO, Libro -> Titulo, Libro -> Autor, Libro -> Precio, Libro -> Genero, Libro -> Stock); //Este printf muestra por pantalla el contenido de BOOK, es decir, muestra el contenido que esta en la dirección de memoría de BOOK, si usaramos el punto en vez de la flecha, prodiamos modificar el valor que esta en la dirección de memoria de BOOK 
}

inizializarLibro(Catalogo+[i], ID, Titulo, Autor, Precio, Stock, Genero);

//Variable que muestra todos los libros con sus respectivos datos.
void Mostrar_Libros(LIBRO * Libros){ //Es un puntero de BOOK a Books, poque queremos mostrar o modificar los datos que Books contiene.

	for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.
	printBOOK(&Libros[i]); //Este printBOOK, es la variable creada anteriormente, el cual nos ahorra tener que estar escribiendo printf todo el rato, el &Books[i] nos indica que imprima todo lo que haya dentro de la dirección de memoria de Books el & accede a la dirección de memoría de Books.
	}

}

//Función que muestra el libro que desea ver el usuario
void Mostrar_ID(LIBRO * Libros){
int ID; //Variable que guarda el ID que el usuario indique

	printf("Enter the ID of the book you want to see its data: ");
	scanf("%d", &ID);

	for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.
		
		if(Libros[i].ID_LIBRO == ID){ //En este fragmento de código se compara el valor de ID_BOOK, que representa el identificador único del libro, con el identificador proporcionado por el usuario. Si ambos valores coinciden, el programa procederá a imprimir en pantalla la información correspondiente al libro.

			printBOOK(&Libros[i]); //Imprime todos los datos de Books, siempre que se cumpla lo indicado en el bucle.
			printf("\n");
			break;
		}
		else if(ID < 1 || ID > 40){ //Aquí verificamos si el identificador proporcionado por el usuario es menor que 1 o mayor que 40, valores que representan los límites válidos dentro de la variable books. En caso de que el ID dado por el usuario esté fuera de este rango, se genera un mensaje de error indicando que dicho identificador no existe.

			printf("The ID %d does not exist \n", ID);
			printf("\n");
			break;
		}
	}
}

//Función que aumenta o disminuye el stock de un libro dado por el usuario.
void Aumentar_o_Disminuir_stock(LIBRO * Libros){
	int numero; //Creamos una variable que guarde el número que indique el usuario.
	int numero_ID; //Creamos una variable para guardar El ID que el usuario indique y luego se usara para comprobar que se corresponda con un ID dentro de Books.
	int cantidad; //Creamos una variable para guardar la Cantidad que el usuario quiere, para aumentar o disminuir el stock. 

		printf("Do you want to increase or decrease the stock of a book? select an option (0 no | 1 yes): ");
		scanf("%d", &numero);
			
		if(numero == 0){ //En esta parte del código comprobamos que el número dado por el usario se 0, si el número es 0, imprimira por pantalla el printf.
			printf("Without increasing or decreasing stock, leaving\n");
			printf("\n");

		}else if(numero == 1){ //Si por el contrario, el número es 1, procedera a relizar el bucle for.
			printf("Enter the id of the book to increase or decrease the stock: ");
			scanf("%d", &numero_ID);

		}for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.

			if(numero_ID == Libros[i].ID_LIBRO){ //En este bucle for, comprobamos que el número_ID que indica el usuario exista dentro de Books, si existe, se procedera a realizar lo que haya dentro de este.
				printf("How much do you want to increase or decrease the stock of the Book with the ID %d?: ", numero_ID);
				scanf("%d", &cantidad); 

				printf("The book with the ID %d has a stock of %d \n", numero_ID, Libros[i].Stock); //En este printf mostramos por pantalla el stock que contiene el ID del libro.
				
				Libros[i].Stock += cantidad; //En esta parte modificamos el valor dentro de la dirección de memoría de Books (Con el punto), que en este caso se corresponde a Available_quantity para sumar este con el número indicado por el usuario, se usa el punto para modificar el valor y no la -> porque es la dirección de memoria.

				printf("The book with the ID %d now has a stock of %d\n", numero_ID, Libros[i].Stock); //Mostramos el stock despues de realizar el aumento o disminución del stock indicado por el usuario.
				
				break;
			}
		}
}

//Variable que muestra los libros de una categoría dada por el usuario.
void Mostrar_Libro_Genero(LIBRO * Libros){ //Esta variable se podría hacer con un swicht, pero decidi hacerlo con un bucle for, porque es más rapido de hacer.
	int Num_Category; //Variable que guarda el número que indique el usuario, para mostrar todos los libros de la categoría seleccionada.

		printf("Enter the category number to see the books that belong to that category (0 = FICTION, 1 = NON_FICTION, 2 = POETRY, 3 = THEATER, 4 = ESSAY): ");
		scanf("%d", &Num_Category);

		printf("The books in the selected category are: \n");

		for (int i = 0; i < SIZE_CATALOG; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.

			if(Num_Category == Libros[i].Genero){ //Comprobamos que el Num_Category coincida con algún dato en Books[i].Genres, si coinciden, imprimira por pantalla los libros que pertenezcan a la categoría indicada por el usuario.
			
				printBOOK(&Libros[i]); //Imprime todos los datos de Books, siempre que se cumpla lo indicado en el bucle.
			
			}else if(Num_Category < 0 | Num_Category > 4){ //Sí el número de la categoría es menor que 0 o mayor que 4, mostrara por pantalla el printf con el error.

				printf("Error the category %d doesn't exist \n", Num_Category);
				printf(" \n");
				break;
			}
	}
}

void Añadir_Libro(LIBRO * direccion, int añadir_ID, char * añadir_Titullo, char * añadir_Autor, float añadir_Precio, int añadir_Genero, int añadir_Stock){

	int ID_LIBRO;
	char Titulo[MAX_TITULO];
	char Autor[MAX_AUTOR];
	float Precio;
	CATEGORY Genero;
	int Stock;

	printf("Introduzca el ID(Mayor a 40): ");
	scanf("%d", &ID_LIBRO);

	printf("Introduzca el título del libro: ");
	scanf("%s", Titulo);

	printf("Introduce el nombre del Autor: ");
	scanf("%s", Autor);

	printf("Introduzca el precio del libro: ");
	scanf("%f", &Precio);

	/*printf("Introduzca el género del libro(0 = FICTION 1 = NO_FICCION, 2 = POESIA, 3 = TEATRO, 4 = ENSAYO): ");
	scanf("%d", Genero);*/

	printf("Introduzca el stock del libro: ");
	scanf("%d", &Stock);
}

//argc: número de argumentos recibidos 
//argv: array de cadenas de texto
int main(int argc, char ** argv){


LIBRO * Libros = (LIBRO *) malloc (sizeof(LIBRO) * SIZE_CATALOG);

		Añadir_Libro(Libros, 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10);
		Añadir_Libro(Libros, 2, "1984", "George Orwell", 12.49, FICCION, 5);
		Añadir_Libro(Libros, 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8);
		Añadir_Libro(Libros, 4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12);
		Añadir_Libro(Libros, 5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7);
		Añadir_Libro(Libros, 6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9);
		Añadir_Libro(Libros, 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6);
		Añadir_Libro(Libros, 8, "The Odyssey", "Homer", 17.49, FICCION, 4);
		Añadir_Libro(Libros, 9, "Ulysses", "James Joyce", 25.00, FICCION, 2);
		Añadir_Libro(Libros, 10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3);
		Añadir_Libro(Libros, 11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11);
		Añadir_Libro(Libros, 12, "The Iliad", "Homer", 18.50, FICCION, 7);
		Añadir_Libro(Libros, 13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15);
		Añadir_Libro(Libros, 14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20);
		Añadir_Libro(Libros, 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13);
		Añadir_Libro(Libros, 16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6);
		Añadir_Libro(Libros, 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5);
		Añadir_Libro(Libros, 18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8);
		Añadir_Libro(Libros, 19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4);
		Añadir_Libro(Libros, 20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14);
		Añadir_Libro(Libros, 21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6);
		Añadir_Libro(Libros, 22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8);
		Añadir_Libro(Libros, 23, "Othello", "William Shakespeare", 10.99, TEATRO, 7);
		Añadir_Libro(Libros, 24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5);
		Añadir_Libro(Libros, 25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4);
		Añadir_Libro(Libros, 26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10);
		Añadir_Libro(Libros, 27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9);
		Añadir_Libro(Libros, 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3);
		Añadir_Libro(Libros, 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15);
		Añadir_Libro(Libros, 30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10);
		Añadir_Libro(Libros, 31, "Paradise Lost", "John Milton", 12.00, POESIA, 7);
		Añadir_Libro(Libros, 32, "Beowulf", "Anonymous", 15.00, POESIA, 5);
		Añadir_Libro(Libros, 33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4);
		Añadir_Libro(Libros, 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9);
		Añadir_Libro(Libros, 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11);
		Añadir_Libro(Libros, 36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8);
		Añadir_Libro(Libros, 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5);
		Añadir_Libro(Libros, 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12);
		Añadir_Libro(Libros, 39, "The Republic", "Plato", 16.00, ENSAYO, 6);
		Añadir_Libro(Libros, 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10);

	printf("Lista de arguemtos (hay %d argumentos):\n",argc);
    for(int i = 0; i<argc; i++){
    	printf("\t Argumento %d: %s\n",i,argv[i]);
    }

    if (argc == 1){
        // Caso inicial.

        Mostrar_Libros(Libros);
		printf("\n");

		Mostrar_ID(Libros);

		Aumentar_o_Disminuir_stock(Libros);

		Mostrar_Libro_Genero(Libros);

		Añadir_Libro(Libros);

    } else if(argc == 2){
        // Mostrar o en añadir

        if (strcmp(argv[1],"mostrar") == 0){
            // Llamo a la función mostrar todos los libros

        	Mostrar_Libros(Libros); //Llamo a la función Mostrar_Libros
        	printBOOK(Libros); //Imprime el contenido de Libros

            printf("\n");

        }else if (strcmp(argv[1],"añadir") == 0){

        	Añadir_Libro(Libros);

            printf("Llamo a la función añadir\n");

        }
    } else if(argc == 3){
        // Distinguir mostrar

        if(strcmp(argv[1], "mostrar") == 0){
        	
        	Mostrar_ID(Libros);

        }else if(strcmp(argv[1], "categoria") == 0){

        	Mostrar_Libro_Genero(Libros);
        }

    } else if (argc == 4){

        if(strcmp(argv[1], "stock") == 0){
        	
        	Aumentar_o_Disminuir_stock(Libros);

        }
    }

	/*int i;
	
		if (strcmp (argv[i], "Show") == i ){
			Mostrar_Libros(Libros);
			printf("\n");
		}
	*/
	/*
		//LLamado a la función mostrar libros, ya que se encuentra fuera del main y para que esta funcione.
		Mostrar_Libros(Libros);
		printf("\n");
		
		//LLamado a la función mostra libro por la id que indique el usuario.
		Mostrar_ID(Libros);

		//LLamado a la función incrementar o disminuir el stock de un libro que indique el usuario
		Aumentar_o_Disminuir_stock(Libros);

		//LLamado a la función mostrar libros por la categoría indicada por el usuario.
		Mostrar_Libro_Genero(Libros);
*/
	return 0; //Si devuelve 1 o cualquier otro número distinto a cero, indicara que ha surgido un error.
}
