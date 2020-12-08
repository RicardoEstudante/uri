#include <stdio.h>
 
int main() {
 
    double A, B, nota;

    scanf("%lf %lf", &A, &B);

    nota = (A*3.5)+(B*7.5);

    printf("MEDIA = %.5f\n", nota/11);
 
    return 0;
}
