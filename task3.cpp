#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

double function(double x);

int main()
{
    
    double a, b;
    cout << "a" << " " << "b" << endl;
    cin >> a >> b;
    
    cout << 12.5 + function(2) - function(4) * function(10) + function(a) - function(b) + function(a * b) << endl;

    double x[7], y[7];
    cout << "7 чисел для массива" << endl;
    for (int i = 0; i < 7; i++)
    {
        double elem;
        cin >> elem;
        x[i] = elem;
    }

    int counter = 0;
    double maximum = __DBL_MIN__;
    for (int i = 0; i < 7; i++)
    {
        y[i] = function(x[i]);
        counter += (y[i] < 0);
        maximum = max(maximum, y[i]);

    }
    cout << "Количество отрицательных элементов в массиве y " << counter << endl;
    cout << "Максимальный элемент " << maximum << endl;

    return 0;
}

double function(double x)
{
    if (x < 0)
    {
        return 2 + 1.0/3;
    }
    else if (0 <= x && x < 2 * M_PI)
    {
        return x * x - 3;
    }
    else
    {
        return double(1 + x*x*x) / (2 * x);
    }
}