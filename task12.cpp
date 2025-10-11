#include <iostream>
using namespace std;

int CheckerFunc(int a);
int CheckerFunc(int a1, int a2, int a3, int a4, int a5, int a6);
int CheckerFunc(int a1, int a2);

int main()
{
    int number, n1, n2, n3, n4, n5, n6;
    cout << "Введите номер одним 6-значным числом "; cin >> number;
    cout << "Введите номер по одной цифре \n"; cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    cout << CheckerFunc(number) << endl;
    cout << CheckerFunc(n1, n2, n3, n4, n5, n6) << endl;
    cout << CheckerFunc(number/1000, number%1000) << endl;
    if (CheckerFunc(number))
    {
        cout << "Билет счастливый";
    }
    else
    {
        cout << "Билет не счастливый";
    }

    return 0;
}


int CheckerFunc(int a)
{
    return (  ((a/100000) % 10) + ((a/10000) % 10) + ((a/1000) % 10) == ((a/100) % 10) + ((a/10) % 10) + (a % 10)  );
}

int CheckerFunc(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return ( (a1 + a2 + a3) == (a4 + a5 + a6) );
}

int CheckerFunc(int a1, int a2)
{
    return (  ((a1/100) % 10) + ((a1/10) % 10) + (a1 % 10) == ((a2/100) % 10) + ((a2/10) % 10) + (a2 % 10) );
}