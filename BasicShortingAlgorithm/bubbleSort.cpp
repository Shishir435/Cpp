



#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for (int i = 1; i < n-1; i++)
    {   
        // repeated swaping
        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}
int main()
{
    int arr[]={-2,-3,-4,-13,6,9,3,5,8};
    int n= sizeof(arr)/sizeof(int);
    bubble_sort(arr, n);
    for(auto x: arr){
        cout<<x<<',';
    }
    return 0;
}