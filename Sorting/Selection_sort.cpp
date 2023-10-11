#include<iostream>
  using namespace std;

 void selection_sort(int ar[], int n){
     int indxmin,temp;
     for(int i=0;i<n-1;i++){
      indxmin=i;
      for(int j=0+i;j<n;j++){
        if(ar[j]<ar[indxmin]){
            indxmin=j;
        }
        temp=ar[i];
        ar[i]=ar[indxmin];
        ar[indxmin]=temp;
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
    selection_sort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;

}