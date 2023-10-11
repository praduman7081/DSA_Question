#include<iostream>
using namespace std;

    // Time Comlexity  O(n*(2^n))

void subsequence(int arr[], int n){
    cout<<"Subsequence :"<<endl;
     int totalSubs = (n*n);
     for(int counter =1; counter<totalSubs; counter++){
        for(int i=0; i<n; i++){
            if(counter & (1<<i)){
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
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
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, n);
    subsequence(arr, n);
    return 0;
}