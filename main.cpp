#include <QCoreApplication>
#include "integratedfunction.h"
#include "simpsonamethod.h"
#include "trapezoidmethod.h"
#include "rectanglemethod.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    SimpsonMethod *p = new SimpsonMethod();
    TrapezoidMethod *t = new TrapezoidMethod();
    RectangleMethod *r = new RectangleMethod();

    cout << p->integrationResult() << endl;
    cout << t->integrationResult() << endl;
    cout << r->integrationResult();

    return a.exec();
}
