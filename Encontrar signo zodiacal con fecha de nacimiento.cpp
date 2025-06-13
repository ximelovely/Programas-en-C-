#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>

int main(){
	textcolor(14);
	textbackground(0);
	
	int dia=0, mes=0;
	
	gotoxy(20,3); printf("Escriba su dia de nacimiento: \t");
	scanf("%d", &dia);
	gotoxy(20,5); printf("Escriba su mes de nacimiento: \t");
	scanf("%d", &mes);
	
	switch(mes){
		case 1:
			if(dia<=19){
				gotoxy(20,7); printf("Eres capricornio!");
			}else{
				gotoxy(20,7); printf("Eres acuario!");
			}
			break;
			
		case 2:
			if(dia<=18){
				gotoxy(20,7); printf("Eres acuario!");
			}else{
				gotoxy(20,7); printf("Eres picis!");
			}
			break;
			
		case 3:
			if(dia<=20){
				gotoxy(20,7); printf("Eres picis!");
			}else{
				gotoxy(20,7); printf("Eres aries!");
			}
			break;
			
		case 4:
			if(dia<=19){
				gotoxy(20,7); printf("Eres aries!");
			}else{
				gotoxy(20,7); printf("Eres tauro!");
			}
			break;
			
		case 5:
			if(dia<=20){
				gotoxy(20,7); printf("Eres tauro!");
			}else{
				gotoxy(20,7); printf("Eres geminis!");
			}
			break;
			
		case 6:
			if(dia<=20){
				gotoxy(20,7); printf("Eres geminis!");
			}else{
				gotoxy(20,7); printf("Eres cancer!");
			}
			break;
			
		case 7:
			if(dia<=22){
				gotoxy(20,7); printf("Eres cancer!");
			}else{
				gotoxy(20,7); printf("Eres leo!");
			}
			break;
				
		case 8:
			if(dia<=22){
				gotoxy(20,7); printf("Eres leo!");
			}else{
				gotoxy(20,7); printf("Eres virgo!");
			}
			break;
			
		case 9:
			if(dia<=22){
				gotoxy(20,7); printf("Eres virgo!");
			}else{
				gotoxy(20,7); printf("Eres libra!");
			}
			break;
			
		case 10:
			if(dia<=22){
				gotoxy(20,7); printf("Eres libra!");
			}else{
				gotoxy(20,7); printf("Eres escorpio!");
			}
			break;
			
		case 11:
			if(dia<=21){
				gotoxy(20,7); printf("Eres escorpio!");
			}else{
				gotoxy(20,7); printf("Eres sagitario!");
			}
			break;
			
		case 12:
			if(dia<=21){
				gotoxy(20,7); printf("Eres sagitario!");
			}
			else{
				gotoxy(20,7); printf("Eres capricornio!");
			}
			break;
			
		getche();
	}
}
