#include<iostream>

using namespace std;


//  linear search in array data structure
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    int get;
    cout << "enter number to search: " << endl;
    cin >> get;

    for(int i=0; i<n; i++)
    {
        if(arr[i] == get)
        {
            cout << "found at index: " << i << endl;
            break;
        }
    }


    return 0;
}