#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    printf("Условие: три груза A, B и C можно погрузить,");
    printf(" если вес каждого из них кратен 5.\n\n");
    printf("Введите вес груза A: ");
    scanf("%d", &A);
    printf("Введите вес груза B: ");
    scanf("%d", &B);
    printf("Введите вес груза C: ");
    scanf("%d", &C);
    if (A % 5 == 0 && B % 5 == 0 && C % 5 == 0)
        printf("Получаем: погрузка разрешена.\n");
    else
        printf("Получаем: погрузка запрещена.\n");
    return 0;
}