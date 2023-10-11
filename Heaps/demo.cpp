#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    
    vector<int> even;
    vector<int> odd;
    int c;
    for(int i=0; i<n ; i++){

        cin>>c;
        if(c%2 == 0){
           even.emplace(c);
        }
        else{
            odd.emplace(c);
        }
    }   
   sort(even.begin(), even.end(),greater<int>());
   sort(odd.begin(), odd.end(), greater<int>());
   int sum1 = even[0]+even[1];
   int sum2 = odd[0]+odd[1];
   if(sum1 %2 == 0  ||sum2 %2 ==0){
       if(sum1 > sum2){
        cout<<sum1;
       }
       else{
        cout<<sum2;
       }
   }
   
   else{
    cout<<-1;
   }
    return 0;
}