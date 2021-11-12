#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>

char* concat(char *s1, char *s2);

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
char* nombre2 = "lol3.txt";
FILE *archivo;
char* borrar = "rm ";
char prueba;
do{
        printf("Gestor de archivos\n");
        printf("\n   1. Mostrar archivos");
        printf("\n   2. Crear archivos");
       	printf("\n   3. Leer archivos");
       	printf("\n   4. Borrar archivos");	
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
			char* comando = concat(borrar, nombre);
			system(comando);
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
