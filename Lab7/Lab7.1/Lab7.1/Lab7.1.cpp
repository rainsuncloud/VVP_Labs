#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    float a;
    printf("Угол a = ");
    scanf_s("%f", &a);

    if ((a >= 0) && (a <= 360)) {
        printf("Значение угла а в радианах = %.2f pi", a / 180);
    }
    else {
        printf("Требуется ввести значение угла от 0 до 360");
    }
    return 0;
}
