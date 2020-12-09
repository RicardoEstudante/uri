#include <stdio.h>

int main (){
	double A, B, C;
	double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;



	scanf("%lf %lf %lf\n", &A, &B, &C);
	
	areaTriangulo = (A * C) / 2;
	areaCirculo = C * 3.14159;
	areaTrapezio = 	((A + A) * C) / 2;

	printf("TRIAGULO: %lf\n", areaTriangulo);
	printf("CIRCULO: %lf\n", areaCirculo);
	printf("TRAPEZIO: %lf\n", areaTrapezio);

	return 0;
}
