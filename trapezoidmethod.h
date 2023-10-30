#ifndef TRAPEZOIDMETHOD_H
#define TRAPEZOIDMETHOD_H
#include <integration.h>

class TrapezoidMethod:public Integration
{
public:
    TrapezoidMethod();
    double integrationResult();
};

#endif // TRAPEZOIDMETHOD_H
