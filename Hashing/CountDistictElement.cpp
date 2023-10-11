#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int count_Distinct(vector<int> v, int n){
    unordered_set<int> uset;
    uset.insert(v.begin(), v.end());
    return uset.size();
}

int main()
{
    int n,a;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> vec;

    for(int i=0; i<n; i++ ){
        cin>>a;
        vec.push_back(a);

    }
     int distinctElement = count_Distinct(vec ,n);
    cout<<distinctElement<<endl;

    
    
    return 0;
}