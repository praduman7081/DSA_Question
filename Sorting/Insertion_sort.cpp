#include<iostream>
  using namespace std;

 void insert_sort(int ar[], int n){
     for(int i=1;i<=n-1;i++){
      int key=ar[i];
      int j=i-1;
      while(j>=0 && ar[j]>key){
          ar[j+1]=ar[j];  
          j--; 
      }

      ar[j+1]=key;
     
 }

 }

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    insert_sort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;

}