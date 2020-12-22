#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, p1, p2, p3;
    printf("a = ");
    scanf_s("%d", &a);

    if ((a / 10000 == 0) && (abs(a / 1000) > 0)) {
        p1 = a / 1000;
        p2 = (a / 100) % 10;
        p3 = (a / 10) % 100;
        a = a % 10;

        if ((p1 == a) && (p2 == p3)) {
            printf_s("Высказывание «Данное число читается одинаково слева направо и справа налево» истинно");
        }
        else
            printf_s("Высказывание «Данное число читается одинаково слева направо и справа налево» ложно");
    }
    else
        printf_s("Требуется ввести четырехзначное число");
    return 0;
}
