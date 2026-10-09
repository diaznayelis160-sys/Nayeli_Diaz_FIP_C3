#include <stdio.h>
 #include <stdlib.h>
 /* Cubo-1.
 El programa calcula el cubo de los 10 primeros números naturales con la ayuda de una función.
 En la solución del problema se utiliza una variable global, aunque esto, como veremos más adelante, no es recomendable */
 int cubo(void);       // Prototipo de función
 int I;                // Variable global: sintaxis corregida
 void main(void)
 {
     int CUB;
     for (I = 1; I <= 10; I++)  // Usamos la variable global en el bucle
     {
         CUB = cubo();          // Llamada correcta a la función
         printf("\nEl cubo de %d es: %d", I, CUB);
     }
 }
 int cubo(void)                 // Definición de la función
 {
     return (I * I * I);        // Calcula el cubo usando la variable global
 }
