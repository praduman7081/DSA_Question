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

    cout<<"Matix is..."<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}