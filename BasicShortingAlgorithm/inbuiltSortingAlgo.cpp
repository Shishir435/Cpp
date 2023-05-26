

#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a, int b){
    return a>b;
}
int main()
{
    int arr[]={10,9,8,12,45,67,34,6,7};
    int n= sizeof(arr)/sizeof(int);
    // sort(arr, arr+n, compare);
    reverse(arr, arr+n); 
    for(int x:arr){
        cout<<x<<",";
    }
    return 0;
}