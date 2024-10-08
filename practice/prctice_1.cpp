#include<iostream>
#include<string>
using namespace std;

int main()
{
    //  pattern printing
    int row, col, n;
    n = 5;

    for(row = 1; row <= n; row++)
    {
        int space = n - row;
        for(col = 1; col <= space; col++)
        {
            cout << " ";
        }
        
        for(col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}