//29. DADO

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>

void marco1();
void dibdado1();
void marco2();
void dibdado2();

int dado1, dado2, suma, i, saldo, juego=10;

int main(){
	gotoxy(20, 5); printf("Cada juego vale 10 puntos");
	gotoxy(20, 6); printf("Se gana cuando la suma de ambos dados sea mayor o igual a 7 (ganas 20 puntos)");
	gotoxy(20, 7); printf("Se pierde cuando la suma de ambos dados sea menor o igual a 6 (ganas 10 puntos)");
	gotoxy(20, 3); printf("Saldo inicial: ");
	scanf("%d", &saldo);
	
	
	srand(time(NULL));
	
	do{
		system("cls");
		marco1();
		marco2();
		
		dado1= rand()%6 + 1;
		dibdado1();
		dado2= rand()&6 + 1;
		dibdado2();
		suma=dado1+dado2;
		if(suma>=7 && suma<=12){
			gotoxy(52, 3);printf("G A N A S T E :)");
			saldo=saldo+juego*2;
		}
		else{
			gotoxy(51,3);printf("P E R D I S T E :(");
			saldo=saldo-juego;
		}
		gotoxy(52, 13); printf("Saldo actual: %3d", saldo);
		getche();
	} while(saldo>=10);
	if(saldo<10){
		printf("Saldo insuficiente");
	}
}

void dibdado1(){
	switch(dado1){	
		case 1:
			gotoxy(51,8);printf("O");
			break;
		
		case 2:
			gotoxy(49,7);printf("O");
			gotoxy(53,9);printf("O");
			break;
			
		case 3:
			gotoxy(49,7);printf("O");
			gotoxy(51,8);printf("O");
			gotoxy(53,9);printf("O");
			break;
				
		case 4:
			gotoxy(49,7);printf("O");
			gotoxy(53,7);printf("O");
			gotoxy(49,9);printf("O");
			gotoxy(53,9);printf("O");
			break;
					
		case 5:
			gotoxy(49,7);printf("O");
			gotoxy(49,9);printf("O");
			gotoxy(51,8);printf("O");
			gotoxy(53,7);printf("O");
			gotoxy(53,9);printf("O");
			break;
						
		case 6:
			gotoxy(49,7);printf("O");
			gotoxy(49,8);printf("O");
			gotoxy(49,9);printf("O");
			gotoxy(53,7);printf("O");
			gotoxy(53,8);printf("O");
			gotoxy(53,9);printf("O");
			break;
	}
}

void dibdado2(){
	switch(dado2){	
		case 1:
			gotoxy(67,8);printf("O");
			break;
		
		case 2:
			gotoxy(65,7);printf("O");
			gotoxy(69,9);printf("O");
			break;
			
		case 3:
			gotoxy(65,7);printf("O");
			gotoxy(67,8);printf("O");
			gotoxy(69,9);printf("O");
			break;
				
		case 4:
			gotoxy(65,7);printf("O");
			gotoxy(69,7);printf("O");
			gotoxy(65,9);printf("O");
			gotoxy(69,9);printf("O");
			break;
					
		case 5:
			gotoxy(65,7);printf("O");
			gotoxy(65,9);printf("O");
			gotoxy(67,8);printf("O");
			gotoxy(69,7);printf("O");
			gotoxy(69,9);printf("O");
			break;
						
		case 6:
			gotoxy(65,7);printf("O");
			gotoxy(65,8);printf("O");
			gotoxy(65,9);printf("O");
			gotoxy(69,7);printf("O");
			gotoxy(69,8);printf("O");
			gotoxy(69,9);printf("O");
			break;
	}
}

void marco1(){
	int i;
	//Horizontal
	for(i=46; i<=56; i++){
		gotoxy(i, 5);
		printf("%c", 178);
		gotoxy(i, 11);
		printf("%c", 178);
	}	
	
	//Vertical
	for(i=5; i<=11; i++){
		gotoxy(46, i);
		printf("%c", 178);
		gotoxy(56, i);
		printf("%c", 178);
	}
}

void marco2(){
	int i;
	//Horizontal
	for(i=62; i<=72; i++){
		gotoxy(i, 5);
		printf("%c", 178);
		gotoxy(i, 11);
		printf("%c", 178);
	}	
	
	//Vertical
	for(i=5; i<=11; i++){
		gotoxy(62, i);
		printf("%c", 178);
		gotoxy(72, i);
		printf("%c", 178);
	}
}
