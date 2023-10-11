#include<iostream>
using namespace std;

void print_arr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Plese enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the arrays elements"<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    print_arr(arr, n);
    


    return 0;
}