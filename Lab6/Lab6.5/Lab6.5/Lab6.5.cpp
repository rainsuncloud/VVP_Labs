#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int x, y;
    printf("x = ");
    scanf_s("%d", &x);
    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
    printf("y = %d", y);

    return 0;
}
