#ifndef RECTANGLEMETHOD_H
#define RECTANGLEMETHOD_H
#include <integration.h>

class RectangleMethod:public Integration
{
public:
    RectangleMethod();
    double integrationResult();
};

#endif // RECTANGLEMETHOD_H
