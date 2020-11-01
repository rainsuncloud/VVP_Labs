#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, a, b;
    printf("A = ");
    scanf_s("%d", &A);

    a = A * A * A;
    b = a * a;
    A = b * b * a;

    printf("A^15 = %d", A);

    return 0;
}
