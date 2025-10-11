#include <iostream>
using namespace std;

void chessboardPrinter(int n, int m);
void printerFunc(int n, int m);

int main()
{
    int n, m;
    cout << "n: "; cin >> n;
    cout << "m: "; cin >> m;

    printerFunc(n, m);
    chessboardPrinter(n, m);
    
}

void chessboardPrinter(int n, int m)
{
    string black_line = "";
    string white_line = "";
    
    
    for (int j = 0; j < m; j++)
    {
        black_line += "* ";
        white_line += "& ";
    }
    

    for (int line = 0; line < n; line++)
    {
        for (int inner_cell_line = 0; inner_cell_line < m; inner_cell_line++) 
        {
            for (int column = 0; column < n; column++)  
            {
                if ((line + column) % 2 != 0)
                    cout << black_line;
                else
                    cout << white_line;
            }
            cout << '\n';
        }
    }
}

void printerFunc(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            cout << ' ';
        }
        for (int j = 0; j < n; j ++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}