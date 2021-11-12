#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

int buscar(char *str1, char *str2); 

int main(){
/* 1. Leer
 * 2. Escribir
 * 3. Crear
 * 4. Eliminar
 * 5. Ver archivos
 */
setlocale(LC_ALL, "");
int opcion;
char nombre[25];
char linea[1000];
char txtbuscar[30];
char borrar[30] = "rm ";
char* nombre2 = "lol3.txt";
FILE *archivo;
char prueba;
char temp;
do{
        printf("Gestor de archivos\n");
        printf("\n   1. Mostrar archivos");
        printf("\n   2. Crear archivos");
       	printf("\n   3. Leer archivos");
	printf("\n   4. Borrar archivos");
	printf("\n   5. Escribir al final de un archivo");
	printf("\n   6. Buscar en un archivo");
        printf("\n   7. Salir\n\n");
        scanf("%d", &opcion);

        switch(opcion){
                case 1:
                        system("clear");
                        printf("Archivos en la carpeta actual: ");
                        system("ls");
                break;
		case 2:
			printf("\n   Introduzca el nombre del archivo junto a su extensión: ");
			scanf("%s", nombre);
			archivo = fopen(nombre, "w");
			printf("\n %s creado\n\n", nombre);
			fclose(archivo);
			break;
		case 3:
			printf( "\n   Introduzca el nombre del archivo a leer ");
			scanf("%s", nombre);
			archivo = fopen(nombre, "r");
			if(archivo == NULL){
                                printf("Archivo inexistente");
                                break;}
			while (fgets(linea, sizeof(linea), archivo) != NULL) {
                                printf("%s", linea);
                        }
			printf("\n");
                        fclose(archivo);
			break;
		case 4:
			printf( "\n   Introduzca el nombre del archivo a borrar ");
                        scanf("%s", nombre);
                      	strcat(borrar, nombre);
			system(borrar);	
		break;
		case 5:
			printf( "\n   Introduzca el nombre del archivo a escribir al final o a crear:  ");
                        scanf("%s", nombre);
                        archivo = fopen(nombre, "a");
                        if(archivo == NULL){
                                printf("Archivo inexistente");
                                break;}
			printf("Ingresa lo que se agregará: ");
			scanf("%c", &temp);
			scanf("%[^\n]", linea);
			fprintf(archivo, "%s\n", linea);
			fclose(archivo);
		break;
		case 6:
			printf( "\n   Introduzca el nombre del archivo para buscar:  ");
                        scanf("%s", nombre);
                        archivo = fopen(nombre, "r");
                        if(archivo == NULL){
                                printf("Archivo inexistente");
                                break;}
                        printf("Ingresa lo que se buscará: ");
                        scanf("%c", &temp);
                        scanf("%[^\n]", txtbuscar);
			printf("Lineas que coinciden: \n");			
			while (fgets(linea, sizeof(linea), archivo) != NULL) {
				if(buscar(linea, txtbuscar)){
				printf("%s", linea);
				};
                        }
		break;
		case 7:
		break;
                default:
                        printf("Opción invalida");
			}
}while(opcion != 7);
}
char* concat(char *s1, char *s2){
        char *result = malloc(strlen(s1) + strlen(s2) + 1);
        strcpy(result, s1);
        strcat(result, s2);
        return result;
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
