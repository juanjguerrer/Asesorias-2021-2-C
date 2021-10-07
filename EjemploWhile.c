#include <stdio.h>
int main(void){
	int sumando, total, ingreso=0;
	printf("Ingresa un valor a sumar o 0 para finalizar \n");
	scanf("%d", &sumando);
	while(sumando != 0){
		ingreso = 1;
		total += sumando;
		printf("Ingresa el numero: ");
		scanf("%d", &sumando);
	}
	if(ingreso == 1){
		printf("El resultado es: %d", total);
	} else{
		printf("No se ingreso ningun valor");
	}
	getch();
	}
