#include<iostream>
using namespace std;

int first_occerence(int arr[], int size, int n)
{
    int start = 0;
    int end = size-1;
   
    int ans = -1;

    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(arr[mid] == n)
        {
            ans = mid;
            end = mid - 1;
        }else if(arr[mid] < n)
        {
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {1, 2, 4, 4, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);  

    int index = first_occerence(arr, size, 4);

    if(index == -1)
    {
        cout << "not found" << endl;
    }else{
        cout << "First occurence of 4 found at index: " << index << endl;
    }
}