#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

void printArray(int arr[], int n){
   for(int j=0; j<n; ++j){
       cout<<arr[j]<<" ";
   }
   cout<<endl;
}

int main()
{
    int n;
    cout<<"Array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array's elements"<<endl;
    for(int i=0; i<n; ++i){
        cin>>arr[i];
    }

    printArray(arr, n);

    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}