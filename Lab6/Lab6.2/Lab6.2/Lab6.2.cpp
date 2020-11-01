#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B, C;
    printf("A = ");
    scanf_s("%d", &A);
    printf("B = ");
    scanf_s("%d", &B);
    printf("C = ");
    scanf_s("%d", &C);

    int a = A;
    int b = B;
    A = C;
    B = a;
    C = b;

    printf("Новые значения:\nA = %d\nB = %d\nC = %d", A, B, C);

    return 0;
}