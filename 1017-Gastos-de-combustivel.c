#include <stdio.h>


int main()
{
    int tempoViagem, vm;
    float time;

    scanf("%d %d", &tempoViagem, &vm);

    time = (float)(tempoViagem * vm);

    printf("%.3f\n", time/12);

    return 0;
}
