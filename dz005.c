#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    double x, y, z, w;
    printf("Условие: вычислить значение w.\n");
    printf("Введите значения x, y и z.\n");
    printf("w = |cos(x) - cos(y)|^(1 + 2*sin^2(y)) * ");
    printf("(1 + z + z^2/2 + z^3/3 + z^4/4)\n\n");
    printf("Введите x: ");
    scanf("%lf", &x);
    printf("Введите y: ");
    scanf("%lf", &y);
    printf("Введите z: ");
    scanf("%lf", &z);
    w = pow(fabs(cos(x) - cos(y)), 1 + 2 * pow(sin(y), 2)) *
        (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);

    printf("\nВведено: x = %.4f, y = %.4f, z = %.6f\n", x, y, z);
    printf("Получаем: w = %.4f\n", w);

    return 0;
}