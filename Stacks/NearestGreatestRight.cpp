#include<iostream>
#include<stack>
#include<list>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    stack<int> st;
    vector<int> v;

    // int maxi = INT_MIN;

    for(int i=n-1; i >= 0; i--){
        if(st.size() == 0){
            v.push_back(-1);
        }
        else if( st.size() != 0 && arr[i] < st.top()){
          v.push_back(st.top());
          
        }
        else if( st.size() != 0 && arr[i] >= st.top()){
            while(arr[i] <= st.top()  && !st.empty()){
                st.pop();
            }

            if(st.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(st.top());
            }

            
        }
        st.push(arr[i]);
    }
     reverse(v.begin(),v.end());

     for(int i =0; i<n ; i++){
        cout<<v[i]<<" ";
     }

    return 0;
}
