#include <iostream>
#include <cmath>
using namespace std;

double quadFunc(double a, double b, double c, double* root1, double* root2);

int main()
{
    double a, b, c, root1, root2;
    int numberOfRoots;

    cout << "a b c " << endl; cin >> a >> b >> c;

    numberOfRoots = quadFunc(a, b, c, &root1, &root2);
    switch (numberOfRoots)
    {
        case 0:
        {
            cout << "Нет корней";
            break;
        }
        case 1:
        {
            cout << "1 корень: " << root1;
            break;
        }
        case 2:
        {
            cout << "2 корня: " << root1 << " " << root2;
            break;
        }
    }
    
    return 0;
}


double quadFunc(double a, double b, double c, double* root1, double* root2)
{
    double discriminant = b*b - 4 * a * c;
    if (discriminant > 0)
    {
        *root1 = (-b + sqrt(discriminant)) / (2 * a);
        *root2 = (-b - sqrt(discriminant)) / (2 * a);
        return 2;
    }
    else if (0 == discriminant)
    {
        *root1 = -b / (2 * a);
        return 1;
    }
    else
    {
        return 0;
    }
}