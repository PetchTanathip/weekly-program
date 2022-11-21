#include <stdio.h>

double sqroot(double);

int main()
{
    double s;
    scanf("%lf", &s);
    double x = sqroot(s);
    printf("x = %.7f", x);
    return 0;
}

double sqroot(double s)
{
    double x0 = s / 2.0;
    double x1;
    double precision = .000001;
    double delta = 1;
    while (delta > precision)
    {
        x1 = .5 * (x0 + s / x0);
        delta = x0 - x1;
        x0 = x1;
    }

    return x1;
}