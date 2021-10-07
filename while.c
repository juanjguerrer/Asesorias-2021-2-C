#include <stdio.h>
int main(void){
	int multiplicacion = 1;
	int i = 1;
	//2,3,4,5
	//6, 24
	while(i!=5){
		printf("%d\n",i);
		multiplicacion *= i;
		i++;
	}
	printf("%d", multiplicacion);
	getch();
	}
