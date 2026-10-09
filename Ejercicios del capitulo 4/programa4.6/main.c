
#include <stdio.h>

void f1(int *R); // Prototipo de función

int main(void)
{
    int I, K = 4;

    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", K);

        f1(&K); // Llamada correcta pasando la dirección de K

        printf("\nValor de K despues de llamar a la funcion: %d", K);
    }

    return 0;
}

void f1(int *R)
{
    // Supongamos que le sumas 1 al valor al que apunta R (puedes cambiar el 1 por el número que pida tu ejercicio)
    *R += 1;
}
