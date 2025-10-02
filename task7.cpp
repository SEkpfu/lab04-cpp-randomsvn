#include <iostream>
using namespace std;

double tFahrenheit_func(double tC);
double tKelvin_func(double tC);
void tFahrKelv_func(double tC, double &tF, double &tK);

int main()
{
    double tC1, tC2;
    double tF, tK;

    cin >> tC1 >> tC2;  
    cout << tFahrenheit_func(tC1) << endl;
    cout << tKelvin_func(tC1) << endl;
    tFahrKelv_func(tC2, tF, tK);
    cout << "tF " << tF << "; " << "tK " << tK;
    
    
    return 0;
}

double tFahrenheit_func(double tC)
{
    return (9.0 / 5) * tC + 32;
}

double tKelvin_func(double tC)
{
    return tC + 273;
}

void tFahrKelv_func(double tC, double &tF, double &tK)
{
    tF = (9.0 / 5) * tC + 32;
    tK = tC + 273;
}
