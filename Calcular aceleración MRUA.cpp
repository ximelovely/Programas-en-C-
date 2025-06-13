#include <stdio.h>

int main() {
    float vi, vf, t, a;

    printf("Ingrese la velocidad inicial (m/s): ");
    scanf("%f", &vi);

    printf("Ingrese la velocidad final (m/s): ");
    scanf("%f", &vf);

    printf("Ingrese el tiempo (s): ");
    scanf("%f", &t);

    a = (vf - vi) / t;

    printf("La aceleración es: %.2f m/s^2\n", a);

    return 0;
}
