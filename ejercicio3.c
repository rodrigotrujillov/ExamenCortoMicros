/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int N;
    printf("¿Cuantos terminso quiere para la serie de Fibonacci? : ");
    scanf("%d", &N);
    int i;
    for (i = 1; i <= N; i++) {
        printf("%d", i);
    }
    return 0;
}