#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    printf("Размер файла (байт): ");
    scanf_s("%d", &a);
    printf("Размер файла (Кбит): %d", a / 1024);
    
    return 0;
}

