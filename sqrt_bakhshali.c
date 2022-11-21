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
    int n=0;
    int power_n = 0;
    for (int i=(int)s; i>0; i--)
    {
        for (int j=0; j<i; j++)
        {
            if (j*j == i)
            {
               power_n = i;
               n = j;
               break;
            }
        }

        if (power_n > 0)
            break;
    }

    double d = s - power_n;
    double P = d/(2.0*n);
    double A = n + P;
    double root_s = A - ((P*P)/(2.0*A));

    return root_s;
}