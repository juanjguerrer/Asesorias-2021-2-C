#include <stdio.h>

int main(void){
	int entero = 1;
	float pi = 3.14159;
	double e = 2.7182818;
	int _a = 5;
	
	char letra = 'a';
	char texto[] = "A veces";
	printf("Entero\n");
    scanf("%d", &entero);
	printf("Pi\n");
    scanf("%f", &pi);
    
	printf("e(float)\n");
    scanf("%f", &e);
	
	printf("Letra\n");
    scanf(" %c", &letra);
	
	printf("Enter a string\n");
    scanf("%s", &texto);
    
	printf("Entero %d\n", entero);
	printf("Pi: %f\n", pi);
	printf("e %f\n", e);
	printf("Letra %c\n", letra);
	printf("Texto %s\n", texto); //string
	getch();
}
