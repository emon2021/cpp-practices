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
        for(col = 1; col <= n; col++)
        {
            char temp = ch + row + col - 2;
            cout << temp  << " ";
            // ch++;
        }
        cout << endl;

    }
}