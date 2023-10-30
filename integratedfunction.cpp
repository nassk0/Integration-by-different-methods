#include "integratedfunction.h"

IntegratedFunction::IntegratedFunction()
{
    a = 0;
    b = 5;
}

double IntegratedFunction::f(double x)
{
    return x/(x*x*x*x+4);

}

double IntegratedFunction::getMax()
{
    return b;
}

double IntegratedFunction::getMin()
{
   return a;
}
