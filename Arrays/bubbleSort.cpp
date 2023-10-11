#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n){
    int counter = 1;
    while(counter < n){
        for(int i = 0; i < n-counter; i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
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
    bubbleSort(arr, n);
    cout<<"sorted array"<<endl;
    printArray(arr, n);
    return 0;
}