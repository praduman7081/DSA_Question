#include<iostream>
#include<vector>
#include<algorithm>
  using namespace std;

int main()
{
    int n,target;
    cout<<"enter tne size and target"<<endl;
    cin>>n>>target;
    bool found=false;
    vector<int> v(n);
    cout<<"enter the vector"<<endl;
    for(auto &i: v ){
        cin>>i;
    } 
    sort(v.begin(), v.end());

    for(int i=0;i<n;i++){
        int lo=i+1, hi=n-1;
        while(lo<hi){
            int current= v[i]+v[lo]+v[hi];
            if(current==target){
                found= true;
            }
            else if(current<target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}