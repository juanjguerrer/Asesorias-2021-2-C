#include<stdio.h>
#include<string.h>
typedef struct Libros{
	char name[20];
	char autor[30];
	int fila;
	int prestado;
} Libro ;

void main(){
	char texto[30];
	char temp;
	int option;
	
	Libro libros[3];
	int i;
	for(i=0; i<3; i++){
		
		printf("Libro -> %d\n", i+1);
		printf("Ingresa el autor: \n");
		scanf("%c", &temp);
		scanf("%[^\n]", texto);
		strcpy(libros[i].autor, texto);
	
		printf("Ingresa el nombre del libro: \n");
		scanf("%c", &temp);
		scanf("%[^\n]", texto);
		strcpy(libros[i].name, texto);
	
		printf("Ingresa la fila: \n");
		scanf("%d", &option);
		libros[i].fila = option;
	
		printf("Ingresa si esta prestado: \n");
		scanf("%d", &option);
		libros[i].prestado = option;
	
		FILE *archivo = fopen("structs.txt", "a");
		fprintf(archivo, "ID: %d \n.Libro: %s\nAutor:%s. Fila: %d. Prestado:%d\n", i,libros[i].autor, libros[i].name, libros[i].fila, libros[i].prestado);
		printf("\n");
	}
	}
