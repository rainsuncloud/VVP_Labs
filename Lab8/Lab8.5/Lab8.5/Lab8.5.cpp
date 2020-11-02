#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B;
    printf("Введите трехзначное число: ");
    scanf_s("%d", &A);
    if (((A >= 100) && (A < 1000)) || ((A <= -100) && (A > -1000))) {
        B = A / 100;
        A = (A - B * 100) * 10 + B;
        printf("При перемещении первой цифры назад получено число %d", A);
    }
    else {
        printf("Необходимо  ввести трехзначное число");
    }
    return 0;
}
