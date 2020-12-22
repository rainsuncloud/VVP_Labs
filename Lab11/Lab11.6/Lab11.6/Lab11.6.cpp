#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int x;
    printf("x = ");
    scanf_s("%d", &x);

    if ((x >= 1) && (x < 1000)) {
       if ((x % 2 == 0) && (x < 10))
            printf_s("Однозначное четное число");
       else if (x < 10)
            printf_s("Однозначное нечетное число");
       else if ((x < 100) && (x % 2 == 0))
            printf_s("Двузначное четное число");
       else if (x < 100)
            printf_s("Двузначное нечетное число");
       else if (x % 2 == 0)
           printf_s("Трехзначное четное число");
       else 
           printf_s("Трехзначное нечетное число");
    }
    else
        printf_s("Требуется ввести число в диапазоне 1 - 999");

    return 0;
}