#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, s, k;

	printf_s("Сторона прямоугольника А = \n");
	scanf_s("%d", &a);
	printf_s("Сторона прямоугольника B = \n");
	scanf_s("%d", &b);
	printf_s("Сторона квадрата C = \n");
	scanf_s("%d", &c);

	if ((a > 0) && (b < 366) && (c > 0))
	{
		k = (a / c) * (b / c);
		s = (a * b) - (k * c * c);
		printf_s("Квадрат со стороной %d уместится внутри прямоуголька %d раз(а)\nПлощадь незанятой части прямоугольника = %d", c, k, s);
	}
	else
		printf_s("Требуется ввести числа больше 0");

	return 0;
}