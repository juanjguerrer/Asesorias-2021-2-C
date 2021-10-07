#include <stdio.h>

int main(void){
	int numero1, numero2;
	printf("Ingresa dos enteros: \n");
	scanf("%d%d", &numero1,&numero2);
	
	if (numero1 == numero2){
		printf("Ambos son iguales %d\n", numero1);
	}
	else {
		if(numero1 == 0){
			if(numero2==1){
				printf("Los dos numeros son 0 \n");
			}
			else{
				printf("Un numero es 0 \n");
			}
		}
		else {
			printf("%d es diferente de %d\n", numero1, numero2);
		}
	}
	if (numero1 < numero2){
		printf("%d es menor que %d\n", numero1, numero2);
	}
	if (numero1 > numero2){
		printf("%d es mayor que %d\n", numero1, numero2);
	}
	if (numero1 <= numero2){
		printf("%d es menor o igual que %d\n", numero1, numero2);
	}
	if (numero1 >= numero2){
		printf("%d es mayor o igual que %d", numero1, numero2);
	}
	getch();
}
