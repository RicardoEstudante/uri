#include <stdio.h>

int main()
{
    int segundos, minutos, horas, resto;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = segundos % 3600/60;
    resto = segundos %60;

    printf("%d:%d:%d\n", horas, minutos, resto);

    return 0;
}
