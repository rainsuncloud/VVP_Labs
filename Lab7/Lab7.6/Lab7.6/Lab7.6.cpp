#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int a1, b1, a2, b2, c1, c2, d;
	float x, y;
	printf("a1 = ");
	scanf_s("%d", &a1);
	printf("b1 = ");
	scanf_s("%d", &b1);
	printf("c1 = ");
	scanf_s("%d", &c1);
	printf("a2 = ");
	scanf_s("%d", &a2);
	printf("b2 = ");
	scanf_s("%d", &b2);
	printf("c2 = ");
	scanf_s("%d", &c2);

	d = a1 * b2 - a2 * b1;
	if (d == 0) {
		printf("Решений бесконечно много или их нет");
	}
	else {
		x = (c1 * b2 - c2 * b1) / d;
		y = (c2 * a1 - c1 * a2) / d;

		printf("x = %f, y = %f", x, y);
	}
	return 0;
}
