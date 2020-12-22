#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, c, ab, ac;
    printf("a = ");
    scanf_s("%d", &a);
    printf("b = ");
    scanf_s("%d", &b);
    printf("c = ");
    scanf_s("%d", &c);

    ab = abs(a - b);
    ac = abs(a - c);

    if (ab > ac) {
        printf_s("Точка с (%d) расположена ближе к точке а. Расстояние между ними = %d", c, ac);
    }
    else {
        printf_s("Точка b (%d) расположена ближе к точке а. Расстояние между ними = %d", b, ab);
    }
    return 0;
}