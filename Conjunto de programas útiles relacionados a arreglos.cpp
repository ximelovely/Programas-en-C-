//34. ARREGLOS

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>
#include<math.h>
#include <queue>
#include<vector>

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
void carita();

int i, op, ren, col, opc;
int n=0, num;
char titulo[50];
int a[10], b[10], c[10];

int main(){
	textcolor(14);
	menu();
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
	strcpy(titulo, "P R O G R A M A C I O N  J E B E W O N");
	marco();
	marco();
	centrar();
	gotoxy(20, 9); printf("1.- Lectura vector A");
	gotoxy(20, 10); printf("2.- Numeros aleatorios en el vector B");
	gotoxy(20, 11); printf("3.- Sumar vectores A+B");
	gotoxy(20, 12); printf("4.- Moda, media y mediana");
	gotoxy(20, 13); printf("5.- Metodo burbuja");
	gotoxy(20, 14); printf("6.- Colorear vectores");
	gotoxy(20, 15); printf("7.- Encontrar E mayor y E menor");
	gotoxy(20, 16); printf("8.- Simular FIFO");
	gotoxy(20, 17); printf("9.- Simular LIFO");
	gotoxy(20, 18); printf("10.- Unir dos vectores");
	
	for(i=10; i<=110; i++){
		gotoxy(i, 23);
		printf("%c", 178);
	}
	
	gotoxy(20, 26); printf("Que opcion desea?: \t");
	scanf("%d", &opc);
	
	system("cls");
	
	switch(opc){
		case 1:
			opc1();
			break;
			
		case 2:
			opc2();
			break;
			
		case 3:
			opc3();
			break;
		
		case 4:
			opc4();
			break;
			
		case 5:
			opc5();
			break;
			
		case 6:
			opc6();
			break;
			
		case 7:
			opc7();
			break;
			
		case 8:
			opc8();
			break;
			
		case 9:
			opc9();
			break;
			
		case 10:
			opc10();
			break;
			
		default:
			carita();
			strcpy(titulo, "Por indecisa, adios<3");
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

void opc1(){
	system("cls");
	strcpy(titulo, "LECTURA VECTOR A");
	centrar();
	marco();
	
	n=0;
	gotoxy(20, 6); printf("Indique el orden del vector: \t");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		gotoxy(20, 7+i); printf("A[%d]=", i);
		scanf("%d", &a[i]);
	}
	
	getche();
	menu();
}

void opc2(){
	strcpy(titulo, "NUMEROS ALEATORIOS EN EL VECTOR B");
	centrar();
	marco();
	
	srand(time(NULL));
	
	for(i=1; i<=n; i++){
		b[i]=rand()%100;
		gotoxy(20, 5+i); printf("B[%d]=%d", i, b[i]);
	}
	
	getche();
	menu();
}

void opc3(){
	strcpy(titulo, "SUMAR VECTORES A+B");
	centrar();
	marco();
	
	int resul;
	
	for(i=1; i<=n; i++){
		resul=a[i]+b[i];
		gotoxy(20, 5+i); printf("A[%d]+B[%d]=%d", a[i], b[i], resul);	
	}
	
	getche();
	menu();
}

void opc4(){
	strcpy(titulo, "MODA, MEDIA Y MEDIANA");
	centrar();
	marco();
	
	gotoxy(20,6); printf("VECTOR A");
	//MODA
	int max=0, moda=0;
	for(i=1; i<=n; i++){
		int cu=0;
		for(int u=1; u<=n; u++){
			if(a[i]==a[u]){
				cu++;
			}
		}
		if(cu>max){
			max=cu;
			moda=a[i];
		}
	}
	if(max==1){
		gotoxy(20,8); printf("Moda: N/A");
	}else{
		gotoxy(20,8); printf("Moda: %d", moda);
	}
	
	
	//MEDIA
	int prom=0, suma=0;
	for(i=1; i<=n; i++){
		suma=suma+a[i];
	}
	prom=suma/n;
	gotoxy(20,10); printf("Media: %d", prom);
	
	//Mediana
	int micha;
	micha=n/2;
	gotoxy(20, 12);printf("Mediana: %d", a[micha]);
	
	gotoxy(90,6); printf("VECTOR B");
	//MODA
	max=0, moda=0;
	for(i=1; i<=n; i++){
		int cu=0;
		for(int u=1; u<=n; u++){
			if(b[i]==b[u]){
				cu++;
			}
		}
		if(cu>max){
			max=cu;
			moda=b[i];
		}
	}
	if(max==1){
		gotoxy(90,8); printf("Moda: N/A");
	}else{
		gotoxy(90,8); printf("Moda: %d", moda);
	}
	
	
	//MEDIA
	prom=0, suma=0;
	for(i=1; i<=n; i++){
		suma=suma+b[i];
	}
	prom=suma/n;
	gotoxy(90,10); printf("Media: %d", prom);
	
	//Mediana
	gotoxy(90, 12);printf("Mediana: %d", b[micha]);
	
	getche();
	menu();
}

void opc5(){
	strcpy(titulo, "METODO BURBUJA");
	centrar();
	marco();
	
	int vueltas, aux;
	
	for(vueltas=1; vueltas<n; vueltas++){
		for(i=1; i<n; i++){
			if(b[i]>b[i+1]){
				aux=b[i+1];
				b[i+1]=b[i];
				b[i]=aux;
			}
		}
	}
	for(i=1; i<n; i++){
		gotoxy(20, 5+i); printf("B[%d]=%d", i, b[i]);
	}
	
	getche();
	menu();
}

void opc6(){
	strcpy(titulo, "COLOREAR VECTORES");
	centrar();
	marco();
	
	gotoxy(20, 6); printf("Casillas pares A");
	for(i=1; i<=n; i++){
		if(i%2==0){
			textcolor(BLUE);
		}else{
			textcolor(14);
		}
		gotoxy(20, 7+i);printf("A[%d]=%d", i, a[i]);
	}
	
	textcolor(14);
	gotoxy(84, 6); printf("Casillas pares B");
	for(i=1; i<=n; i++){
		if(i%2==0){
			textcolor(BLUE);
		}else{
			textcolor(14);
		}
		gotoxy(84, 7+i);printf("B[%d]=%d", i, b[i]);
	}
	
	textcolor(14);
	
	getche();
	menu();
}

void opc7(){
	strcpy(titulo, "ENCONTRAR E MAYOR Y E MENOR");
	centrar();
	marco();
	int em, pos;
	gotoxy(20,6); printf("Vector A");
	
	//VECTOR A
	//MAYOR
	em=a[1];
	for(i=1; i<=n; i++){
		if(a[i]>em){
			em=a[i];
			pos=i;
		}
		gotoxy(20,7+i);printf("%d", a[i]);
	}
	for(i=1; i<=n; i++){
		if(pos==i){
			gotoxy(24, 7+i); printf("<-- Mayor");
		}
	}
	//MENOR
	em=a[1];
	for(i=1; i<=n; i++){
		if(a[i]<em){
			em=a[i];
			pos=i;
		}
	}
	for(i=1; i<=n; i++){
		if(pos==i){
			gotoxy(24, 7+i); printf("<-- Menor");
		}
	}
	
	//VECTOR B
	gotoxy(74 ,6); printf("Vector B");
	//MAYOR
	em=b[1];
	for(i=1; i<=n; i++){
		if(b[i]>em){
			em=b[i];
			pos=i;
		}
		gotoxy(70,7+i);printf("%d", b[i]);
	}
	for(i=1; i<=n; i++){
		if(pos==i){
			gotoxy(74, 7+i); printf("<-- Mayor");
		}
	}
	//MENOR
	em=b[1];
	for(i=1; i<=n; i++){
		if(b[i]<em){
			em=b[i];
			pos=i;
		}
	}
	for(i=1; i<=n; i++){
		if(pos==i){
			gotoxy(74, 7+i); printf("<-- Menor");
		}
	}
	
	
	getche();
	menu();
}

void opc8(){
	strcpy(titulo, "SIMULAR FIFO");
	centrar();
	marco();
	
	int cola[10];
	 //VECTOR A
	gotoxy(20, 6); printf("VECTOR A");
	gotoxy(20, 8); printf("Arreglo:");
	for(i=1; i<=n; i++){
		gotoxy(20, 9+i); printf("A[%d]=%d", i, a[i]);
	}
	
	gotoxy(35, 8); printf("Arreglo despues:");
	for(i=1; i<=(n-1); i++){
		cola[i]=a[i+1];
		gotoxy(35, 9+i); printf("A[%d]=%d", i, cola[i]);
	}
	
	//VECTOR B
	gotoxy(70, 6); printf("VECTOR B");
	gotoxy(70, 8); printf("Arreglo:");
	for(i=1; i<=n; i++){
		gotoxy(70, 9+i); printf("B[%d]=%d", i, b[i]);
	}
	
	gotoxy(84, 8); printf("Arreglo despues:");
	for(i=1; i<=(n-1); i++){
		cola[i]=b[i+1];
		gotoxy(84, 9+i); printf("B[%d]=%d", i, cola[i]);
	}
	
	getche();
	menu();
	
}

void opc9(){
	strcpy(titulo, "SIMULAR LIFO");
	centrar();
	marco();
	
	int cola[10], aob;
	
	//VECTOR A
	gotoxy(20, 6); printf("VECTOR A");
	gotoxy(20, 8); printf("Arreglo:");
	for(i=1; i<=n; i++){
		gotoxy(20, 9+i); printf("A[%d]=%d", i, a[i]);
	}
	
	gotoxy(35, 8); printf("Arreglo despues:");
	for(i=1; i<=(n-1); i++){
		gotoxy(35, 9+i); printf("A[%d]=%d", i, a[i]);
	}
	
	//VECTOR B
	gotoxy(70, 6); printf("VECTOR B");
	gotoxy(70, 8); printf("Arreglo:");
	for(i=1; i<=n; i++){
		gotoxy(70, 9+i); printf("B[%d]=%d", i, b[i]);
	}
	
	gotoxy(84, 8); printf("Arreglo despues:");
	for(i=1; i<=(n-1); i++){
		gotoxy(84, 9+i); printf("B[%d]=%d", i, b[i]);
	}
	getche();
	menu();
}

void opc10(){
	strcpy(titulo, "UNIR VECTORES");
	centrar();
	marco();
}
