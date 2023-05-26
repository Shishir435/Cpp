#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{

    for (int i = 0; i <= n - 2; i++)
    {
        int current = arr[i];
        int min_position = i;
        // find out the min element
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_position])
            {
                min_position = j;
            }
        }
        swap(arr[min_position], arr[i]);
    }
}

int main()
{
    int arr[] = {-2, -3, -4, -13, 6, 9, 3, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);
    for (auto x : arr)
    {
        cout << x << ',';
    }
    return 0;
}