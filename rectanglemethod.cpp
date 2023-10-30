#include "rectanglemethod.h"

RectangleMethod::RectangleMethod()
{


}

double RectangleMethod::integrationResult()
{
    double h = (b - a)/n;
    double x[n];
    double f[n];
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        x[i] = a + i*h;
        f[i]=func->f(x[i]);
        sum +=f[i];
    }
    return h * sum;
}
