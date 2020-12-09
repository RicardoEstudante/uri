#include <stdio.h>

int main()
{
    int cem, cinquenta, vinte, dez, cinco, dois, resto;
    int moedas, umR, cinquentaC, vinteCincoC, dezC, cincoC, umC;

    int dinheiroInt;
    double dinheiro;

    scanf("%lf", &dinheiro);

    dinheiroInt = (int)dinheiro;
    dinheiro -= dinheiroInt;
//    printf("Inteiro: %d\n", dinheiroInt);
    moedas = dinheiro * 100;
//    printf("%d\n", moedas);

    cem = dinheiroInt / 100;
    resto = dinheiroInt % 100;

    cinquenta = resto / 50;
    resto = resto % 50;

    vinte = resto / 20;
    resto = resto % 20;

    dez = resto / 10;
    resto = resto % 10;

    cinco = resto / 5;
    resto = resto % 5;

    dois = resto / 2;
    umR = resto % 2;

//    printf("%d\n", resto);

    cinquentaC = moedas / 50;
    moedas %= 50;

     vinteCincoC = moedas / 25;
     moedas %= 25;

     dezC = moedas / 10;
     moedas %= 10;

      cincoC = moedas / 5;
      moedas %= 5;

      umC = moedas / 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", umR);
    printf("%d moeda(s) de R$ 0.50\n", cinquentaC);
    printf("%d moeda(s) de R$ 0.25\n", vinteCincoC);
    printf("%d moeda(s) de R$ 0.10\n", dezC);
    printf("%d moeda(s) de R$ 0.05\n", cincoC);
    printf("%d moeda(s) de R$ 0.01\n", umC);

    return 0;
}
