#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void selectionSort(int arr[], int n){
    
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1; j < n; ++j){
          if(arr[j]<arr[i]){
              int temp = arr[j];
              arr[j] = arr[i];
              arr[i] = temp;
          }
        }
    }
    cout<<endl;
}

int main()
{
     int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter array's elements"<<endl;

    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    cout<<"Unsorted array"<<endl;

    printArray(arr ,n);
    selectionSort(arr, n);
    cout<<"Sorted array"<<endl;
    printArray(arr ,n);
    return 0;
}