#include <iostream>
using namespace std;

double calc_plus_func(double a, double b);
double calc_minus_func(double a, double b);
double calc_multiply_func(double a, double b);

int main()
{
    double a, b;
    cin >> a >> b;
    cout << calc_plus_func( calc_multiply_func(5, calc_plus_func( calc_minus_func(a, 2), b  )), calc_multiply_func(1000, a)    );
    
    return 0;
}

double calc_plus_func(double a, double b)
{
    return a + b;
}
double calc_minus_func(double a, double b)
{
    return a - b;
}
double calc_multiply_func(double a, double b)
{
    return a * b;
}