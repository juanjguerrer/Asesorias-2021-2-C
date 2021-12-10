#include<stdio.h>
#include<string.h>
typedef struct Libros{
	char name[20];
	char autor[30];
	int fila;
	int prestado;
} Libro ;
int buscar(char *str1, char *str2); 
int getID();
void writeDB(int max, int id, Libro libros[]);

void main(){
	int id = getID();
	int max;
	printf("BIBLIOTECA");
	printf("\nIngresa el numero de elementos a agregar:\n");
	scanf("%d", &max);
	
	Libro libros[max];
	int i;
	writeDB(max, id, libros);

	}
int getID(){
	FILE* archivo;
	char linea[100];
	char ID[8];
	char IDFinal[4];
	archivo = fopen("structs.txt", "r");
	if(archivo != NULL){
        while (fgets(linea, sizeof(linea), archivo) != NULL) {
			if(buscar(linea, "ID:")){
				strcpy(ID, linea);
				};
    }}else{
    	return 1;
	}
	fclose(archivo);
	strncpy(IDFinal, &ID[4], 4);
	int IDNum;
	sscanf(IDFinal, "%d", &IDNum);
	return ++IDNum;
}
void writeDB(int max, int id, Libro libros[]){
	char temp;
	char texto[30];
	int option;
	int i;
	for(i=0; i<max; i++){	
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
		fprintf(archivo, "ID: %d \nLibro: %s\nAutor:%s. Fila: %d. Prestado:%d\n", id+i,libros[i].name, libros[i].autor, libros[i].fila, libros[i].prestado);
		printf("\n");
	}
}
int buscar(char *str1, char *str2){
        int i= 0;
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        char c = str2[0];
        while(i < len1){  
                if(str1[i] == c){
                if(strncmp(&str1[i], str2, len2) == 0){
                        return 1;
                }}
                i++;
        }
        return 0;
}

