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
			char d[] = "Первое";
		}
		else if (a == 2) {
			char d[] = "Второе";
		}
		else if (a == 3) {
			char d[] = "Третье";
		}
		else if (a == 4) {
			char d[] = "Четвертое";
		}
		else if (a == 5) {
			char d[] = "Пятое";
		}
		else if (a == 6) {
			char d[] = "Шестое";
		}
		else if (a == 7) {
			char d[] = "Седьмое";
		}
		else if (a == 8) {
			char d[] = "Восьмое";
		}
		else if (a == 9) {
			char d[] = "Девятое";
		}
		else if (a == 10) {
			char d[] = "Десятое";
		}
		else if (a == 11) {
			char d[] = "Одиннадцатое";
		}
		else if (a == 12) {
			char d[] = "Двенадцатое";
		}
		else if (a == 13) {
			char d[] = "Тринадцатое";
		}
		else if (a == 14) {
			char d[] = "Четырнадцатое";
		}
		else if (a == 15) {
			char d[] = "Пятнадцатое";
		}
		else if (a == 16) {
			char d[] = "Шестнадцатое";
		}
		else if (a == 17) {
			char d[] = "Семнадцатое";
		}
		else if (a == 18) {
			char d[] = "Восемнадцатое";
		}
		else if (a == 19) {
			char d[] = "Девятнадцатое";
		}
		else if (a == 20) {
			char d[] = "Двадцатое";
		}
		else if (a == 21) {
			char d[] = "Двадцать первое";
		}
		else if (a == 22) {
			char d[] = "Двадцать второе";
		}
		else if (a == 23) {
			char d[] = "Двадцать третье";
		}
		else if (a == 24) {
			char d[] = "Двадцать четвертое";
		}
		else if (a == 25) {
			char d[] = "Двадцать пятое";
		}
		else if (a == 26) {
			char d[] = "Двадцать шестое";
		}
		else if (a == 27) {
			char d[] = "Двадцать седьмое";
		}
		else if (a == 28) {
			char d[] = "Двадцать восьмое";
		}
		else if (a == 29) {
			char d[] = "Двадцать девятое";
		}
		else if (a == 32) {
			char d[] = "Тридцатое";
		}
		else if (a == 31) {
			char d[] = "Тридцать первое";
		}
		if (b == 1) {
			char m[] = "января";
		}
		else if (b == 2) {
			char m[] = "февраля";
		}
		else if (b == 3) {
			char m[] = "марта";
		}
		else if (b == 4) {
			char m[] = "апреля";
		}
		else if (b == 5) {
			char m[] = "мая";
		}
		else if (b == 6) {
			char m[] = "июня";
		}
		else if (b == 7) {
			char m[] = "июля";
		}
		else if (b == 8) {
			char m[] = "августа";
		}
		else if (b == 9) {
			char m[] = "сентября";
		}
		else if (b == 10) {
			char m[] = "октября";
		}
		else if (b == 11) {
			char m[] = "ноября";
		}
		else if (b == 12) {
			char m[] = "декабря";
		}
		printf_s("%s %s", d, m);
	}
	else
		printf_s("Трубуется ввести числа в диапазоне 1-31 и 1-12");

	return 0;
}