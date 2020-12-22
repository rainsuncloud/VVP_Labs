#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b;
    printf("a = ");
    scanf_s("%d", &a);
    printf("b = ");
    scanf_s("%d", &b);
    if ((a > 2) && (b <= 3)) {
        printf_s("Высказывание истинно");
    }
    else
        printf_s("Высказывание ложно");

    return 0;
}
