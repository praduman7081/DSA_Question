#include<iostream>
#include<vector>
#include<stack>
#include<cmath>

  using namespace std;

  int get_max_area(vector<int>a){
      int n=a.size(),ans=0,i=0;
      stack<int>st;
      a.push_back(0);
      while(i<n){
          while(!st.empty() && a[st.top()]>a[i]){
             int t=st.top();
             int h=a[t];
             st.pop();
             if(st.empty()){
                 ans=max(ans,h*i);
             } 
             else{
                 int l=i-st.top()-1;
                 ans=max(ans,h*l);
             }
          }
          st.push(i);
          i++;
      }
    return ans;
  }

int main()
{
    vector<int>a;
    a={1,2,1,3,4,11};
    cout<<get_max_area(a);
    return 0;
}