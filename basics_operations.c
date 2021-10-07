#include <stdio.h>

int main(void){
	int entero1;
	int entero2;
	int resultado;
	float division, modulo;
	
	// Pedimos dos numeros
	printf("Ingresa el primer numero\n");
	scanf("%d", &entero1);
	
	printf("Ingresa el segundo numero\n");
	scanf("%d", &entero2);
	
	division = entero1/entero2;
	modulo = entero1%entero2;
	resultado = entero1 + entero2;
	printf("La suma es %d\n", resultado);
	printf("La resta es %d\n", entero1-entero2);
	printf("La multiplicacion es %d\n", entero1*entero2);
	printf("La division es %f\n", division);
	printf("El modulo es %f\n", modulo);
	getch();
}
