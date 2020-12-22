#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int x, y;
    printf("Координата точки по x = ");
    scanf_s("%d", &x);
    printf("Координата точки по y = ");
    scanf_s("%d", &y);

    if ((x > 0) && (y > 0))
        printf_s("Точка лежит в I четверти");
    else if ((x < 0) && (y > 0))
        printf_s("Точка лежит во II четверти");
    else if ((x < 0) && (y < 0))
        printf_s("Точка лежит в III четверти");
    else if ((x > 0) && (y < 0))
        printf_s("Точка лежит в IV четверти");
    else
        printf_s("Точка не должка лежать на координатных осях");
    
    return 0;
}