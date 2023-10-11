#include<iostream>
#include<string>
#include<stack>
  using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char>st;
    bool found = false;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);

        }
        else if(s[i]==')'){
            if(st.top()=='('){
                found=true;
            }
            while(st.top()=='+' || st.top()=='-'|| st.top()=='*'||st.top()=='/'){
                st.pop();
            }
            st.pop();
        }
    }
    cout<<found<<endl;
    return 0;
}