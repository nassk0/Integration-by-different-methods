#ifndef INTEGRATEDFUNCTION_H
#define INTEGRATEDFUNCTION_H
#include <math.h>


class IntegratedFunction
{
public:
    IntegratedFunction();
    double f(double x);
    double getMin();
    double getMax();
private:
    double a;
    double b;
};

#endif // INTEGRATEDFUNCTION_H
