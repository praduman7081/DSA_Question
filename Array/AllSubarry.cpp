#include<iostream>
using namespace std;

        // Time Complexity  O(n^3)

void print_subarray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           for(int k = i; k<j; k++){
               cout<<arr[k]<<" ";
           }
           cout<<endl;
        }
        
    }
}

void print_array(int arr[], int n){
    cout<<"Array :";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr,n);
    print_subarray(arr,n);
    return 0;
}