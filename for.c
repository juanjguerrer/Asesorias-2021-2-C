#include <stdio.h>
int main(void){
	int arreglo[10], i;
	for(i=9; i>-1; i--){
		arreglo[i] = i+1;
	}
	printf("%d", arreglo[9]);
	getch();
}
