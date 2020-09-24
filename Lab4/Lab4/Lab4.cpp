﻿#include <stdio.h>
#include <math.h>
#include <locale.h>

int num; // переменная для номера задания, которое нужно выполнить

int main()
{
    setlocale(LC_ALL, "Rus");
    printf("Введите номер задания: ");
    scanf_s("%d", &num); // считывается номер задания

    if (num == 1) { // если нужно выполнить 1 задание
        float a, b;
        printf("Длина прямоугольника = ");
        scanf_s("%f", &a);  // ввод чисел с клавиатуры
        printf("Ширина прямоугольника = ");
        scanf_s("%f", &b);
        printf("Площадь = %.2f\nПериметр = %.2f", a * b, 2 * (a + b)); // вывод результата вычислений на экран
    }
    else if (num == 2) { // если нужно выполнить 1 задание
        float d;
        printf("Диаметр окружности = ");
        scanf_s("%f", &d);  // ввод числа с клавиатуры
        printf("Длина окружности = %.2f", 3.14 * d); // вывод результата вычислений на экран
    }
    else if (num == 3) { // если нужно выполнить 2 задание
        float a, b;
        printf("a = "); 
        scanf_s("%f", &a); // ввод чисел с клавиатуры
        printf("b = ");
        scanf_s("%f", &b);
        printf("Среднее арифметическое a и b = %.2f", (a + b) / 2); // вывод результата вычислений на экран
    }
else if (num == 4) { // если нужно выполнить 3 задание
        float l, k, x, y;
        printf("x = ");
        scanf_s("%f", &l); // ввод чисел с клавиатуры
        printf("y = ");
        scanf_s("%f", &k);
        x = pow(l, 2); // запись квадрата числа в другую переменную
        y = pow(k, 2);

        if (x == 0 || y == 0) { // проверка на выполнение условия
            printf("Требуется ввести два ненулевых числа");
        }
        else {
            printf("x + y = %.2f\nx - y = %.2f\nx * y = %.2f\nx / y = %.2f", x + y, x - y, x * y, x / y); // вывод результата вычислений на экран
        }
    }
    else if (num == 5) { // если нужно выполнить 4 задание
        float m, n, s, t;
        printf("m = ");
        scanf_s("%f", &m);
        printf("n = ");
        scanf_s("%f", &n);
        s = fabs(m); // запись модуля числа в другую переменную
        t = fabs(n);

        if (s == 0 || t == 0) { // проверка на выполнение условия
            printf("Требуется ввести два ненулевых числа");
        }
        else { // если нужно выполнить 5 задание
            printf("m + n = %.2f\nm - n = %.2f\nm * n = %.2f\nm / n = %.2f", s + t, s - t, s * t, s / t); // вывод результата вычислений на экран
        }
    }
    else {
        printf("Задания с таким номером нет, только 1-5"); // если введен неверный номер задачи, программа оповещает об этом и заканчивает работу
    }
    return 0;
}
