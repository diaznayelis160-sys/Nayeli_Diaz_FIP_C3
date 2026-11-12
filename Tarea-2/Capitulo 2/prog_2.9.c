#include <stdio.h>
#include <math.h>

/* Expresion.
El progrma, al recibir como dato tres valores enteros, establece si los
mismos satisfacen una expresion determindada.

R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main (void)
{
    float RES;
    int R, T, Q;
    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);
    if (RES < 820)
        printf("\nR = %d\tT = %d", R, T, Q);
}
