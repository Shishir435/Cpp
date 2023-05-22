
#include<iostream>
using namespace std;
void printSubArray(int arr [], int n){
   for (int i = 0; i < n; i++)
   {
    for (int j = i; j < n; j++)
    {
        // cout<<i<<","<<j<<endl;
        for (int k = i; k <=j; k++)
        {
            cout<<arr[k]<<',';
        }
        cout<<endl;
    }
   
   }
   
}

void printSumOfSubArray(int arr [], int n){
  
   int largest_sum=0;
   for (int i = 0; i < n; i++)
   {  
    for (int j = i; j < n; j++)
    {
        // cout<<i<<","<<j<<endl;
       int current_sum=0;
        for (int k = i; k <=j; k++)
        {   
           current_sum+=arr[k];
            // cout<<arr[k]<<',';
        }
        
    //    if(current_sum>largest_sum){
    //        largest_sum=current_sum;
    //    }  
    largest_sum= max(largest_sum, current_sum);
    }
   
   }
     cout<<"largest sum "<<largest_sum;
}
int main()
{
    int arr[]={-1,-2,-30,4,5};
    int n= sizeof(arr)/sizeof(int);
    printSumOfSubArray(arr, n);
    return 0;
}