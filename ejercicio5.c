/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
   int N = 10;
   int array[N];
   int *puntero = array;

   for (int i = 0; i < N; i++) {
      printf("Ingresa un valor entero %d: ", i+1);
      scanf("%d", &array[i]);
   }
   
   printf("Los elementos multiplicados por 2 son:\n");
   for (int i = 0; i < N; i++) {
      printf("%d ", *(puntero+i)*2);
   }
   return 0;
}
