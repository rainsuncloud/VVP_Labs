#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b;
    printf("a = ");
    scanf_s("%d", &a);
    printf("b = ");
    scanf_s("%d", &b);

    if ((a != b) && (a > b)) {
        b = a;
        printf_s("a = %d\nb = %d", a, b);
    }
    else if ((a != b) && (a < b)) {
        a = b;
        printf_s("a = %d\nb = %d", a, b);
    }
    else {
        a = 0;
        b = 0;
        printf_s("a = %d\nb = %d", a, b);
    }
    return 0;
}