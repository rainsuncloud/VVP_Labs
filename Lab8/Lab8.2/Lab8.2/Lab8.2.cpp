#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int A, B;
    printf("Введите целые положительные числа, такие, что А > B\nA = ");
    scanf_s("%d", &A);
    printf("B = ");
    scanf_s("%d", &B);
    if ((A > B) && (A > 0) && (B > 0)) {
        printf("На отрезке длины %d размещено %d отрезков длины %d", A, A / B, B);
    }
    else {
        printf("Необходимо  ввести целые положительные числа, при этом A должно быть больше B");
    }
    return 0;
}
