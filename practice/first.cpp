#include<iostream>
#include<string>
using namespace std;

int main()
{
    char ch = 'A';
    int r = 1;
    int n = 3;
    int count = ch;
    while(r <= n)
    {
        int c = 1;
        while(c <= r)
        {
            char temp = count + r  + c - 2; 
            cout << " " << temp;
            // count++;
            c++;
        }
        cout << endl;
        r++;
    }
}