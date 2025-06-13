//20. IMPRIMIR "N" CANTIDAD DE NÚMEROS

#include <stdio.h>
#include <conio2.h>

int main(){
	int n;

	textcolor(0); textbackground(15);
	clrscr();

	printf("Ingrese la cantidad de numeros positivos a imprimir: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		printf("%d\t", i);
	}
}
