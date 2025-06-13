//37. PRODUCCIÓN DE PLANTA

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>

void marco();
void menu();
void centrar();
void carita();

int i,j, op, ren, col, opc;
char titulo[50];

void Fullscreen(); //void para que se ponga todo en pantalla completa
void captura(); //La captura de la producción
void sumas(); //La suma de porducción por planta, diaria y total
void histo(); //Histogramas de las producciones diarias y por planta
void func(); //Las funciones, el día y planta que produjo mas
void opci(); //Opciones para modificar la tabla
void inc(); //Incrementar todos los valores de la tabla
void dec(); //Decrementar todo los velores de la tabla
void incart(); //Incrementar un artículo en específico

char nombre[50][50];
int ventas[10][10]; //Matriz de ventas diarias
int vv[10]; //Matriz venta de vendedor
int vd[10]; //Matriz de ventas por días
int suma1=0;
int pos1, pos2;

int main(){
	Fullscreen();
	menu();
}

void Fullscreen(){
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
	return;
}

void marco(){
	textcolor(12);
	//Horizonal
	for(i=5; i<=130; i++){
		gotoxy(i, 4);
		printf("%c", 178);
		gotoxy(i, 29);
		printf("%c", 178);
	}
	//Vertical
	for(i=4; i<=29; i++){
		gotoxy(5, i); printf("%c", 178);
		gotoxy(130, i); printf("%c", 178);
	}
	textcolor(WHITE);
}

void centrar(){
	strcpy(titulo, "P R O D U C C I O N");
	col=(146-strlen(titulo))/2;
	gotoxy(col, 2);
	textcolor(14);
	puts(titulo);
	textcolor(WHITE);
}

void menu(){
	marco();
	centrar();
	captura(); /*-->*/ sumas(); /*-->*/ histo(); /*-->*/ func(); /*-->*/  opci();
}

void captura(){
	textcolor(14);
	gotoxy(10, 6); printf("PLANTA");
	gotoxy(10, 8); printf("Planta 1");
	gotoxy(10, 10); printf("Planta 2");
	gotoxy(10, 12); printf("Planta 3");
	gotoxy(10, 14); printf("Planta 4");
	gotoxy(25, 6); printf("A1");
	gotoxy(33, 6); printf("A2");
	gotoxy(41, 6); printf("A3");
	gotoxy(49, 6); printf("A4");
	gotoxy(57, 6); printf("A5");
	gotoxy(65, 6); printf("A6");
	gotoxy(73, 6); printf("A7");
	gotoxy(80, 6); printf("SEMANAL");
	gotoxy(10, 14); printf("DIARIO");
	textcolor(WHITE);
	
	srand(time(NULL));
	//Capturar la producción de cada planta
	for(i=1; i<=4; i++){ //Planta
		for(int j=1; j<=7; j++){ //Artículo
			ventas[i][j]=rand()%200+1;
			
			Sleep(50);
			gotoxy(17+j*8, 6+i*2); printf("%d",ventas[i][j]);
		}
	}
}

void sumas(){
	for(i=1; i<=4; i++){
		for(j=1; j<=7; j++){
			vv[i]=0; //Ventas de vendedor
			vd[j]=0; //Ventas diarias
		}
	}
	pos1=vv[1];
	pos2=vd[1];
	for(i=1; i<=4; i++){
		for(j=1; j<=7; j++){
			vv[i]+=ventas[i][j]; //Ventas de vendedor
			vd[j]+=ventas[i][j]; //Ventas diarias
			if(vv[i]>pos1){
				pos1=vv[i];
			}
			if(vd[j]>pos2){
				pos2=vd[j];
			}
		}
	}
	
	suma1=0;
	for(i=1; i<=4; i++){
		textcolor(9);
		Sleep(200);
		suma1+=vv[i];
		textcolor(WHITE);
		gotoxy(80, 6+i*2); printf("%d",vv[i]);
		
	}
	
	for(i=1; i<=7; i++){
		textcolor(WHITE);
		Sleep(200);
		gotoxy(17+i*8, 16); printf("%d",vd[i]);
	}
	
	textcolor(14);
	gotoxy(80, 16); printf("%d", suma1);
}

void histo(){
	//Histograma de los vendedores
	for(i=1; i<=4; i++){
		for(int j=1; j<=vv[i]/110; j++){
			if(pos1==vv[i]){
				Sleep(10);
				textcolor(9);
				gotoxy(90+j, 6+i*2); printf("%c", 219);
			}else{
				Sleep(10);
				textcolor(14);
				gotoxy(90+j, 6+i*2); printf("%c", 219);
			}
		}
	}
	
	//Histograma de los días
	for(i=1; i<=7; i++){
		for(int j=1; j<=vd[i]/200; j++){
			if(vd[i]==pos2){
				Sleep(10);
				textcolor(9);
				gotoxy(17+i*8, 17+j); printf("%c", 219);
			}else{
				Sleep(10);
				textcolor(14);
				gotoxy(17+i*8, 17+j); printf("%c", 219);
			}
		}
	}
}

void func(){
	textcolor(WHITE);
	for(i=1; i<=4 ; i++){
		if(pos1==vv[i]){
			gotoxy(10,25);
			printf("La planta con mayor produccion es la Planta %d", i);
		}
	}
	
	int z=0;
	for(i=1; i<=7 ; i++){
		if(pos2==vd[i]){
			z=i;
			gotoxy(10,27);
			printf("El articulo mas producido fue el A%d", z); break;
		}
	}
}

void opci(){
	gotoxy(10, 31); printf("1.- Incrementar");
	gotoxy(10, 33); printf("2.- Decrementar");
	gotoxy(10, 35); printf("3.- Incrementar por articulo");
	gotoxy(10, 37); printf("4.- Salir");
	gotoxy(25, 37); scanf("%d", &opc);
	
	switch(opc){
		case 1: inc(); break;
		
		case 2: dec(); break;
		
		case 3: incart(); break;
		
		case 4: system("cls"); gotoxy(20, 70); printf("ADIOS :))"); getche(); break;
	}
}

void inc(){
	int por;
	gotoxy(60, 31); printf("Porcentaje a aumentar: ");
	scanf("%d", &por);
	
	system("cls");
	marco();
	centrar();
	textcolor(14);
	gotoxy(10, 6); printf("PLANTA");
	gotoxy(10, 8); printf("Planta 1");
	gotoxy(10, 10); printf("Planta 2");
	gotoxy(10, 12); printf("Planta 3");
	gotoxy(10, 14); printf("Planta 4");
	gotoxy(25, 6); printf("A1");
	gotoxy(33, 6); printf("A2");
	gotoxy(41, 6); printf("A3");
	gotoxy(49, 6); printf("A4");
	gotoxy(57, 6); printf("A5");
	gotoxy(65, 6); printf("A6");
	gotoxy(73, 6); printf("A7");
	gotoxy(80, 6); printf("SEMANAL");
	gotoxy(10, 14); printf("DIARIO");
	textcolor(WHITE);
	
	for(i=1; i<=4; i++){ //Planta
		for(int j=1; j<=7; j++){ //Artículo
			ventas[i][j]+=(ventas[i][j]*por)/100;
			Sleep(50);
			gotoxy(17+j*8, 6+i*2); printf("%d",ventas[i][j]);
		}
	}
	sumas(); /*-->*/ histo(); /*-->*/ func(); /*-->*/ opci();
}

void dec(){
	int dism;
	gotoxy(60, 31); printf("Porcentaje a disminuir: ");
	scanf("%d", &dism);
	
	system("cls");
	marco();
	centrar();
	textcolor(14);
	gotoxy(10, 6); printf("PLANTA");
	gotoxy(10, 8); printf("Planta 1");
	gotoxy(10, 10); printf("Planta 2");
	gotoxy(10, 12); printf("Planta 3");
	gotoxy(10, 14); printf("Planta 4");
	gotoxy(25, 6); printf("A1");
	gotoxy(33, 6); printf("A2");
	gotoxy(41, 6); printf("A3");
	gotoxy(49, 6); printf("A4");
	gotoxy(57, 6); printf("A5");
	gotoxy(65, 6); printf("A6");
	gotoxy(73, 6); printf("A7");
	gotoxy(80, 6); printf("SEMANAL");
	gotoxy(10, 14); printf("DIARIO");
	textcolor(WHITE);
	
	for(i=1; i<=4; i++){ //Planta
		for(int j=1; j<=7; j++){ //Artículo
			ventas[i][j]-=(ventas[i][j]*dism)/100;
			Sleep(50);
			gotoxy(17+j*8, 6+i*2); printf("%d",ventas[i][j]);
		}
	}
	sumas(); /*-->*/ histo(); /*-->*/ func(); /*-->*/ opci();
}

void incart(){
	int colu, incr;
	gotoxy(60, 31); printf("Articulo a incrementar (1/7): ");
	scanf("%d", &colu);
	gotoxy(60, 33); printf("Porcentaje a incrementar: ");
	scanf("%d", &incr);
	
	system("cls");
	marco();
	centrar();
	textcolor(14);
	gotoxy(10, 6); printf("PLANTA");
	gotoxy(10, 8); printf("Planta 1");
	gotoxy(10, 10); printf("Planta 2");
	gotoxy(10, 12); printf("Planta 3");
	gotoxy(10, 14); printf("Planta 4");
	gotoxy(25, 6); printf("A1");
	gotoxy(33, 6); printf("A2");
	gotoxy(41, 6); printf("A3");
	gotoxy(49, 6); printf("A4");
	gotoxy(57, 6); printf("A5");
	gotoxy(65, 6); printf("A6");
	gotoxy(73, 6); printf("A7");
	gotoxy(80, 6); printf("SEMANAL");
	gotoxy(10, 14); printf("DIARIO");
	textcolor(WHITE);
	
	for(i=1; i<=4; i++){ //Planta
		for(int j=1; j<=7; j++){
			if(j==colu){
			}else{
				Sleep(50);
				gotoxy(17+j*8, 6+i*2); printf("%d",ventas[i][j]);
			}
		}
	}
	
	for(i=1; i<=4; i++){
		ventas[i][colu]+=ventas[i][colu]*(incr/100);
		Sleep(50);
		gotoxy(17+colu*8, 6+i*2); printf("%d",ventas[i][colu]);
	}
	sumas(); /*-->*/ histo(); /*-->*/ func(); /*-->*/ opci();
}
