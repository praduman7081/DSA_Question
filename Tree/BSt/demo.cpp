#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char ch='a';
        int arr(0);
        string st;
        cin>>st;
        for(int i=0; i<26;i++){
            for(int j=0;j<st.length();j++){
                if(st[j]==ch){
                    arr[i]=arr[i]+1;
                }
            }
            ch++;
        }
        int mx=0,k;
        for(int i=0;i<26;i++){
            if(arr[i]>mx){
            mx=max(mx,arr[i]);
            k=i;
            }
        }
        if(mx==(st.length()-k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
