#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    float A, X, Y;
    printf("Введите любое неотрицательное число: ");
    scanf_s("%f", &X);
    printf("Введите стоимость конфет за %.2f кг (руб): ", X);
    scanf_s("%f", &A);
    printf("Сколько кг конфет вы хотите купить: ");
    scanf_s("%f", &Y);
    if ((X >= 0) && (A >= 0) && (Y >= 0)) {
        printf("Стоимость конфет за 1 кг - %.2f руб", A / X);
        printf("\nСтоимость конфет за %.2f кг - %.2f руб", Y, Y * (A / X));
    }
    else {
        printf("Требуется ввести неотрицательные числа!");
    }
    return 0;
}
