#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, x;
	printf("A = ");
	scanf_s("%d", &a);
	printf("B = ");
	scanf_s("%d", &b);
	x = -(b / a);
	printf("x = %f", x);

	return 0;
}

