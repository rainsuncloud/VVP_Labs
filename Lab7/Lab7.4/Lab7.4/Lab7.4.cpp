#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int v1, v2, s, t;
	printf("Скорость первого автомобиля (км/ч): ");
	scanf_s("%d", &v1);
	printf("Скорость второго автомобиля (км/ч): ");
	scanf_s("%d", &v2);
	printf("Расстояние между автомобилями (км): ");
	scanf_s("%d", &s);
	printf("Сколько часов они едут: ");
	scanf_s("%d", &t);
	printf("Расстояние между автомобилями спустя %dч = %d", t, s + v1 * t + v2 * t);

	return 0;
}

