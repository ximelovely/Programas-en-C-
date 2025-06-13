//27. NÚMERO RANDOM

#include<stdio.h>
#include<conio2.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h> //Imprimir por segundos (sleep)

int main(){
	int n, col, ren, fondo, texto;
	
	srand(time(NULL));
	
	for(; ; ){
		
		fondo=rand()%16;
		texto=rand()%16;
		
		col=rand()%80+1;
		ren=rand()%24+1;
		
		textcolor(texto);
		textbackground(fondo);
		
		gotoxy(col, ren);
		
		n=rand()%100;
		
		printf("%d", n);
		Sleep(100);
		
		if(kbhit())
		break;
		
	}
	
	getche();
}
