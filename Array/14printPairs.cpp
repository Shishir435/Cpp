#include<iostream>
using namespace std;
void printAllPairs(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
        
    cout<< "   "<<endl;
    }
}
int main()
{
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    printAllPairs(arr,n);
    return 0;
}