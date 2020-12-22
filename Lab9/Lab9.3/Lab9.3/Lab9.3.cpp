#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int k, n;

	printf_s("Сколько дней прошло с начала года?\n");
	scanf_s("%d", &k);
	printf_s("Какой день недели был 1 января?\n");
	scanf_s("%d", &n);

	if ((k > 0) && (k < 366) && (n > 0) && (n < 8))
	{
		printf_s("Сегодня %d день недели (1 - понедельник, ..., 7 - воскресенье)", ((k + n - 2) % 7 + 1));
	}
	else
		printf_s("Требуется ввести числа в диапазоне 1-365 и 1-7");

	return 0;
}