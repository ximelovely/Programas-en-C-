//25. SERIE FIBONACCI

#include <iostream>
#include <stdio.h>
#include <conio2.h>

int main(){
	int x=0, y=1, z, a;
	textcolor(10); textbackground(0);
	clrscr();
	
	printf("Limite de la serie: ");
	scanf("%d", &a);
	
	printf("%d \t%d \t", x, y);
	
	for(int i=3; i<=a; i++){
		z=x+y;
		x=y;
		y=z;
		printf("%d \t",z);
	}
	
	getche();
}
