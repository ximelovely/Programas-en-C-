//21. IMPRIMIR SERIE DE NÚMEROS

#include<conio2.h>
#include<stdio.h>

int main(){
	int num, n, imp=0;
	
	printf("Que serie va a imprimir? ");
	scanf("%d", &num);
	printf("Cuantos numeros va a imprimir? ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		imp=num*i;
		printf("%d\t", imp);
		imp=0;
	}
}

