//14. IMC Y OXIGENACIÓN

#include <cstdio>
#include<conio2.h>

void marco();

int main() {
	marco();
    float peso, altura, imc;
    
    float oxi;

	gotoxy(20, 4);
    printf("Introduce tu peso en kilogramos: ");
    scanf("%f", &peso);
    
    gotoxy(20, 6);
    printf("Introduce tu altura en metros: ");
    scanf("%f", &altura);
    
    imc=peso/(altura*altura);
    
    gotoxy(20, 8);
    printf("Tu IMC es: %.2f\n", imc);
    
    gotoxy(20, 11);
    printf("Introduce tu nivel de oxigenacion: ");
    scanf("%f", &oxi);
    
    if (oxi >= 95) {
    	gotoxy(20, 13);
        printf("Oxigenacion: NORMAL\n");
    } else if (oxi >= 91) {
    	gotoxy(20, 13);
        printf("Oxigenación: LEVE\n");
    } else if (oxi >= 86) {
    	gotoxy(20, 13);
        printf("Oxigenacion: MODERADA\n");
    } else {
    	gotoxy(20, 13);
        printf("Oxigenacion: GRAVE\n");
    }

    getche();
}

void marco(){
	//Horizonal
	for(int i=10; i<=110; i++){
		gotoxy(i, 2);
		printf("%c", 178);
		gotoxy(i, 29);
		printf("%c", 178);
	}
	//Vertical
	for(int i=2; i<=29; i++){
		gotoxy(10, i); printf("%c", 178);
		gotoxy(110, i); printf("%c", 178);
	}
}
