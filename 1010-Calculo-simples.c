#include <stdio.h>

int main() {

    int cod1, cod2, numPecas1, numPecas2;
    double valorPeca1, valorPeca2, total;

    scanf("%d %d %lf", &cod1, &numPecas1, &valorPeca1);
    scanf("%d %d %lf", &cod2, &numPecas2, &valorPeca2);

    total = (valorPeca1 * numPecas1) + (valorPeca2 * numPecas2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}

