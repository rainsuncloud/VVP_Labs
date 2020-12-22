#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    printf("a = ");
    scanf_s("%d", &a);
    if ((a % 2 == 0) && (a > 9) && (a < 100)) {
        printf_s("Высказывание «Данное число является четным двузначным» истинно");
    }
    else
        printf_s("Высказывание «Данное число является четным двузначным» ложно");

    return 0;
}
