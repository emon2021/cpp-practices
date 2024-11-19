#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1;
    int n = 8;
    while(start <= end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid] == n)
        {
            cout << arr[mid] << " found at index: " << mid << endl;
            break;
        }

        if(arr[mid] < n)
        {
            start = mid + 1;
        }else if(arr[mid] > n)
        {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    // cout << end ;

    return 0;
}