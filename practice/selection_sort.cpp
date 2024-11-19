#include<iostream>

using namespace std;

int selection_sort(int arr[], int size)
{
    int i, j, min_index;
    
    for(i = 0; i < size - 1; i++)
    {
        min_index = i;
        
        for(j = i+1; j < size; j++)
        {
            if(arr[j] < arr[min_index])
                min_index = j;
            
        }
        swap(arr[min_index], arr[i]);
        
    }   
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90,1};
    int size = sizeof(arr)/sizeof(arr[0]);  
    selection_sort(arr, size);
    
    cout << "Sorted array: \n";
    
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}