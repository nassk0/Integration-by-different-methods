#include "simpsonamethod.h"
#include <iostream>

using namespace std;

SimpsonMethod::SimpsonMethod()
{

}

double SimpsonMethod::integrationResult()
{
    double x[2*n+1];
    double f[2*n+1];
    double sumEven = 0;
    double sumNotEven = 0;
    double h = (b - a) / (2 * n);

    for (int i = 0; i < 2*n+1; i++)
    {
        x[i] = a + i * h;
        f[i]=func->f(x[i]);
        if (i!=0 && i%2 == 0 && i != 2*n)
            sumEven +=f[i];
        if (i!=0 && i%2 != 0 && i != 2*n)
            sumNotEven +=f[i];

    }
    return h / 3 * (f[0] + 4 * sumNotEven + 2 * sumEven + f[2*n]);

}


