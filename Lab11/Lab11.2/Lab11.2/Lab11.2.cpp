#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, c;
    printf("a = ");
    scanf_s("%d", &a);
    printf("b = ");
    scanf_s("%d", &b);
    printf("c = ");
    scanf_s("%d", &c);

    if ((a + b > a + c) && (a + b > b + c)) {
        printf_s("Сумма двух наибольших чисел = %d", a + b);
    }
    else if ((a + c > a + b) && (a + c > b + c)) {
        printf_s("Сумма двух наибольших чисел = %d", a + c);
    }
    else {
        printf_s("Сумма двух наибольших чисел = %d", b + c);
    }
    return 0;
}