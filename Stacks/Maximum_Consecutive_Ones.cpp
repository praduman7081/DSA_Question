#include<iostream>
#include<vector>
  using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the size and at most value of k"<<endl;
    cin>>n>>k;
    vector<int> v(n);
    cout<<"Enter the value of array"<<endl;
    for(auto &i: v){
        cin>>i;
    }
    int zerocount=0,i=0,ans=0;
    for(int j=0;j<n;j++){
        if(v[j]==0){
            zerocount++;
        }
        while(zerocount>k){
        if(v[i]==0){
            zerocount--;
        }
        i++;
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans;
    
    return 0;
}