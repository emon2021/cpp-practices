#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n = 5;

    for(int row = 1; row <= n; row++)
    {
        int space = 1;

        for(space; space < row; space++)
        {
            cout << " " ;
        }

        for(int col = n; col >= row; col--)
        {
            cout << "*";
        }

        cout << endl;
    }
}