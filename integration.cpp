#include "integration.h"

Integration::Integration()
{
    func = new IntegratedFunction();
    a = func->getMin();
    b = func->getMax();
    n = 100;
}
