#include <stdio.h>

/* Prototipo de la función */
int mad(int);

int main(void) {
    int NUM, RES;

    printf("\nIngresa el numero: ");
    scanf("%d", &NUM);

    RES = mad(NUM);

    printf("\nEl mayor divisor de %d es: %d\n", NUM, RES);

    return 0;
}

/* Esta función calcula el mayor divisor del número N1 */
int mad(int N1) {
    int I = N1 / 2;

    /* El ciclo se mantiene activo mientras (N1 % I) sea distinto de cero */
    while (N1 % I != 0) {
        I--;
    }

    return I;
}

