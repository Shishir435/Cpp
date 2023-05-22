

#include <iostream>
using namespace std;

int maximum_subArray_sum(int arr[], int n)
{
    int cs = 0;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}
int main()
{
    int arr[] = {-1, -2, -30, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    
    cout << maximum_subArray_sum(arr, n);
    return 0;
}