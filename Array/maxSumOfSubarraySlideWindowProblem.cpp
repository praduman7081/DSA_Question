#include<iostream>
using namespace std;
    // O(N)

void sumOfSubarrayMax(int arr[], int n, int k, int x){
    int sum = 0, ans = 0;
    for(int i =0; i<k; i++){
        sum += arr[i];
    }

    if(sum<x){
        ans = sum;
    }

    for(int i = k; i<n; i++){
        sum = sum - arr[i-k];
        sum =sum +arr[i];

        if(sum< x){
            ans = max(sum, ans);
        }
    }

    cout<<ans<<" Maximum sum of SubArray < "<<x;
}
int main()
{
    int k,x;
    cin>>k>>x;
    int arr[10];
    for(int i =0; i<10; i++){
        cin>>arr[i];
    }
   
    sumOfSubarrayMax(arr,10,k,x);
    return 0;
}