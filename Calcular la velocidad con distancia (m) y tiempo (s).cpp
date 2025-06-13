//PROGRAMA 1

#include <stdio.h>
#include <conio.h>

float v, d, t;

int main(){
	printf("Digite la distancia (en metros): ");
	scanf("%f", &d);
	printf("Digite el tiempo (en segundos): ");
	scanf("%f", &t);
	v=d/t;
	printf("La velocidad es = %f m/s", v);
	getche();
}
