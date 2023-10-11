#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

}

int main()
{
     int n;
    cout<<"array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }

    cout<<"unsorted array"<<endl;
    printArray(arr, n);
    cout<<"sorted array"<<endl;
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}