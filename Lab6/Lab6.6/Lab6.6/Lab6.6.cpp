#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, a;
    printf("A = ");
    scanf_s("%d", &A);

    a = A * A;
    A = a * a;
    a = A * A;

    printf("A^8 = %d", a);

    return 0;
}