#include <stdio.h>
#include <stdlib.h>

// Definiciones del menú y errores
#define SALIR 0
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTAR 4

#define ERR_OK 0
#define ERR_INESPERADO 89
#define ERR_DivByZero 230
#define ERR_OpNoValida 345  // Agregué el error que pusiste en la imagen

// Declaraciones de TODAS las funciones
void leer_numeros(void);
int sumar(double num1, double num2, double *result);
int restar(double num1, double num2, double *result);
int multiplicar(double num1, double num2, double *result);
int dividir(double numerador, double denominador, double *result);

// Variables GLOBALES (accesibles en todo el programa)
double n1 = 0.0;
double n2 = 0.0;

int main()
{
    // Variables LOCALES (solo funcionan dentro de main)
    int menu = -1;
    int err = ERR_OK;
    double r = 0.0;

    printf("===== CALCULADORA BÁSICA =====\n");

    do
    {
        // Menú principal
        printf("\n--- MENÚ DE OPCIONES ---\n");
        printf("0 - SALIR DEL PROGRAMA\n");
        printf("1 - SUMAR\n");
        printf("2 - DIVIDIR\n");
        printf("3 - MULTIPLICAR\n");
        printf("4 - RESTAR\n");
        printf("\nElige una opción: ");
        scanf("%i", &menu);

        // Validamos la opción elegida
        switch(menu)
        {
            case SUMAR:
                leer_numeros();
                err = sumar(n1, n2, &r);
                if(err == ERR_OK)
                    printf("\n Resultado: %.2lf + %.2lf = %.2lf\n", n1, n2, r);
                else
                    printf("\n Ha ocurrido un error inesperado!\n");
                break;

            case RESTAR:
                leer_numeros();
                err = restar(n1, n2, &r);
                if(err == ERR_OK)
                    printf("\n Resultado: %.2lf - %.2lf = %.2lf\n", n1, n2, r);
                else
                    printf("\n Ha ocurrido un error inesperado!\n");
                break;

            case MULTIPLICAR:
                leer_numeros();
                err = multiplicar(n1, n2, &r);
                if(err == ERR_OK)
                    printf("\n Resultado: %.2lf * %.2lf = %.2lf\n", n1, n2, r);
                else
                    printf("\n Ha ocurrido un error inesperado!\n");
                break;

            case DIVIDIR:
                leer_numeros();
                err = dividir(n1, n2, &r);
                if(err == ERR_OK)
                    printf("\n Resultado: %.2lf / %.2lf = %.2lf\n", n1, n2, r);
                else if(err == ERR_DivByZero)
                    printf("\n ERROR: No se puede dividir entre cero!\n");
                else
                    printf("\n  Ha ocurrido un error inesperado!\n");
                break;

            case SALIR:
                printf("\n Saliendo del programa... Hasta luego!\n");
                break;

            default:
                printf("\n Opción NO VÁLIDA! Elige un número del 0 al 4.\n");
        }
    }
    while(menu != SALIR); // Se repite hasta que elijas 0

    return 0;
}

// Función para pedir los números al usuario
void leer_numeros(void)
{
    printf("\nIngresa el primer número: ");
    scanf("%lf", &n1); // & = operador de dirección
    printf("Ingresa el segundo número: ");
    scanf("%lf", &n2);
}

// Función SUMAR: pasa el resultado por referencia
int sumar(double num1, double num2, double *result)
{
    *result = num1 + num2; // * = operador de indirección
    return ERR_OK;
}

// Función RESTAR
int restar(double num1, double num2, double *result)
{
    *result = num1 - num2;
    return ERR_OK;
}

// Función MULTIPLICAR
int multiplicar(double num1, double num2, double *result)
{
    *result = num1 * num2;
    return ERR_OK;
}

// Función DIVIDIR
int dividir(double numerador, double denominador, double *result)
{
    if(denominador == 0.0)
        return ERR_DivByZero; // Error si divide entre 0

    *result = numerador / denominador;
    return ERR_OK;
}
int leer_numeros(int op,double)
