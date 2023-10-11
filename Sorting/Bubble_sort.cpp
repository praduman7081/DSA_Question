#include<iostream>
  using namespace std;
  

  void bubble_sort(int ar[], int n){
      int temp;
      for(int i=0;i<n-1;i++){
          for(int j=0;j<n-1-i;j++){
              if(ar[j]>ar[j+1]){
                  temp=ar[j];
                  ar[j]=ar[j+1];
                  ar[j+1]=temp;
              }
          }
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
   bubble_sort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}