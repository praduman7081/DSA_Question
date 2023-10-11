#include<iostream>
#include<vector>
using namespace std;

        // Time Complexity O(2^n)

void print_array(vector<int> arr, int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

void subsequence(vector<int>arr, int index, vector<int >subarr){

    if(index == arr.size()){
        int l = subarr.size();
        if(l!=0){
            print_array(subarr, l);
        }
    }

    else{
        subsequence(arr, index+1, subarr);
        subarr.push_back(arr[index]);
        subsequence(arr, index+1, subarr);
    }
}

int main()
{
    vector<int>v1 ={1,2,3,4};
    vector<int>  v2;
    cout<<"Subsequence :"<<endl;
    subsequence(v1, 0, v2);
    return 0;
}