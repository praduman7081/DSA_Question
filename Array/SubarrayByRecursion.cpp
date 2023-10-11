#include <iostream>
using namespace std;

        // Time Complexity O(n^2)

void subarray(int arr[], int n, int start, int end)
{
   
    if (end == n)
    {
        return;
    }

    else if (start > end)
    {
        subarray(arr, n, 0, end + 1);
    }
    else
    {
        cout << "[";
        for (int i = start; i < end; i++)
        {
            cout << arr[i] << ',';
        }
        cout << arr[end] << "]" << endl;
        subarray(arr, n, start + 1, end);
    }
}
void print_array(int arr[], int n)
{
    cout<<"Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, n);
     cout << "Subarray : " << endl;
    subarray(arr, n, 0, 0);
    return 0;
}