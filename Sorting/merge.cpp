#include <iostream>
using namespace std;

void Merge(int ar[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - (mid + 1) + 1;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = ar[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = ar[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            ar[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ar[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        ar[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        ar[k] = b[j];
        j++;
        k++;
    }
}

void Merge_sort(int ar[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        Merge_sort(ar, l, mid);
        Merge_sort(ar, mid + 1, r);
        Merge(ar, l, mid, r);
    }
}

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int l = 0;
    int r = n - 1;
    Merge_sort(ar, l, r);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i]<<" ";
    }

    return 0;
}