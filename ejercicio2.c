/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float fah, celsius;
    printf("Ingrese dos numeros enteros separados por un espacio: ");
    scanf("%f", &fah);
    celsius = (fah - 32) * 5/9;
    printf("El valor Fahrenheit %0.2f en Celsius es: %0.2f\n", fah, celsius);
    
    return 0;
}