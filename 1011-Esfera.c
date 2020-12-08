#include <stdio.h>
#include <math.h>

int main() {

    double PI = 3.14159;
    double resultado, raio;

    scanf("%lf", &raio);

    resultado = (4.0/3) * PI * (raio * raio * raio);

    printf("VOLUME = %.3f\n", resultado);

    return 0;
}
