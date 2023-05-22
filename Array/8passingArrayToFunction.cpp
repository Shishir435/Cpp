#include<iostream>
using namespace std;
void printArray (int * arr, int n){
    cout<<"function ";
    arr[0]=22;
  cout<<sizeof(arr)<<endl;
  for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[]= {1,2,3,4,5};
    arr[0]= 23;
    int n= sizeof(arr)/sizeof(int);
    cout<<"main "<<sizeof(arr)<<endl;
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<endl;
    }
    
    printArray(arr, n);
    return 0;
}