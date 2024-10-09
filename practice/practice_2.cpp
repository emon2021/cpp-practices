#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n = 5;

    for(int row = 1; row <= n; row++)
    {
        
        for(int col = 1; col <= row; col++)
        {
            cout << "* " ;
        }
        cout << endl;
    }

    for(int row = n-1; row > 0; row--)
    {
        for(int col = row; col > 0; col--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}