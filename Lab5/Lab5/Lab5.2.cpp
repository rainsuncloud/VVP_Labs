#include <stdio.h> // ����������� ���������
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus"); // ����������� �������� �����

    float a, b, c;  // ���������� ����������
    printf("������� ���������� �����:\nA = ");
    scanf_s("%f", &a);  // ������ �������� ���������� � ����������
    printf("B = ");
    scanf_s("%f", &b);
    printf("C = ");
    scanf_s("%f", &c);

    printf("����� ������� AC = %.2f, BC = %.2f\nAC + BC = %.2f", fabs(c - a), fabs(c - b), fabs(c - a) + fabs(c - b)); // ����� ������ �� �����

    return 0;
}
