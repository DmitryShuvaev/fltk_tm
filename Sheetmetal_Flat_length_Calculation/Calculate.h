#ifndef CALCULATE_H
#define CALCULATE_H
#include <cmath>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;
class Calculate
{
    public:
        Calculate();
        virtual ~Calculate();

double BA_cal(double A,double R,double K,double T);
void add(double BA);
void add_LL(double BA);
double sum(const vector<double>&v);
double cal_LL(double L,double A,double R,double T,int r_side_1_or_2);
double cal_tan(double A,double R,double T);
string sum_v(const vector<double>&v);
string LLBA_(string LL,string BA);
string remove_trailing_zeroes(string s);
void reset_BA_LL();
void setK();
void remove_from_vector_value(vector<double>&v);
//variables
vector<double>BA_v;
vector<double>LL_v;
int radiusv,materialv,r_side_1_or_2;
double K=0.4;
//pointer to last element
double LastOne;
};

#endif // CALCULATE_H
