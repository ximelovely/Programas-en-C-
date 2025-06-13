//33. 

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<string.h>
#include<time.h>
#include<wchar.h>
#include<locale.h>
#include<cstring>  // Para strlen
#include<cctype>   // Para toupper y tolower
#include<cstring>  // Para strcmp
#include<algorithm> // Para std::shuffle
#include<cstdlib>  // Para rand() y srand()
#include<ctime>    // Para time()
#include<string>   // Para usar std::string
#include<iostream>

using namespace std;

void marco();
void menu();
void centrar();
void carita();

void opc1();
void opc2();
void opc3();
void opc4();
void opc5();
void opc6();
void opc7();
void opc8();

int i, op, ren, col, opc;
char titulo[50], nombre[50], apellido[30], password[30];

int main(){
	textbackground(0); textcolor(14);
	clrscr();
	menu();
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

void centrar(){
	ren=3;
	col=(120-strlen(titulo))/2;
	gotoxy(col, 2);
	puts(titulo);
}

void menu(){
	system("cls");
	strcpy(titulo, "F U N C I O N E S  S T R I N G");
	marco();
	centrar();
	gotoxy(20, 9); printf("1.- Copiar cadenas");
	gotoxy(20, 12); printf("2.- Contar caracteres");
	gotoxy(20, 15); printf("3.- Concatenar dos cadenas");
	gotoxy(20, 18); printf("4.- Centrar una cadena");
	gotoxy(70, 9); printf("5.- Mayusculas");
	gotoxy(70, 12); printf("6.- Minusculas");
	gotoxy(70, 15); printf("7.- Compara");
	gotoxy(70, 18); printf("8.- Generar password"); /*Debe de tener 8 caracteres
	como mínimo, 2 letras mayúsculas, dos letras minúsculas, dos números y dos
	caracteres especiales*/
	
	//Horizonal
	for(i=10; i<=110; i++){
		textcolor(9);
		gotoxy(i, 23);
		printf("%c", 178);
		gotoxy(i, 29);
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
	strcpy(titulo, "COPIAR CADENA");
	centrar();
	gotoxy(20, 6);
	printf("Cadena original: \t");
	getchar();
	gets(titulo);
	strcpy(nombre,titulo);//Copia el texto de la segunda variable a la segunda
	gotoxy(20, 8);
	puts(nombre);
	
	getche();
	menu();
}

void opc2(){
	strcpy(titulo, "CONTAR CARACTERES");
	centrar();
	
	char cad[100];
	
	gotoxy(20, 6); printf("Linea de texto sin espacios: ");
	scanf("%99s", cad);
	 
    int longitud = strlen(cad);
	gotoxy(20, 8); printf("Tiene %d caracteres", longitud);

	getche();
	menu();
}

void opc3(){
	strcpy(titulo, "CONCATENAR DOS CADENAS");
	centrar();
	
	char cadena1[100], cadena2[50];

    gotoxy(20, 6); printf("Primera cadena sin espacios: ");
    scanf("%99s", cadena1);
    
    gotoxy(20, 8); printf("Segunda cadena sin espacios: ");
    scanf("%49s", cadena2);
    
    strcat(cadena1, cadena2);
    
    gotoxy(20, 10); printf("Resultado de la concatenación: %s\n", cadena1);

	
	getche();
	menu();
}

void opc4(){
	strcpy(titulo, "CENTRAR UNA CADENA");
	centrar();
	
	char cadena[100];
	gotoxy(20, 6); printf("Linea de texto sin espacios: ");
	scanf("%99s", cadena);
	col=(120-strlen(cadena))/2;
	gotoxy(col, 8);
	puts(cadena);
	
	getche();
	menu();
}

void opc5(){
	strcpy(titulo, "MAYUSCULAS");
	centrar();
	
	char cadena[100];

	gotoxy(20, 6); printf("Cadena sin espacios: ");
    scanf("%99s", cadena);

    for (int i = 0; i < strlen(cadena); i++) {
        cadena[i] = toupper(cadena[i]);
    }
	gotoxy(20, 8); printf("Cadena en mayúsculas: %s\n", cadena);

	getche();
	menu();
}

void opc6(){
	strcpy(titulo, "MINUSCULAS");
	centrar();
	
	char cadena[100];

    gotoxy(20, 6); printf("Cadena sin espacios: ");
    scanf("%99s", cadena);
    
    for (int i = 0; i < strlen(cadena); i++) {
        cadena[i] = tolower(cadena[i]);
    }

	gotoxy(20, 8); printf("Cadena en minúsculas: %s\n", cadena);

	getche();
	menu();
}

void opc7(){
	strcpy(titulo, "COMPARA");
	centrar();
	
	char cadena1[100], cadena2[100];

    gotoxy(20, 6); printf("Primera cadena sin espacios: ");
    scanf("%99s", cadena1);

    gotoxy(20, 8); printf("Segunda cadena sin espacios: ");
    scanf("%99s", cadena2);
    
    
    int resultado = strcmp(cadena1, cadena2);


    if (resultado == 0) {
        gotoxy(20, 10); printf("Las cadenas son iguales.\n");
    } else if (resultado < 0) {
        gotoxy(20, 10); printf("La primera cadena es menor que la segunda.\n");
    } else {
        gotoxy(20, 10); printf("La primera cadena es mayor que la segunda.\n");
    }
	
	getche();
	menu();
}

void opc8(){
	strcpy(titulo, "GENERAR PASSWORD");
	centrar();
	
	srand(time(NULL));

    const int longitud = 8;
    const string mayusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string minusculas = "abcdefghijklmnopqrstuvwxyz";
    const string digitos = "0123456789";
    const string especiales = "!@#$%^&*()-_=+[]{}|;:,.<>?";
    
    string contrasena;
    contrasena += mayusculas[rand() % mayusculas.length()];
    contrasena += mayusculas[rand() % mayusculas.length()];
    contrasena += minusculas[rand() % minusculas.length()];
    contrasena += minusculas[rand() % minusculas.length()];
    contrasena += digitos[rand() % digitos.length()];
    contrasena += digitos[rand() % digitos.length()];
    contrasena += especiales[rand() % especiales.length()];
    contrasena += especiales[rand() % especiales.length()];

    const string caracteres = mayusculas + minusculas + digitos + especiales;
    while (contrasena.length() < longitud) {
        contrasena += caracteres[rand() % caracteres.length()];
    }

    random_shuffle(contrasena.begin(), contrasena.end());

    gotoxy(20, 6); cout << "Password: " << contrasena << endl;

	
	getche();
	menu();
}
