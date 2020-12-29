#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	int N;
	char C;
	char s = 'C';
	char u = 'Ю';
	char v = 'В';
	char z = 'З';

	printf_s("Введите команду для робота: ");
	scanf_s("%d", &N);
	printf_s("Введите исходное направление робота: ");
	scanf_s("%s", &C);

	if (C == s) {
		if (N == 1) {
			printf_s("Направление робота - З");
		}
		else if (N == -1) {
			printf_s("Направление робота - В");
		}
	}
	else if (C == v) {
		if (N == 1) {
			printf_s("Направление робота - С");
		}
		else if (N == -1) {
			printf_s("Направление робота - Ю");
		}
	}
	else if (C == u) {
		if (N == 1) {
			printf_s("Направление робота - В");
		}
		else if (N == -1) {
			printf_s("Направление робота - З");
		}
	}
	else if (C == z) {
		if (N == 1) {
			printf_s("Направление робота - Ю");
		}
		else if (N == -1) {
			printf_s("Направление робота - С");
		}
	}

	return 0;
}
