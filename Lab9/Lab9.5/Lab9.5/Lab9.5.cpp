#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int a;

	printf_s("Введите год \n");
	scanf_s("%d", &a);

	if (a > 0)
	{
		printf_s("%d год относится к %d столетию", a, (a - 1) / 100 + 1);
	}
	else
		printf_s("Требуется ввести целое положительное число");

	return 0;
}