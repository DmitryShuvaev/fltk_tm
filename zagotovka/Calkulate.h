#ifndef CALKULATE_H
#define CALKULATE_H
#include <iostream>
using namespace std;
class Calkulate
{
    public:
        Calkulate();
        virtual ~Calkulate();
double LD(double D,double L);
double LD_less4(double D,double L);
double LD_less8(double D,double L);
double LD_less12(double D,double L);
double LD_less20(double D,double L);
};

#endif // CALKULATE_H
