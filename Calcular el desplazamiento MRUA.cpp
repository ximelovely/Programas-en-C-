#include <stdio.h>

int main() {
    float Vi, Vf, t, d;

    printf("Ingrese la velocidad inicial (m/s): ");
    scanf("%f", &Vi);

    printf("Ingrese la velocidad final (m/s): ");
    scanf("%f", &Vf);

    printf("Ingrese el tiempo (s): ");
    scanf("%f", &t);

    d = ((Vi + Vf) / 2) * t;

    // Imprimir el resultado
    printf("El desplazamiento es: %.2f metros\n", d);

    return 0;
}
