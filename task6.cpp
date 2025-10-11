#include <iostream>
using namespace std;

char signFunc(double n);
string textNumberFunc(int n);

int main()
{
    double n;
    cin >> n;
    cout << signFunc(n) << textNumberFunc(abs(n));


    return 0;
}

char signFunc(double n)
{
    if (n > 0)
    {
        return '+';
    }
    else if (n < 0)
    {
        return '-';
    }
    return ' ';
}
string textNumberFunc(int n)
{
    string s = "";
    switch (n)
    {
        case 0:
        {
            s = "ноль";
            break;
        }
        case 1:
        {
            s = "один";
            break;
        }
        case 2:
        {
            s = "два";
            break;
        }
        case 3:
        {
            s = "три";
            break;
        }
        case 4:
        {
            s = "четыре";
            break;
        }
        case 5:
        {
            s = "пять";
            break;
        }
        case 6:
        {
            s = "шесть";
            break;
        }
        case 7:
        {
            s = "семь";
            break;
        }
        case 8:
        {
            s = "восемь";
            break;
        }
        case 9:
        {
            s = "девять";
            break;
        }
        case 10:
        {
            s = "десять";
            break;
        }
    }
    return s;
}
