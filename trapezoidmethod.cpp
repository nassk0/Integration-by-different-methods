#include "trapezoidmethod.h"


TrapezoidMethod::TrapezoidMethod()
{

}

double TrapezoidMethod::integrationResult()
{
    double h = (b - a)/n;
    double x[n+1];
    double f[n+1];
    double sum = 0;
    for (int i = 0; i < n+1; i++)
    {
        x[i] = a + i*h;
        f[i]=func->f(x[i]);
        if (i != 0 && i != n)
            sum +=f[i];

    }
    return h/2 * (f[0] + f[n] + 2*sum);
}
