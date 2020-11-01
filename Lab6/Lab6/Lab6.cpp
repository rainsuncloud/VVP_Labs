#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B;
    printf("A = ");
    scanf_s("%d", &A);
    printf("B = ");
    scanf_s("%d", &B);

    int p = A;
    A = B;
    B = p;

    printf("Новые значения:\nA = %d\nB = %d", A, B);

    return 0;
}
