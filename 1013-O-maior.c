#include <stdio.h>
#include <stdlib.h>

int main() {

    int A, B, C, maior2, resultado;

    scanf("%d %d %d", &A, &B, &C);

    maior2 = (A+B+abs(A-B))/2;
    resultado = (maior2+C+abs(maior2-C))/2;

    printf("%d eh o maior\n", resultado);

    return 0;
}

