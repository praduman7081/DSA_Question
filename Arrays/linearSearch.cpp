#include<iostream>
using namespace std;

// O(n)

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void linearSearch(int arr[], int n, int key){
    int idx = -1;
    for(int i = 0; i < n; ++i){
        if(arr[i] == key)
        idx = i;
    }

    cout<<idx<<endl;
}

int main()
{
    int n; 
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter value to search"<<endl;
    cin>>key;
    printArray(arr, n);
    linearSearch(arr, n, key);
    return 0;
}