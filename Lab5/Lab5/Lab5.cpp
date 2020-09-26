#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    float x1, x2, y1, y2;

    printf("Введите координаты точки А:\nx1 = ");
    scanf_s("%f", &x1);
    printf("y1 = ");
    scanf_s("%f", &y1);

    printf("Введите координаты точки B:\nx2 = ");
    scanf_s("%f", &x2);
    printf("y2 = ");
    scanf_s("%f", &y2);

    printf("Расстояние между точками А и В = %.2f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    
    return 0;
}
