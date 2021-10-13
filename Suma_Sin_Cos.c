#include <stdio.h>
#include <math.h>
float sumaSenos(float a){
	float answ = sin(a)*sin(a) + cos(a) * cos(a);
	return answ;
}

void operaciones(double a, double b){
	printf("Suma: %.2f\n", a+b);
	printf("Resta: %.2f\n", a-b);
	printf("Division %.2f\n", a/b);
}
double area(double r){
	return (M_PI*r*r);
}
double suma(double a, double b){
	double answ = a+b; 
	return answ;
}
double resta(double a, double b){
	return a-b;
}
double division(double a, double b){
	return a/b;
}
void prueba(void){
	printf("Hola...\n");
}
int main(void){
	double num1D, num2D, resultado;
	printf("Ingresa el primer numero: ");
	scanf("%lf", &num1D);
	printf("Ingresa el segundo numero: ");
	scanf("%lf", &num2D);
	
	prueba();
	operaciones(num1D, num2D);
	resultado = suma(num1D,num2D);
	printf("Suma: %.2f\n", resultado);
	resultado = resta(num1D,num2D);
	printf("Resta: %.2f\n", resultado);
	resultado = division(num1D, num2D);
	printf("Division: %.2f\n", resultado);
	
	printf("Ingresa el angulo: ");
	scanf("%lf", &num1D);
	resultado = sumaSenos((float)num1D);
	printf("Suma de coseno^2 y seno^2: %f\n", resultado);
	
	printf("Ingresa el radio: ");
	scanf("%lf", &num1D);
	resultado = area(num1D);
	printf("Area del circulo: %.2f", resultado);
	getch();
}
