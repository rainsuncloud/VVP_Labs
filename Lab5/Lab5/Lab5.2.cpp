#include <stdio.h> // подключение библиотек
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus"); // подключение русского €зыка

    float a, b, c;  // объ€вление переменных
    printf("¬ведите координаты точек:\nA = ");
    scanf_s("%f", &a);  // запись значений переменных с клавиатуры
    printf("B = ");
    scanf_s("%f", &b);
    printf("C = ");
    scanf_s("%f", &c);

    printf("ƒлина отрезка AC = %.2f, BC = %.2f\nAC + BC = %.2f", fabs(c - a), fabs(c - b), fabs(c - a) + fabs(c - b)); // вывод ответа на экран

    return 0;
}
