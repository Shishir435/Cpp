#include<iostream>
using namespace std;
void reverseArray (int arr[], int n){
   int s= 0;
   int e= n-1;
   while(s<=e){
    swap(arr[s],arr[e]);
    s++;
    e--;
   }
   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<endl;
   }
   
}
int main()
{
    int arr[]= {1,2,34,5,6,8};
    int n= sizeof(arr)/sizeof(int);
    reverseArray(arr, n);
    return 0;
}