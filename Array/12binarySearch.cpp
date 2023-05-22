#include<iostream>
using namespace std;

int BinarySearch (int arr[], int n, int key){
   int s= 0;
   int e= n-1;
   while(s<=e){
    int mid= (s+e)/2;
     if(arr[mid]== key)
     {
        return mid;
     }else if(arr[mid]<key)
     {
        s= mid+1;
     }
     else{
        e= mid-1;
     }
   }
    return -1;
}
int main()
{
    int arr[]= {2,3 ,4,5,6};
    int n = sizeof(arr)/sizeof(int);
   
   int index= BinarySearch(arr, n, 6);
   if(index==-1){
    cout<<"Element doesn't exist"<<endl;
   }else{
    cout<<"Index of key is "<<index;
   }
    return 0;
}