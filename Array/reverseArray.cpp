#include<iostream>
using namespace std;

// Method for reverse a sequence
void reverse(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before  reverse: ";
    printArray(arr, n);
    reverse(arr,0,n-1);
    cout<<"Array after reverse: ";
    printArray(arr, n);


    return 0;
}