#include<iostream>
using namespace std;

  // for this method array must be sorted if array will be not sorted then we first sorted...

bool pairSum(int arr[], int n, int k){
    int low = 0;
    int high = n-1;
    while(low<high){
        if(arr[low] +arr[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low] + arr[high] < k){
            low++;
        }
        else{
            high--;
        }
    }

    return false;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =-0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    bool ans = pairSum(arr,n,k);
    cout<<ans;
    return 0;
}