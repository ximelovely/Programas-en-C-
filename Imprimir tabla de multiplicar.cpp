//22. TABLA DE MULTIPLICACIÓN

#include<stdio.h>
#include<conio2.h>
#include<stdlib.h>

int main(){
	int num, por, res;
	
	printf("De que numero es la tabla? \t");
	scanf("%d", &num);
	printf("Hasta que numero llega? \t");
	scanf("%d", &por);
	
	for(int i=1; i>por; i++){
		res=num*i;
		printf("%d%", &res);
		printf("%d", &num, " x " , "%d", &i, " = ", "%d", &res);
	}
	
	getche();
}
