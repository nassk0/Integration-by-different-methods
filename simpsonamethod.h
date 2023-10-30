#ifndef PARABOLAMETHOD_H
#define PARABOLAMETHOD_H
#include <integration.h>

class SimpsonMethod:public Integration
{
public:
    SimpsonMethod();
    double integrationResult();
};

#endif // PARABOLAMETHOD_H
