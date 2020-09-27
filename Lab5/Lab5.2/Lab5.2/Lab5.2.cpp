#include <stdio.h> // подключение библиотек
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus"); // подключение русского языка

    float a, b, c;  // объявление переменных
    printf("Введите координаты точек:\nA = ");
    scanf_s("%f", &a);  // запись значений переменных с клавиатуры
    printf("B = ");
    scanf_s("%f", &b);
    printf("C = ");
    scanf_s("%f", &c);

    printf("Длина отрезка AC = %.2f, BC = %.2f\nAC + BC = %.2f", fabs(c - a), fabs(c - b), fabs(c - a) + fabs(c - b)); // вывод ответа на экран

    return 0;
}
