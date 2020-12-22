#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int x;
    printf("x = ");
    scanf_s("%d", &x);

    if ((x > 0) && (x % 2 == 0))
        printf_s("Положительное четное число");
    else if (x > 0)
        printf_s("Положительное нечетное число");
    else if ((x < 0) && (x % 2 == 0))
        printf_s("Отрицательное четное число");
    else if (x < 0)
        printf_s("Отрицательное нечетное число");
    else
        printf_s("Нулевое число");

    return 0;
}