#include <iostream>
#include <cmath>
using namespace std;

double squareFunc(int a, int h);
double squareFunc(int a, int b, int degree);
double squareFunc(double a, double b, double с);

int main()
{
    double a, b, c;
    int h, degree;
    cin >> a >> b >> c >> h >> degree;

    cout << "S по стороне и высоте = " << squareFunc((int) a, h) << endl;
    cout << "S по двум сторонам и углу между ними = " << squareFunc((int) a, (int) b, degree) << endl;
    cout << "S по трем сторонам = " << squareFunc(a, b, c) << endl;


    return 0;
}

double squareFunc(int a, int h)
{
    return 0.5 * a * h;
}

double squareFunc(int a, int b, int degree)
{
    return 0.5 * a * b * sin(degree * M_PI / 180);
}

double squareFunc(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt( p * (p - a) * (p - b) * (p - c) );

}