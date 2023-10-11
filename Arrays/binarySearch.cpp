#include<iostream>
using namespace std;

  // O(log2(n))

void printArray(int arr[], int n){
    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearch(int arr[], int n, int val){
    int  mid, beg =0, end = n;
    while(beg <= end){
    mid = (beg+end)/2;
    if (arr[mid] == val){
        return mid;
    }
    else if(arr[mid] > val){
        end = mid - 1;
    }
    else{
        beg = mid + 1;
    }
  }
    return -1;
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

    int key;
    cout<<"Enter the key to search"<<endl;
    cin>>key;
    
    printArray(arr, n);
    cout<<binarySearch(arr, n, key);


    return 0;
}