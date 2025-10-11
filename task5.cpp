#include <iostream>
using namespace std;

int factorialFunc(int n);
double powerFunc(int x, int n);

int main()
{
    int N, M;
    cin >> N >> M;
    cout << double( factorialFunc(N) * factorialFunc(M) ) / factorialFunc((N+M)) << endl;

    cout << powerFunc(2, 3) << endl;
    cout << powerFunc(2, 0) << endl;
    cout << powerFunc(2, -3) << endl;
    cout << powerFunc(0, 3) << endl;
}

int factorialFunc(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }

        return s;
}
double powerFunc(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int s = x;
    for (int i = 1; i < abs(n); i++)
    {
        s *= x;
    }
    if (n > 0)
    {
        return s;
    }
    else 
    {
        return 1.0 / s;
    }
    
    
}