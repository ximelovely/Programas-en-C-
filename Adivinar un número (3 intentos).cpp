//28. ADIVINAR NÚMERO RANDOM

#include<stdio.h>
#include<conio2.h>
#include<stdlib.h>
#include<time.h>

void marco();

int main(){
	marco();
	
	int na, num, inte=0;
	const int maxinte=3;
	
	srand(time(NULL));
	
	na=rand()%20;
	
	gotoxy(49,3);
	printf("A D I V I N A R  N U M E R O");
	
	while(inte<3){
		gotoxy(20,7);
		printf("Intento %d: ", inte+1);
		scanf("%d", &num);
		inte++;
		
		if(num<1 and num>=20){
			system("cls");
			marco();
			gotoxy(49,3);
			printf("A D I V I N A R  N U M E R O");
			gotoxy(20,9);
			printf("El numero debe de estar entre 1 y 20");
		}else if(num<na){
			system("cls");
			marco();
			gotoxy(49,3);
			printf("A D I V I N A R  N U M E R O");
			gotoxy(20,9);
			printf("Lejos");
		}else if(num>na){
			system("cls");
			marco();
			gotoxy(49,3);
			printf("A D I V I N A R  N U M E R O");
			gotoxy(20,9);
			printf("Cerca");
		}else{
			system("cls");
			marco();
			gotoxy(49,3);
			printf("A D I V I N A R  N U M E R O");
			gotoxy(20,9);
			printf("Numero correcto al %d° intento");
			break;
		}
		if(inte==maxinte){
			system("cls");
			marco();
			gotoxy(49,3);
			printf("A D I V I N A R  N U M E R O");
			gotoxy(20,7);
			printf("Limite de intentos excedido, el numero era: %d", na);
			getche();
		}
	}
}

void marco(){
	//Horizonal
	for(int i=10; i<=110; i++){
		gotoxy(i, 5);
		printf("%c", 178);
		gotoxy(i, 11);
		printf("%c", 178);
	}
	//Vertical
	for(int i=5; i<=11; i++){
		gotoxy(10, i); printf("%c", 178);
		gotoxy(110, i); printf("%c", 178);
	}
}
