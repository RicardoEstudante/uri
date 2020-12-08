#include <stdio.h>

int main() {
    int numFunc, horasTb;

    float valorHora, x;

    scanf("%d %d %f", &numFunc,&horasTb,&valorHora);

    x = horasTb*valorHora;

    printf("NUMBER = %d\n", numFunc);
    printf("SALARY = U$ %.2f\n", x);

    return 0;
}

