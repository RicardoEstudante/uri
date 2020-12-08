#include <stdio.h>

int main() {

    double A, B, C, nota;

    scanf("%lf %lf %lf", &A, &B, &C);

    nota = (A*2)+(B*3)+(C*5);

    printf("MEDIA = %.1f\n", nota/10);

    return 0;
}

