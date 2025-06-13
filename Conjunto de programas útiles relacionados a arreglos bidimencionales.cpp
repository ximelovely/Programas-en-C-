//35. ARREGLOS BIDIMENSIONALES

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
void opc15();
void carita();

int i, op, ren, col, opc;
char titulo[50];
int a[10][10], b[10][10], c[10][10];

int n;

int main(){
	menu();
}

void carita(){
	textcolor(9);
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

void marco(){
	textcolor(9);
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

void centrar(){
	col=(120-strlen(titulo))/2;
	gotoxy(col, 2);
	puts(titulo);
}

void menu(){
	system("cls");
	strcpy(titulo, "P R O G R A M A C I O N  J E B E W O N");
	marco();
	centrar();
	gotoxy(20, 6); printf("1.- Lectura matriz A");
	gotoxy(20, 7); printf("2.- Numeros aleatorios en la matriz B");
	gotoxy(20, 8); printf("3.- Sumar de matrices A+B");
	gotoxy(20, 9); printf("4.- Colorear diagonal principal A y secundaria B");
	gotoxy(20, 10); printf("5.- Colorear filas pares");
	gotoxy(20, 11); printf("6.- Colorear columnas nones");
	gotoxy(20, 12); printf("7.- Multiplicacion de A*B");
	gotoxy(20, 13); printf("8.- Colorear y promediar MTS de A");
	gotoxy(20, 14); printf("9.- Colorear y promediar MTI de B");
	gotoxy(20, 15); printf("10.- Elemento mayor");
	gotoxy(20, 16); printf("11.- Matriz transpuesta A");
	gotoxy(20, 17); printf("12.- Matriz transpuesta B");
	gotoxy(20, 18); printf("13.- Pasar la primera fila a un vector");
	gotoxy(20, 19); printf("14.- Colorear la periferia de A");
	gotoxy(20, 20); printf("15.- Colorear la periferia de B");
	gotoxy(20, 21); printf("16.- Salir del programa");
	
	for(i=10; i<=110; i++){
		gotoxy(i, 23);
		textcolor(9);
		printf("%c", 178);
		textcolor(WHITE);
	}
	
	gotoxy(20, 26); printf("Que opcion desea?: \t");
	scanf("%d", &opc);
	
	system("cls");
	marco();
	
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
		
		case 11:
			opc11();
			break;
			
		case 12:
			opc12();
			break;
			
		case 13:
			opc13();
			break;
			
		case 14:
			opc14();
			break;
			
		case 15:
			opc15();
			break;
		
		case 16:
			system("cls");
			strcpy(titulo, "Adios<3");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 15);
			puts(titulo);
			strcpy(titulo, "^_____^");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 16);
			puts(titulo);
			carita();
			getche();
			break;
			
		default:
			system("cls");
			strcpy(titulo, "Favor de ingresar opcion valida");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 15);
			puts(titulo);
			strcpy(titulo, "{{{(>_<)}}}");
			col=(120-strlen(titulo))/2;
			gotoxy(col, 16);
			puts(titulo);
			carita();
			Sleep(1000);
			menu();
			break;	
	}
}

void opc1(){
	strcpy(titulo, "LECTURA MATRIZ A");
	centrar();
	gotoxy(20, 6); printf("Ingrese orden de la matriz: ");
	scanf("%d", &n);
	
	gotoxy(20, 8); printf("Matriz A");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			gotoxy(14+j*6, 8+i*2);
			scanf("%d", &a[i][j]);
		}
	}
	
	getche();
	menu();
}

void opc2(){
	strcpy(titulo, "NUMEROS ALEATORIOS EN LA MATRIZ B");
	centrar();
	
	srand(time(NULL));
	
	gotoxy(20, 6); printf("Matriz B");
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			b[i][j]=rand()%100;
			Sleep(200);
			gotoxy(14+j*6, 6+i*2); printf("%d", b[i][j]);
		}	
	}
	
	getche();
	menu();
}

void opc3(){
	strcpy(titulo, "SUMA DE MATRICES A+B");
	centrar();
	
	int resu;
	
	gotoxy(20, 6); printf("A + B = C ");
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			resu=a[i][j]+b[i][j];
			Sleep(200);
			gotoxy(24+j*6, 4+i*2); printf("%d",resu);
		}
	}
	
	getche();
	menu();
}

void opc4(){
	strcpy(titulo, "COLOREAR DIAGONAL PRINCIPAL A Y SECUNDARIA B");
	centrar();
	
	gotoxy(20, 6); printf("Diagonal principal A");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i==j){
				textcolor(12);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}
			
		}
	}
	
	textcolor(WHITE);
	gotoxy(60, 6); printf("Diagonal secundaria B");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i==n-(j-1)){
				textcolor(12);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}
			
		}
	}
	
	getche();
	menu();
}

void opc5(){
	strcpy(titulo, "COLOREAR FILAS PARES");
	centrar();
	
	gotoxy(20, 6); printf("Matriz A");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i%2==0){
				textcolor(12);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}
			
		}
	}
	
	textcolor(WHITE);
	gotoxy(60, 6); printf("Matriz B");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i%2==0){
				textcolor(12);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}
			
		}
	}
	
	getche();
	menu();
}

void opc6(){
	strcpy(titulo, "COLOREAR COLUMNAS NONES");
	centrar();
	
	gotoxy(20, 6); printf("Matriz A");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(j%2==1){
				textcolor(12);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}
			
		}
	}
	
	textcolor(WHITE);
	gotoxy(60, 6); printf("Matriz B");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(j%2==1){
				textcolor(12);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}
			
		}
	}
	
	getche();
	menu();
}

void opc7(){
	strcpy(titulo, "MULTIPLICACION DE A*B");/*Es la sumat*/
	centrar();
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			c[i][j]=0;
			for(int k=1; k<=n; k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			gotoxy(14+j*6, 4+i*2); printf("%d", a[i][j]);
			gotoxy(40+j*6, 4+i*2); printf("%d", b[i][j]);
			gotoxy(56+j*6, 4+i*2); printf("%d", c[i][j]);
		}
	}
	
	getche();
	menu();
}

void opc8(){
	strcpy(titulo, "COLOREAR Y PROMEDIAR MTS DE A");
	centrar();
	int z=0, suma=0;
	float p=0;
	
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i<j || i==j){
				textcolor(12);
				gotoxy(14+j*6, 4+i*2); printf("%d", a[i][j]);
				z=z+1;
				suma=suma+a[i][j];
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 4+i*2); printf("0");
			}
			
		}
	}
	
	textcolor(WHITE);
	p=suma/z;
	gotoxy(80, 6); printf("Promedio: %.2f", p);
	
	getche();
	menu();
}

void opc9(){
	strcpy(titulo, "CALCULAR Y PROMEDIAR MTI DE B");
	centrar();
	
	int z=0, suma=0;
	float prom=0;
	
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i>j || i==j){
				textcolor(12);
				gotoxy(14+j*6, 4+i*2); printf("%d", b[i][j]);
				z=z+1;
				suma=suma+a[i][j];
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 4+i*2); printf("0");
			}
			
		}
	}
	
	textcolor(WHITE);
	prom=suma/z;
	gotoxy(80, 6); printf("Promedio: %.2f", prom);
	
	getche();
	menu();
}

void opc10(){
	strcpy(titulo, "ELEMENTO MAYOR");
	centrar();
	int may=a[1][1];
	
	gotoxy(20, 6); printf("Matriz A");
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j]>may){
				may=a[i][j];
			}
		}	
	}
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			Sleep(200);
			if(a[i][j]==may){
				textcolor(12);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}
		}	
	}
	
	gotoxy(20, 27); printf("Elemento mayor: %d", may);
	
	
	textcolor(WHITE);
	gotoxy(60, 6); printf("Matriz B");
	
	may=b[1][1];
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(b[i][j]>may){
				may=b[i][j];
			}
		}	
	}
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			Sleep(200);
			if(b[i][j]==may){
				textcolor(12);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(54+j*6, 6+i*2); printf("%d", b[i][j]);
			}
		}	
	}
	
	gotoxy(60, 27); printf("Elemento mayor: %d", may);
	
	getche();
	menu();
}

void opc11(){
	strcpy(titulo, "MATRIZ TRANSPUESTA A");
	centrar();
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			c[j][i]=a[i][j];
		}
	}
	
	gotoxy(20, 6); printf("Matriz A");
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			Sleep(200);
			gotoxy(14+j*6, 6+i*2); printf("%d",a[i][j]);
		}
	}
	
	gotoxy(60, 6); printf("Matriz transpuesta");
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			Sleep(200);
			gotoxy(54+j*6, 6+i*2); printf("%d",c[i][j]);
		}
	}
	
	getche();
	menu();
}

void opc12(){
	strcpy(titulo, "MATRIZ TRANSPUESTA B");
	centrar();
	
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			c[j][i]=b[i][j];
		}
	}
	
	gotoxy(20, 6); printf("Matriz B");
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			Sleep(200);
			gotoxy(14+j*6, 6+i*2); printf("%d",b[i][j]);
		}
	}
	
	gotoxy(60, 6); printf("Matriz transpuesta");
	for(i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			Sleep(200);
			gotoxy(54+j*6, 6+i*2); printf("%d",c[i][j]);
		}
	}
	
	getche();
	menu();
}

void opc13(){
	strcpy(titulo, "PASAR LA PRIMERA FILA A UN VECTOR");
	centrar();
	
	int w[10], v[10];
	
	gotoxy(20, 6); printf("Matriz A");
	gotoxy(20, 8); printf("W=");
	for(i=1; i<=n; i++){ /*Filas*/
		w[i]=a[1][i];
	}
	for(i=1; i<=n; i++){
		Sleep(200);
		gotoxy(19+i*3, 8); printf("%d ",w[i]);
	}
	
	gotoxy(60, 6); printf("Matriz B");
	gotoxy(60, 8); printf("V=");
	for(i=1; i<=n; i++){ /*Filas*/
		v[i]=b[1][i];
	}
	for(i=1; i<=n; i++){
		Sleep(200);
		gotoxy(59+i*3, 8); printf("%d ",v[i]);
	}
	
	getche();
	menu();
}

void opc14(){
	strcpy(titulo, "COLOREAR LA PERIFERIA DE A");
	centrar();
	
	gotoxy(20, 6); printf("Matriz A");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i==1 || j==1 || i==n || j==n){
				textcolor(12);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 6+i*2); printf("%d", a[i][j]);
			}
		}
	}

	getche();
	menu();
}

void opc15(){
	strcpy(titulo, "COLOREAR LA PERIFERIA DE B");
	centrar();
	
	gotoxy(20, 6); printf("Matriz B");
	for(i=1; i<=n; i++){ /*Filas*/
		for(int j=1; j<=n; j++){ /*Columnas*/
			Sleep(200);
			if(i==1 || j==1 || i==n || j==n){
				textcolor(12);
				gotoxy(14+j*6, 6+i*2); printf("%d", b[i][j]);
			}else{
				textcolor(WHITE);
				gotoxy(14+j*6, 6+i*2); printf("%d", b[i][j]);
			}
		}
	}

	getche();
	menu();
}
