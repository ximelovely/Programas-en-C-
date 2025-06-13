//31. OPCIONES

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>
#include<math.h>

void marco();
void menu();
void centrar();

void opc1();
void opc2();
void opc3();
void opc4();
void opc5();
void opc6();
void opc7();
void opc8();
void opc9();
void opc10();
void opc11();
void opc12();
void opc13();
void opc14();
void carita();

int i, op, ren, col, opc;
char titulo[50];

int main(){
	textcolor(14);
	textbackground(0);
	strcpy(titulo, "P R O G R A M A C I O N  J E B E W O N");
	marco();
	menu();
}

void marco(){
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
}

void centrar(){
	ren=3;
	col=(120-strlen(titulo))/2;
	gotoxy(col, 2);
	puts(titulo);
}

void menu(){
	system("cls");
	marco();
	strcpy(titulo, "P R O G R A M A C I O N  J E B E W O N");
	centrar();
	gotoxy(20, 7); printf("1.- Codigos ASCII");
	gotoxy(20, 8); printf("2.- Divisores de #");
	gotoxy(20, 9); printf("3.- # Perfecto");
	gotoxy(20, 10); printf("4.- # Primo");
	gotoxy(20, 11); printf("5.- Factorial");
	gotoxy(20, 12); printf("6.- Valor absoluto");
	gotoxy(20, 13); printf("7.- Potencia");
	gotoxy(20, 14); printf("8.- Suma de dos numeros");
	gotoxy(20, 15); printf("9.- Seno, coseno y tangente de un angulo");
	gotoxy(20, 16); printf("10.- Imprimir n cantidad de numeros");
	gotoxy(20, 17); printf("11.- Serie Fibonacci");
	gotoxy(20, 18); printf("12.- Serie Ollam");
	gotoxy(20, 19); printf("13.- Serie de numeros");
	gotoxy(20, 20); printf("14.- Salir del programa");
	
	for(i=10; i<=110; i++){
		gotoxy(i, 23);
		printf("%c", 178);
	}
	
	gotoxy(20, 26); printf("Que opcion desea?: \t");
	scanf("%d", &opc);
	
	system("cls");
	marco();
	
	switch(opc){
		case 1:
			opc1();
			
			getche();
			menu();
			break;
			
		case 2:
			opc2();
			
			getche();
			menu();
			break;
			
		case 3:
			opc3();
			
			getche();
			menu();
			break;
		
		case 4:
			opc4();
			
			getche();
			menu();
			break;
			
		case 5:
			opc5();
			
			getche();
			menu();
			break;
			
		case 6:
			opc6();
			
			getche();
			menu();
			break;
			
		case 7:
			opc7();
			
			getche();
			menu();
			break;
			
		case 8:
			opc8();
			
			getche();
			menu();
			break;
			
		case 9:
			opc9();
			
			getche();
			menu();
			break;
			
		case 10:
			opc10();
			
			getche();
			menu();
			break;
			
		case 11:
			opc11();
			
			getche();
			menu();
			break;
			
		case 12:
			opc12();
			
			getche();
			menu();
			break;
		
		case 13:
			opc13();
			
			getche();
			menu();
			break;
			
		case 14:
			carita();
			strcpy(titulo, "Adios<3");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 15);
			puts(titulo);
			strcpy(titulo, "(>'-'<)");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 16);
			puts(titulo);
			getche();
			break;
			
		default:
			carita();
			strcpy(titulo, "Adios<3");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 15);
			puts(titulo);
			strcpy(titulo, "(>'-'<)");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 16);
			puts(titulo);
			getche();
			break;	
	}
}

void marcoopc1(){
	//Horizonal
	for(i=11; i<=111; i++){
		gotoxy(i, 4);
		printf("%c", 178);
		gotoxy(i, 30);
		printf("%c", 178);
	}
	//Vertical
	for(i=4; i<=30; i++){
		gotoxy(11, i); printf("%c", 178);
		gotoxy(111, i); printf("%c", 178);
	}
}

void opc1(){
	system("cls");
	strcpy(titulo, "CODIGOS ASCII");
	centrar();
	marcoopc1();
	ren=4; col=13;
	for(i=1; i<=255; i++){
		ren++;
		gotoxy(col,ren); printf("%d = %c",i,i);
		if(i%25==0){
			col = col + 9; ren= 4;
		}
	}
}

void opc2(){
	int num;
	strcpy(titulo, "DIVISORES DE #");
	centrar();
	
	gotoxy(20, 6);
	printf("Numero: \t");
	scanf("%d", &num);
	printf("\n                   ");
	for(i=1; i<=num; i++){
		num/i;
		if(num%i==0){
			printf("%d ", i);
		}
	}
}

void opc3(){
	strcpy(titulo, "# PERFECTO");
	centrar();
	
	int div, sum;
	
	gotoxy(20, 6);
	printf("Numero: \t");
	scanf("%d", &div);
	
	for(i=1; i<div; i++){
		if(div%i==0){
			sum+=i;
		}
	}
	
	if(sum==div){
		gotoxy(20, 8);
		printf("El numero es PERFECTO");
	}else{
		gotoxy(20, 8);
		printf("El numero es IMPERFECTO");
	}
}

void opc4(){
	strcpy(titulo, "# PRIMO");
	centrar();
	
	int div;
	
	gotoxy(20, 6);
	printf("Numero: \t");
	scanf("%d",&div);
	
	if(div<=1){
		gotoxy(20, 8);
		printf("NO es primo");
	}else{
		int pri=1;
		for(i=2; i*i<=div; i++){
			if(div%i==0){
				pri=0;
				break;
			}
		}
		if(pri){
			gotoxy(20, 8);
			printf("SI es primo");
		}else{
			gotoxy(20, 8);
			printf("NO es primo");
		}
	}
}

void opc5(){
	strcpy(titulo, "FACTORIAL");
	centrar();
	
	int num, multi=1;
	gotoxy(20, 6);
	printf("Numero: \t");
	scanf("%d",&num);
	gotoxy(20, 8);
	for(i=1; i<=num; i++){
		multi=multi*i;
		printf("%d x ", i);
	}
	gotoxy(20, 10);
	printf("Resultado: %d",multi);
}

void opc6(){
	int a, b;
	strcpy(titulo, "VALOR ABSOLUTO");
	centrar();
	gotoxy(20, 6);
	printf("Numero: \t");
	scanf("%d", &a);
	b=fabs(a);
	gotoxy(20, 8);
	printf("El valor absoluto es %c%d%c ",179, b, 179);
}

void opc7(){
	strcpy(titulo, "POTENCIA");
	centrar();
	
	int a, b, c=0;
	gotoxy(24, 7); printf("Base: ");
	scanf("%d", &a);
	gotoxy(20, 6);
	printf("Exponente: ");
	scanf("%d", &b);
	c=pow(a,b);
	gotoxy(40, 6);printf("Resultado: %d", c);
}

void opc8(){
	strcpy(titulo, "SUMA DE DOS NUMEROS");
	centrar();
	int suma=0, num, lim;
	
	gotoxy(20,6);
	printf("Numeros a sumar: \t");
	scanf("%d", &lim);
	
	for(i=1; i<=lim; i++){
		system("cls");
		marco();
		strcpy(titulo, "SUMA DE DOS NUMEROS");
		centrar();
		gotoxy(20,6);
		printf("Numero: \t");
		scanf("%d", &num);
		suma=suma+num;
	}
	system("cls");
	marco();
	strcpy(titulo, "SUMA DE DOS NUMEROS");
	centrar();
	gotoxy(20,6);
	printf("Suma: %d", suma);
}

void opc9(){
	marco();
	strcpy(titulo, "SEN, COSENO Y TANGENTE DE UN ANGULO");
	centrar();
	int ang;
	double resu=0;
	
	gotoxy(20,6);
	printf("Angulo: \t");
	scanf("%d", &ang);
	
	system("cls");
	
	strcpy(titulo, "SEN, COSENO Y TANGENTE DE UN ANGULO");
	centrar();
	marco();
	resu=sin(ang);
	gotoxy(20,6);
	printf("Seno: %.5f", resu);
	resu=0;
	resu=cos(ang);
	gotoxy(20,8);
	printf("Coseno: %.5f", resu);
	resu=0;
	resu=tan(ang);
	gotoxy(20,10);
	printf("Tangente: %.5f", resu);
}

void opc10(){
	system("cls");
	strcpy(titulo, "IMPRIMIR N CANTIDAD DE NUMEROS");
	centrar();
	marco();
	int n;

	gotoxy(20,6); printf("Ingrese la cantidad de numeros positivos a imprimir: ");
	scanf("%d", &n);
	
	system("cls");
	
	centrar();
	marcoopc1();
	ren=5; col=20;
	for(i=1; i<=n; i++){
		ren++;
		gotoxy(col,ren); printf("%d",i);
		if(i%23==0){
			col = col + 5; ren= 5;
		}
	}
}

void opc11(){
	strcpy(titulo, "SERIE FIBONACCI");
	centrar();
	
	int a, z, x=0, y=1;
	gotoxy(20, 6); printf("Limite de la serie: ");
	scanf("%d", &a);
	
	printf("%d \t%d \t", x, y);
	
	system("cls");
	
	centrar();
	marco();
	
	ren=5; col=20; int u;
	for(int i=3; i<=a; i++){
		ren++;
		z=x+y;
		x=y;
		y=z;
		gotoxy(col,ren); printf("%d",z);
		if((i-2)%23==0){
			col = col + 15; ren= 5;
		}
	}
}

void opc12(){
	strcpy(titulo, "SERIE OLLAM");
	centrar();
	marcoopc1();
	int u;
	
	gotoxy(20, 6); printf("Numero de inicio: \t");
	scanf("%d", &u);
	
	system("cls");
	
	centrar();
	marco();
	
	gotoxy(20, 6); printf("%d", u);
	
	int p=1;
	
	do{
		ren=7; col=20;
		for(i=1; u!=1; i++){
			if(u%2==0){
				u=u/2;
			}else{
				u=(u*3)+1;
			}
			p++;
			gotoxy(col,ren); printf("%d",u);
			if(p%23==0){
				col = col + 10; ren= 5;
			}
			ren++;
		}	
	}while(u!=1);//condicion,!=diferente
}

void opc13(){
	int num, n, imp=0;
	
	strcpy(titulo, "SERIE DE NUMEROS");
	centrar();
	marco();
	
	gotoxy(20, 6); printf("Que serie va a imprimir?: \t");
	scanf("%d", &num);
	gotoxy(20, 8); printf("Cuantos numeros va a imprimir?: \t");
	scanf("%d", &n);
	
	system("cls");
	
	centrar();
	marco();
	
	ren=6; col=20;
	for(i=1; i<=n; i++){
		imp=num*i;
		gotoxy(col,ren); printf("%d", imp);
		imp=0;
		if(i%23==0){
			col = col + 10; ren= 5;
		}
		ren++;
	}
}

void carita(){
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
}
