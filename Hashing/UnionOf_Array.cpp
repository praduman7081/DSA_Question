#include<iostream>
#include<array>
#include<unordered_set>
#include<set>
using namespace std;

void union_array(int a[], int b[], int n1, int n2){
    unordered_set<int> s;
   
    for(int i=0; i<n1; i++){
        s.insert(a[i]);
    }
    for(int i=0; i<n2;i++){
        s.insert(b[i]);
    }

    cout<<s.size()<<endl;
    for(auto i= s.begin(); i!=s.end(); i++){
        cout<<(*i)<<" ";
    }
}

int main()
{
    // array<int> arr1, arr2;
    int arr1[5] = {12,10,4,6,9};
    int arr2[4] = {4,8,6,2};
     int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    union_array(arr1,arr2,n1,n2);
    
    return 0;
}