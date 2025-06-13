#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>
#include<math.h>

int i, op, ren, col;
char titulo[50];

void marco();
void centrar();
void carita();
void juego();

int suma=0, num, opc, wan;

void marcar();
void car1();
void car2();
void car3();
void car4();
void car5();
void car6();
void car7();
void car8();
void car9();
void car10();

int main(){
	carita();
	strcpy(titulo, "B I E N V E N I D A");
	ren=15;
	centrar();
	strcpy(titulo, "^3^");
	ren=16;
	centrar();
	Sleep(1000);
	system("cls");
	marco();
	textcolor(WHITE);
	juego();
}

void centrar(){
	col=(120-strlen(titulo))/2;
	gotoxy(col, ren);
	puts(titulo);
}

void marco(){
	textcolor(11);
	//Horizonal
	for(i=10; i<=110; i++){
		gotoxy(i, 4);
		printf("%c", 178);
		gotoxy(i, 29);
		printf("%c", 178);
	}
	//Vertical
	for(i=4; i<=29; i++){
		gotoxy(10, i); printf("%c", 178);
		gotoxy(110, i); printf("%c", 178);
	}
	textcolor(WHITE);
}

void carita(){
	textcolor(11);
	//Horizonal
	for(i=10; i<=110; i++){
		gotoxy(i, 2);
		printf("%c", 178);
		gotoxy(i, 29);
		printf("%c", 178);
	}
	//Vertical
	for(i=2; i<=29; i++){
		gotoxy(10, i); printf("%c", 178);
		gotoxy(110, i); printf("%c", 178);
	}
	textcolor(WHITE);
}

void juego(){
	strcpy(titulo, "JUEGO DEL 21");
	ren=2;
	centrar();
	
	srand(time(NULL));
	do{
		system("cls");
		strcpy(titulo, "JUEGO DEL 21");
		ren=2;
		centrar();
		marco();
		num=rand()%10+1;
		
		marcar();
		
		switch(num){
			case 1:
				car1();
				break;
			
			case 2:
				car2();
				break;
				
			case 3:
				car3();
				break;
				
			case 4:
				car4();
				break;
				
			case 5:
				car5();
				break;
				
			case 6:
				car6();
				break;
				
			case 7:
				car7();
				break;
				
			case 8:
				car8();
				break;
				
			case 9:
				car9();
				break;
				
			case 10:
				car10();
				break;
		}
		
		if(num==1){
			gotoxy(20, 10); printf("Elige 1 o 10: ");
			scanf("%d", &wan);
			if(wan==10){
				num=10;
			}else{
				num=1;
			}
		}
		suma+=num;
		
		gotoxy(20, 6); printf("Su carta: %d", num);
		gotoxy(20, 8); printf("Suma: %d", suma);
		if(suma==21){
			gotoxy(20, 6); printf("Has alcanzado 21, ganaste");
			suma=0;
		}else if(suma>21){
			gotoxy(20, 10); printf("Te pasaste de 21, perdiste");
			suma=0;
		}
		
		gotoxy(60, 6); printf("Deseas seguir jugando?: ");
		gotoxy(60, 7); printf("1.- Si");
		gotoxy(60, 8); printf("2.- No");
		gotoxy(85, 6); scanf("%d", &opc);
	}while(opc==1);
	
	system("cls");
	carita();
	strcpy(titulo, "Juego terminado");
	ren=15;
	centrar();
	strcpy(titulo, "=.=");
	ren=16;
	centrar();
	
	getche();
}

void car1(){
	gotoxy(30, 19); printf("O");
}

void car2(){
	gotoxy(25, 19); printf("O");
	gotoxy(35, 19); printf("O");
}

void car3(){
	gotoxy(25, 15); printf("O");
	gotoxy(30, 19); printf("O");
	gotoxy(35, 23); printf("O");
}

void car4(){
	gotoxy(25, 15); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 23); printf("O");
}

void car5(){
	gotoxy(25, 15); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 23); printf("O");
	gotoxy(30, 19); printf("O");
}

void car6(){
	gotoxy(25, 15); printf("O");
	gotoxy(25, 19); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(35, 19); printf("O");
	gotoxy(35, 23); printf("O");
}

void car7(){
	gotoxy(25, 15); printf("O");
	gotoxy(25, 19); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(35, 19); printf("O");
	gotoxy(35, 23); printf("O");
	gotoxy(30, 19); printf("O");
}

void car8(){
	gotoxy(25, 15); printf("O");
	gotoxy(25, 17); printf("O");
	gotoxy(25, 21); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(35, 17); printf("O");
	gotoxy(35, 21); printf("O");
	gotoxy(35, 23); printf("O");
}

void car9(){
	gotoxy(25, 15); printf("O");
	gotoxy(25, 17); printf("O");
	gotoxy(25, 21); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(35, 17); printf("O");
	gotoxy(35, 21); printf("O");
	gotoxy(35, 23); printf("O");
	gotoxy(30, 19); printf("O");
}

void car10(){
	gotoxy(25, 15); printf("O");
	gotoxy(25, 17); printf("O");
	gotoxy(25, 19); printf("O");
	gotoxy(25, 21); printf("O");
	gotoxy(25, 23); printf("O");
	gotoxy(35, 15); printf("O");
	gotoxy(35, 17); printf("O");
	gotoxy(35, 19); printf("O");
	gotoxy(35, 21); printf("O");
	gotoxy(35, 23); printf("O");
}

void marcar(){
	textcolor(11);
	//Horizonal
	for(i=20; i<=40; i++){
		gotoxy(i, 12);
		printf("%c", 178);
		gotoxy(i, 26);
		printf("%c", 178);
	}
	//Vertical
	for(i=12; i<=26; i++){
		gotoxy(20, i); printf("%c", 178);
		gotoxy(40, i); printf("%c", 178);
	}
	textcolor(WHITE);
}
