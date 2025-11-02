#ifndef CALKULATE_H
#define CALKULATE_H
#include <vector>
#include <iostream>
using namespace std;
struct Mesures_values
{
    double top,low,nom;
};

class Calkulate
{
    public:
        Calkulate();
        virtual ~Calkulate();
void print_i(vector<Mesures_values>v)
{
    for (Mesures_values i: v)
    std::cout << i.nom << ' '<< i.top << ' '<< i.low << ' '<<endl;
}
void clear_vector()
{
    // Erase all elements
    incr_values.erase(incr_values.begin(), incr_values.end());
    decr_values.erase(decr_values.begin(), decr_values.end());
}
double sum_of_top_values_encr_links();
double sum_of_low_values_decrising_links();
double sum_of_low_values_encr_links();
double sum_of_top_values_decr_links();
double top_value_of_end_link();
double low_value_of_end_link();
Mesures_values end_chain();
vector<Mesures_values>incr_values;
vector<Mesures_values>decr_values;
};

#endif // CALKULATE_H
