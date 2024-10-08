#include<iostream>
#include<string>
using namespace std;

int main()
{
    //  pattern printing
    int row, col, n;
    n = 3;
    char ch = 'A';
    for(row = 1; row <= n; row++)
    {
        int space = n - row;
        for(col = 1; col <= space; col++)
        {
            cout << "  ";
        }

        for(col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        for(col = row-1; col >= 1; col--)
        {
            cout << col << " ";
        }
        cout << endl;

    }
}