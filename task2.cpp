#include <iostream>
#include <cmath>
using namespace std;


double distFunc(double x1, double y1, double x2, double y2);
double squareTriangle(double x1, double y1, double x2, double y2, double x3, double y3);
int main()
{
    double x1, x2, y1, y2;
    double side1, side2, side3, side4;
    cout << "x1, y1, x2, y2:" << endl;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "a) R = " << distFunc(x1, y1, x2, y2) << endl;

    cout << "b) ";
    cout << distFunc(0, 0, x1, y1) << "\t" << distFunc(0, 0, x2, y2) << endl;

    double x3, y3;
    cout << "Координаты 3-й точки:" << endl;
    cin >> x3 >> y3;
    side1 = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
    side2 = sqrt( (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2) );
    side3 = sqrt( (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1) );

    cout << "c) " << squareTriangle(x1, y1, x2, y2, x3, y3) << endl;

    double x4, y4;
    cout << "Координаты 4-й точки:" << "\n"; cin >> x4 >> y4;

    cout << squareTriangle(x1, y1, x2, y2, x3, y3) + squareTriangle(x1, y1, x3, y3, y4, y4);




}

double distFunc(double x1, double y1, double x2, double y2)
{
    return sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
}
double squareTriangle(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double side1 = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
    double side2 = sqrt( (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2) );
    double side3 = sqrt( (x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1) );
    double p = (side1 + side2 + side3) / 2;
    return sqrt( p * (p - side1) * (p - side2) * (p - side3) );
}