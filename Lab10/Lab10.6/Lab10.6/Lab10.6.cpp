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

    if ((a > 0) && (b > 0) && (c > 0)) {
        a = a * a;
        b = b * b;
        c = c * c;

        if ((a + b == c) || (a + c == b) || (b + c == a)) {
            printf_s("Высказывание «Треугольник со сторонами a, b, c является прямоугольным» истинно");
        }
        else
            printf_s("Высказывание «Треугольник со сторонами a, b, c является прямоугольным» ложно");
    }
    else
        printf_s("Требуется ввести положительные числа");
    return 0;
}