#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, dist, resu, resu2;

    scanf("%f %f\n", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    resu = x2 - x1;
    resu2 = y2 - y1;

    dist = sqrt(pow(resu,2) + pow(resu2, 2));

    printf("%.4f\n", dist);

    return 0;
}
