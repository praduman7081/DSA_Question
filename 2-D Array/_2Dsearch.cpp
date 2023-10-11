#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter no of rows and coulmns"<<endl;
    cin>>n>>m;
    int arr[n][m];

    cout<<"Enter's elements"<<endl;
    for(int i=0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    int target;
    cin>>target;
    int r = 0, c =m-1;
    bool found = false;
    while(r < n && c>=0 ){
        if(arr[r][c] ==  target){
            found = true;
        }
        if(arr[r][c] > target){
            c--;
        }
        else {
            r++;
        }
    }

    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element dose not exist"<<endl;
    }
    return 0;
}