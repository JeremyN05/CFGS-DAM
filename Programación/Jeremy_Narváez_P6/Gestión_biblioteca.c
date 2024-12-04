#include <stdio.h>
#include <stdlib.h>
#include <string.h>
	
												/*AUTOR: Jeremy Narváez Lobato*/

//Se definen las constantes que se utilizaran

#define MAX_TITULO 80 //Definimos que el título del libro tenga como máximo 80 caracteres.
#define MAX_AUTHOR 60 //Definimos que el nombre del autor tenga como máximo 60 caracteres.
#define SIZE_CATALOGY 40 //Definimos que el catalogo contenga como máximo 40 cadenas de caracteres.

//Aqui se define una estructura numerada, esta estructura empieza por cero y termina en 4, 0 se relaciona con la categoría FICTION, y asi sucesivamente con las demás.
typedef enum{
		
		FICTION, // Se corresponde con el número 0
		NON_FICTION, // Se corresponde con el número 1
		POETRY, // Se corresponde con el número 2
		THEATER,// Se corresponde con el número 3 
		ESSAY, // Se corresponde con el número 4

}CATEGORY;

//Aqui se define la estructura que va a seguir BOOK, es decir, todos los datos que se inserten en BOOK, tienen que seguir esta estructura.
typedef struct{
	int ID_BOOK;
	char Title[MAX_TITULO]; //Definimos que el título tiene como máximo número de caracteres la regla MAX_TITULO, que son 80 caracteres.
	char Author[MAX_AUTHOR]; //Definimos que el Autor tiene como máximo número de caracteres la regla MAX_AUTHOR, que son 60 caracteres.
	float Price;
	CATEGORY Genres; //CATEGORY contiene Genres.
	int Available_quantity;

}BOOK;

//Función que nos ahorra tener que estar escribiendo todo el rato el printf que hay dentro.
void printBOOK(BOOK * Book){ // Para no tener que estar todo el rato escribiendo un printf con los datos de libro, se crea una variable que ya tenga este printf hecho, y asi solo lo llamamos donde lo necesitemos. 
	
	printf("%d %s %s %.2f %d %d \n", Book -> ID_BOOK, Book -> Title, Book -> Author, Book -> Price, Book -> Genres, Book -> Available_quantity); //Este printf muestra por pantalla el contenido de BOOK, es decir, muestra el contenido que esta en la dirección de memoría de BOOK, si usaramos el punto en vez de la flecha, prodiamos modificar el valor que esta en la dirección de memoria de BOOK 
}

//Variable que muestra todos los libros con sus respectivos datos.
void Show_books(BOOK * Books){ //Es un puntero de BOOK a Books, poque queremos mostrar o modificar los datos que Books contiene.

	for (int i = 0; i < SIZE_CATALOGY; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.
	printBOOK(&Books[i]); //Este printBOOK, es la variable creada anteriormente, el cual nos ahorra tener que estar escribiendo printf todo el rato, el &Books[i] nos indica que imprima todo lo que haya dentro de la dirección de memoria de Books.
	}

}

//Función que muestra el libro que desea ver el usuario
void Get_ID(BOOK * Books){
int ID; //Variable que guarda el ID que el usuario indique

	printf("Enter the ID of the book you want to see its data: ");
	scanf("%d", &ID);

	for (int i = 0; i < SIZE_CATALOGY; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.
		
		if(Books[i].ID_BOOK == ID){ //En este fragmento de código se compara el valor de ID_BOOK, que representa el identificador único del libro, con el identificador proporcionado por el usuario. Si ambos valores coinciden, el programa procederá a imprimir en pantalla la información correspondiente al libro.

			printBOOK(&Books[i]); //Imprime todos los datos de Books, siempre que se cumpla lo indicado en el bucle.
			printf("\n");
		}
		else if(ID < 1 || ID > 40){ //Aquí verificamos si el identificador proporcionado por el usuario es menor que 1 o mayor que 40, valores que representan los límites válidos dentro de la variable books. En caso de que el ID dado por el usuario esté fuera de este rango, se genera un mensaje de error indicando que dicho identificador no existe.

			printf("The ID %d does not exist \n", ID);
			printf("\n");
			break;
		}
	}
}

//Función que aumenta o disminuye el stock de un libro dado por el usuario.
void Increase_or_decrease_stock(BOOK * Books){
	int number; //Creamos una variable que guarde el número que indique el usuario.
	int number_ID; //Creamos una variable para guardar El ID que el usuario indique y luego se usara para comprobar que se corresponda con un ID dentro de Books.
	int amount; //Creamos una variable para guardar la Cantidad que el usuario quiere, para aumentar o disminuir el stock. 

		printf("Do you want to increase or decrease the stock of a book? select an option (0 no | 1 yes): ");
		scanf("%d", &number);
			
		if(number == 0){ //En esta parte del código comprobamos que el número dado por el usario se 0, si el número es 0, imprimira por pantalla el printf.
			printf("Without increasing or decreasing stock, leaving\n");
			printf("\n");

		}else if(number == 1){ //Si por el contrario, el número es 1, procedera a relizar el bucle for.
			printf("Enter the id of the book to increase or decrease the stock: ");
			scanf("%d", &number_ID);

		}for (int i = 0; i < SIZE_CATALOGY; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.

			if(number_ID == Books[i].ID_BOOK){ //En este bucle for, comprobamos que el número_ID que indica el usuario exista dentro de Books, si existe, se procedera a realizar lo que haya dentro de este.
				printf("How much do you want to increase or decrease the stock of the Book with the ID %d?: ", number_ID);
				scanf("%d", &amount); 

				printf("The book with the ID %d has a stock of %d \n", number_ID, Books[i].Available_quantity); //En este printf mostramos por pantalla el stock que contiene el ID del libro.
				
				Books[i].Available_quantity += amount; //En esta parte modificamos el valor dentro de la dirección de memoría de Books (Con el punto), que en este caso se corresponde a Available_quantity para sumar este con el número indicado por el usuario, se usa el punto para modificar el valor y no la -> porque es la dirección de memoria.

				printf("The book with the ID %d now has a stock of %d\n", number_ID, Books[i].Available_quantity); //Mostramos el stock despues de realizar el aumento o disminución del stock indicado por el usuario.
				printf("\n");
			}
		}
}

//Variable que muestra los libros de una categoría dada por el usuario.
void Show_Books_By_Category(BOOK * Books){ //Esta variable se podría hacer con un swicht, pero decidi hacerlo con un bucle for, porque es más rapido de hacer.
	int Num_Category; //Variable que guarda el número que indique el usuario, para mostrar todos los libros de la categoría seleccionada.

		printf("Enter the category number to see the books that belong to that category (0 = FICTION, 1 = NON_FICTION, 2 = POETRY, 3 = THEATER, 4 = ESSAY): ");
		scanf("%d", &Num_Category);

		printf("The books in the selected category are: \n");

		for (int i = 0; i < SIZE_CATALOGY; i++){ //Este bucle for recorre el Array de libros hasta que el array sea menor que size_catalogy, size_catalogy esta definido que sea 40, y muestra por pantalla el contenido de Books.

			if(Num_Category == Books[i].Genres){ //Comprobamos que el Num_Category coincida con algún dato en Books[i].Genres, si coinciden, imprimira por pantalla los libros que pertenezcan a la categoría indicada por el usuario.
			
				printBOOK(&Books[i]); //Imprime todos los datos de Books, siempre que se cumpla lo indicado en el bucle.
			
			}else if(Num_Category < 0 | Num_Category > 4){ //Sí el número de la categoría es menor que 0 o mayor que 4, mostrara por pantalla el printf con el error.

				printf("Error the category %d doesn't exist \n", Num_Category);
				printf(" \n");
				break;
			}
	}
}

int main(){

	//BOOK contiene Books.
	BOOK Books[40] = { //Cadena de caracteres que contiene Books, estos son los libros que se utilizaran en los diferentes apartados de la práctica.
		{1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10},
		{2, "1984", "George Orwell", 12.49, FICTION, 5},
		{3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8},
		{4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12},
		{5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7},
		{6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9},
		{7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6},
		{8, "The Odyssey", "Homer", 17.49, FICTION, 4},
		{9, "Ulysses", "James Joyce", 25.00, FICTION, 2},
		{10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3},
		{11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11},
		{12, "The Iliad", "Homer", 18.50, FICTION, 7},
		{13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15},
		{14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20},
		{15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13},
		{16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6},
		{17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5},
		{18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8},
		{19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4},
		{20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14},
		{21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6},
		{22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8},
		{23, "Othello", "William Shakespeare", 10.99, THEATER, 7},
		{24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5},
		{25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4},
		{26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10},
		{27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9},
		{28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3},
		{29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15},
		{30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10},
		{31, "Paradise Lost", "John Milton", 12.00, POETRY, 7},
		{32, "Beowulf", "Anonymous", 15.00, POETRY, 5},
		{33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4},
		{34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9},
		{35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11},
		{36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8},
		{37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5},
		{38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12},
		{39, "The Republic", "Plato", 16.00, ESSAY, 6},
		{40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10}
		};

		//LLamado a la función mostrar libros, ya que se encuentra fuera del main y para que esta funcione.
		Show_books(Books);
		printf("\n");
		
		//LLamado a la función mostra libro por la id que indique el usuario.
		Get_ID(Books);

		//LLamado a la función incrementar o disminuir el stock de un libro que indique el usuario
		Increase_or_decrease_stock(Books);

		//LLamado a la función mostrar libros por la categoría indicada por el usuario.
		Show_Books_By_Category(Books);

	return 0; //Si devuelve 1 o cualquier otro número distinto a cero, indicara que ha surgido un error.
}