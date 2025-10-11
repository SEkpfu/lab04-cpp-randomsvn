#include <iostream>
using namespace std;

double averageSumFunc(double a, double b);
double averageSumFunc(double a, double b, double c);
double averageSumFunc(double a, double b, double c, double d);

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    
    cout << "Среднее арифметическое двух чисел " << averageSumFunc(a, b) << endl;
    cout << "Среднее арифметическое трех чисел " << averageSumFunc(a, b, c) << endl;
    cout << "Среднее арифметическое четырех чисел " << averageSumFunc(a, b, c, d) << endl;

    return 0;
}


double averageSumFunc(double a, double b)
{
    return (a + b) / 2;
}
double averageSumFunc(double a, double b, double c)
{
    return (a + b + c) / 3;
}
double averageSumFunc(double a, double b, double c, double d)
{
    return (a + b + c + d) / 4;
}