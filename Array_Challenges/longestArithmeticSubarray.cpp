#include<iostream>
#include<cmath>
using namespace std;

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


    int curr =2;
    int pd = arr[1]-arr[0];
    int i = 2;
    int ans = 2; 
    while(i<n){
        if(pd == arr[i]- arr[i-1]){
            curr++;
            
        }
        else{
            pd = arr[i]- arr[i-1];
            curr =2;
        }
        ans = max(curr,ans);
        i++;
    }  
    cout<<ans<<endl;
    return 0;
}