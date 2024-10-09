#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n = 10;
    for(int row = 1; row <= n; row++)
    {
        int space = n - row;

        for(space; space > 0; space--)
        {
            cout << "*";
        }

        // for(int col = 1; col <= row; col++)
        // {
        //     cout << "*";
        // }
        cout << endl;
    }
}