#ifndef INTEGRATION_H
#define INTEGRATION_H
#include <integratedfunction.h>


class Integration
{
public:
    Integration();
    virtual double integrationResult() = 0;
protected:
    double a;
    double b;
    int n;
    IntegratedFunction *func;
};

#endif // INTEGRATION_H
