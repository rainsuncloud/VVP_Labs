#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B;
    printf("Введите двузначное число: ");
    scanf_s("%d", &A);
    if (((A >= 10) && (A < 100)) || ((A <= -10) && (A > -100))) {
        B = A / 10;
        A = A - B * 10;
        A = A * 10 + B;
        printf("При переставлении цифр местами получено число %d", A);
    }
    else {
        printf("Необходимо  ввести двузначное число");
    }
    return 0;
}