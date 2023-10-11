#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
    while(start < end){
    int temp = arr[start];
    arr[start]= arr[end];
    arr[end]= temp;
    start++;
    end--;
    }
}

void leftRotate(int arr[], int d, int n ){
   if(d==0){
       return;
   }
   d = d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

void printArray(int arr[], int n){
    for(int i=0 ;i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]= {2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d =3;
    cout<<"Array before rotation: ";
    printArray(arr,n);
    leftRotate(arr, d, n);
    cout<<"Array after left rotation: ";
    printArray(arr, n);

    return 0;
}