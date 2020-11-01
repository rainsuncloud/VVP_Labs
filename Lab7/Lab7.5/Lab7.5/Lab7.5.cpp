#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int a, b;
	printf("A = ");
	scanf_s("%d", &a);
	printf("B = ");
	scanf_s("%d", &b);
	if (a != 0) {
		printf("x = %f", (float) (- b) / a);
	}
	else {
		printf("А не должно быть 0");
	}
	return 0;
}

