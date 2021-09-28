#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d, x, y, i;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    d = (b *b - 4 *a *c);
    if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 *a);
        y = (-b - sqrt(d)) / (2 *a);
        printf("x1 = %lf x2 %lf", x, y);
    }
    else if (d == 0)
    {
        x = (-b / (2 *a));
        printf("x1,2 %lf", x);
    }
    else
    {
        printf("bodit shiidgui");
    }

    return 0;
}
