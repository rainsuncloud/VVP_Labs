#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;

	printf_s("Сколько учебных заданий?\n");
	scanf_s("%d", &n);

	if ((a > 9) && (a < 41)) {
        if (n / 10 == 1)
            switch (n) {
            case 10:
                printf_s("десять учебных заданий. \n");
                break;
            case 11:
                printf_s("одинадцать учебных заданий.\n");
                break;
            case 12:
                printf_s("двенадцать учебных заданий.\n");
                break;
            case 13:
                printf_s("тринадцать учебных заданий.\n");
                break;
            case 14:
                printf_s("четырнадцать учебных заданий.\n");
                break;
            case 15:
                printf_s("пятнадцать учебных заданий.\n");
                break;
            case 16:
                printf_s("шестнадцать учебных заданий.\n");
                break;
            case 17:
                printf_s("семнадцать учебных заданий.\n");
                break;
            case 18:
                printf_s("восемнадцать учебных заданий.\n");
                break;
            case 19:
                printf_s("девятнадцать учебных заданий.\n");
                break;
            }
        else {
            switch (n / 10) {
            case 2:
                printf_s("двадцать ");
                break;
            case 3:
                printf_s("тридцать ");
                break;
            case 4:
                printf_s("сорок ");
                break;
            }

            switch (n % 10) {
            case 1:
                printf_s("одно ");
                break;
            case 2:
                printf_s("два ");
                break;
            case 3:
                printf_s("три ");
                break;
            case 4:
                printf_s("четыре ");
                break;
            case 5:
                printf_s("пять ");
                break;
            case 6:
                printf_s("шесть ");
                break;
            case 7:
                printf_s("семь ");
                break;
            case 8:
                printf_s("восемь ");
                break;
            case 9:
                printf_s("девять ");
                break;
            }

            switch (n % 10) {
            case 0:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                printf_s("учебных заданий.\n");
                break;
            case 1:
                printf_s("учебное задание.\n");
                break;
            case 2:
            case 3:
            case 4:
                printf_s("учебных задания.\n");
                break;
            }
        }
	}
	else
		printf_s("Трубуется ввести число  от 10 до 40");

	return 0;
}