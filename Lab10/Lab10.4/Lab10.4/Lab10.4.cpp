﻿#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, p1, p2, p3;
    printf("a = ");
    scanf_s("%d", &a);

    if ((a / 1000 == 0) && (abs(a / 100) > 0)) {
        p1 = a / 100;
        p2 = (a / 10) % 10;
        p3 = a % 10;

        if (((p1 < p2) && (p2 < p3)) || ((p1 > p2) && (p2 > p3))) {
            printf_s("Высказывание «Цифры данного числа образуют возрастающую или убывающую последовательность» истинно");
        }
        else
            printf_s("Высказывание «Цифры данного числа образуют возрастающую или убывающую последовательность» ложно");
    }
    else
        printf_s("Требуется ввести трехзначное число");
    return 0;
}
