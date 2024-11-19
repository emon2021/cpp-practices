//  without optimization the code will work perfectly ,
//  but with optimization the code execution time will decrease 
//  if the array is already sorted .

#include<iostream>

using namespace std;

int bubble_sort(int arr[], int size)
{
    //  time complexity: O(n^2)
    //  space complexity: O(1)
    //  round of sort
    for(int i = 0; i < size - 1; i++)
    {
        //  for algorithm optimization
        bool opt = false;
        //  round of swap
        for(int j =0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]); // swapping
                opt = true; // optimization
            }
        }
        
        if(opt == false) // optimization == false
            break;
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90,1};
    int size = sizeof(arr)/sizeof(arr[0]);  
    bubble_sort(arr, size);
    
    cout << "Sorted array: \n";
    
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}