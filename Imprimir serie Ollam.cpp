//26. SERIE OLLAM

#include<iostream>
#include<stdio.h>
#include<conio2.h>
#include<stdlib.h>


int main(){
	int n;
	
	textcolor(10); textbackground(0);
	clrscr();
	
	printf("Escribe un numero de inicio: \t");
	scanf("%d",&n);
	
	system("cls");
	
	printf("%d",n);
	
	do{
		if(n%2==0){
		n=n/2;
		}
		
		else{
		n=(n*3)+1;
		}
		
		printf("\t %d",n);
	}while(n!=1);//condicion,!=diferente
	
	getche();
}
