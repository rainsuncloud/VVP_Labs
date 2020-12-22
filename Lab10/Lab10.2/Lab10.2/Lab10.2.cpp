#include <stdio.h>
#include <locale.h>

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
    if ((a < b) && (b < c)) {
        printf_s("Высказывание «Справедливо двойное неравенство A < B < C» истинно");
    }
    else
        printf_s("Высказывание «Справедливо двойное неравенство A < B < C» ложно");

    return 0;
}
