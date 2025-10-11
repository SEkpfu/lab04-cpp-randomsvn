#include <iostream>
using namespace std;

bool f(double x, double &result);

int main()
{
    double a, b, result;
    cin >> a >> b;

    double val1, val2, val3;
    if (f(2, val1) && f(0, val2) && f(a, val3))
    {
        cout << val1 - val2 * val3 << endl;
    }
    else
    {
        cout << "выражение невозможно вычислить" << endl;
    }

    if (f(2 * a, val1) && f(6, val2) && f(a * b, val3))
    {
        cout << val1 - val2 + val3 << endl;
    }
    else 
    {
        cout << "выражение невозможно вычислить" << endl;
    }

}

bool f(double x, double &result)
{
    if (0 == x || 1 == x)
    {
        return false;
    }
    if (x <= 2)
    {
        result = ( 2 * x + (1.0 / (1 - x)) ) / (3 * x);
    }
    else if (2 < x && x <= 5)
    {
        result = 10 + 2.0/7;
    }
    else
    {
        result = (-3 -x);
    }
    return true;
}