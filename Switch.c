#include <stdio.h>

int main(void){
	int numero;
	printf("Ingresa una opcion:");
	scanf("%d", &numero);
	switch (numero)
	{
	    case 1:
	        printf("Numero 1");
	        break;
	    case 543:
	    	printf("Caso random");
	    	break;
	    default:
	        printf("No se");
	}
	getch();
}
