#include <stdio.h>
#include <math.h>
#include <locale.h>

int num;

int main()
{
    setlocale(LC_ALL, "Rus");
    printf("Введите номер задания: ");
    scanf_s("%d", &num);

    if (num == 1) {
        float a, b;
        printf("Длина прямоугольника = ");
        scanf_s("%f", &a);
        printf("Ширина прямоугольника = ");
        scanf_s("%f", &b);
        printf("Площадь = %.2f\nПериметр = %.2f", a * b, 2 * (a + b));
    }
    else if (num == 2) {
        float d;
        printf("Диаметр окружности = ");
        scanf_s("%f", &d);
        printf("Длина окружности = %.2f", 3.14 * d);
    }
    else if (num == 3) {
        float a, b;
        printf("a = ");
        scanf_s("%f", &a);
        printf("b = ");
        scanf_s("%f", &b);
        printf("Среднее арифметическое a и b = %.2f", (a + b) / 2);
    }
    else if (num == 4) {

    }
    else if (num == 5) {

    }
    else {
        printf("Задания с таким номером нет, только 1-5");
    }
    return 0;
}


