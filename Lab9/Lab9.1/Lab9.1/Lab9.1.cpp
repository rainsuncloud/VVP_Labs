#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");

    int a;
    printf("Сколько секунд прошло с начала суток: ");
    scanf_s("%d", &a);
    printf("С начала последней минуты прошло %d секунд", a % 60);

    return 0;
}
