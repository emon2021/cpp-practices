#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n = 5;

    for(int row = 1; row <= n; row++)
    {
        int space = n - row;

        for(space; space > 0; space--)
        {
            cout << " " ;
        }

        for(int col = 1; col <= row; col++)
        {
            cout << "* "; // just use space after the stars symbol then it will create a triangle pyramid
        }

        cout << endl;
    }
}