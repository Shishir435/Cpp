
#include <iostream>
using namespace std;

int printLargestSumOfSubArray(int arr[], int n)
{
    // prefix
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
          
            int current_subArray_sum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largest_sum = max(largest_sum, current_subArray_sum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-1, -2, -30, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    cout<<"hello";
    cout << printLargestSumOfSubArray(arr, n);
    return 0;
}