#include <stdio.h>


#include <stdio.h>

void trueque(int *x, int *y)
{
    int tem;
    tem = *x;
    *x = *y;
    *y = tem;
}

int suma(int x)
{
    return (x + x);
}

int main()
{
    int a = 5;
    int b = 10;

    // Prueba de la función suma
    printf("Suma de %d + %d: %d\n", a, a, suma(a));

    // Prueba de la función trueque
    printf("Antes del trueque: a = %d, b = %d\n", a, b);
    trueque(&a, &b);
    printf("Despues del trueque: a = %d, b = %d\n", a, b);

    return 0;
}
