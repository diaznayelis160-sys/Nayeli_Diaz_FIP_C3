
#include <stdio.h>
 /* Cubo-2.
 El programa calcula el cubo de los 10 primeros números naturales con la
 ayuda de una función. */

 int cubo(void);  // Prototipo de función
 int I;           // Variable global

 void main(void)
 {
     int CUB;
     for (I = 1; I <= 10; I++)
     {
         CUB = cubo();
         printf("\nEl cubo de %d es: %d", I, CUB);
     }
 }
 int cubo(void)
 {
     return (I * I * I);

 }
