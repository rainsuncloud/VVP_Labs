#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;

	printf_s("Какое сегодня число?\n");
	scanf_s("%d", &a);
	printf_s("Какой по счету месяц?\n");
	scanf_s("%d", &b);

	if ((a > 0) && (a < 32) && (b > 0) && (b < 13)) {
		if (a == 1) {
			printf("Первое");
		}
		else if (a == 2) {
			printf("Второе");
		}
		else if (a == 3) {
			printf("Третье");
		}
		else if (a == 4) {
			printf("Четвертое");
		}
		else if (a == 5) {
			printf("Пятое");
		}
		else if (a == 6) {
			printf("Шестое");
		}
		else if (a == 7) {
			printf("Седьмое");
		}
		else if (a == 8) {
			printf("Восьмое");
		}
		else if (a == 9) {
			printf("Девятое");
		}
		else if (a == 10) {
			printf("Десятое");
		}
		else if (a == 11) {
			printf("Одиннадцатое");
		}
		else if (a == 12) {
			printf("Двенадцатое");
		}
		else if (a == 13) {
			printf("Тринадцатое");
		}
		else if (a == 14) {
			printf("Четырнадцатое");
		}
		else if (a == 15) {
			printf("Пятнадцатое");
		}
		else if (a == 16) {
			printf("Шестнадцатое");
		}
		else if (a == 17) {
			printf("Семнадцатое");
		}
		else if (a == 18) {
			printf("Восемнадцатое");
		}
		else if (a == 19) {
			printf("Девятнадцатое");
		}
		else if (a == 20) {
			printf("Двадцатое");
		}
		else if (a == 21) {
			printf("Двадцать первое");
		}
		else if (a == 22) {
			printf("Двадцать второе");
		}
		else if (a == 23) {
			printf("Двадцать третье");
		}
		else if (a == 24) {
			printf("Двадцать четвертое");
		}
		else if (a == 25) {
			printf("Двадцать пятое");
		}
		else if (a == 26) {
			printf("Двадцать шестое");
		}
		else if (a == 27) {
			printf("Двадцать седьмое");
		}
		else if (a == 28) {
			printf("Двадцать восьмое");
		}
		else if (a == 29) {
			printf("Двадцать девятое");
		}
		else if (a == 30) {
			printf("Тридцатое");
		}
		else if (a == 31) {
		printf("Тридцать первое");
		}
		if (b == 1) {
			char m[] = "января";
			printf_s("%s", m);
		}
		else if (b == 2) {
			char m[] = " февраля";
			printf_s("%s", m);
		}
		else if (b == 3) {
			char m[] = " марта";
			printf_s("%s", m);
		}
		else if (b == 4) {
			char m[] = " апреля";
			printf_s("%s", m);
		}
		else if (b == 5) {
			char m[] = " мая";
			printf_s("%s", m);
		}
		else if (b == 6) {
			char m[] = " июня";
			printf_s("%s", m);
		}
		else if (b == 7) {
			char m[] = " июля";
			printf_s("%s", m);
		}
		else if (b == 8) {
			char m[] = " августа";
			printf_s("%s", m);
		}
		else if (b == 9) {
			char m[] = " сентября";
			printf_s("%s", m);
		}
		else if (b == 10) {
			char m[] = " октября";
			printf_s("%s", m);
		}
		else if (b == 11) {
			char m[] = " ноября";
			printf_s("%s", m);
		}
		else if (b == 12) {
			char m[] = " декабря";
			printf_s("%s", m);
		}
	}
	else
		printf_s("Трубуется ввести числа в диапазоне 1-31 и 1-12");

	return 0;
}