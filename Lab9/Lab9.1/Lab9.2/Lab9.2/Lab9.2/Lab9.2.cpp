#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int k;

	printf_s("Сколько дней прошло с начала года?\n");
	scanf_s("%d", &k);

	if ((k > 0) && (k < 366))
	{
		printf_s("Сегодня %d день недели (0 - воскресенье, ..., 6 - суббота)", k % 7);
	}
	else
		printf_s("Требуется ввести число в диапазоне 1 - 365");

	return 0;
}