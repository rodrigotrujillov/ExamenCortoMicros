/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "operaciones.h"


int main()
{
    float num1, num2;
    printf("Ingresa dos numeros : ");
    scanf("%f %f", &num1, &num2);
    
    float res_suma = sumar(num1, num2);
    float res_resta = restar(num1, num2);
    float res_multiplicar = multiplicar(num1, num2);
    float res_dividir = dividir(num1, num2);
    
    printf("PI: %.5f\n", PI());
    printf("Suma: %.5f\n", res_suma);
    printf("Resta: %.5f\n", res_resta);
    printf("Multiplicacion: %.5f\n", res_multiplicar);
    printf("Division: %.5f\n", res_dividir);
    
    return 0;
}
