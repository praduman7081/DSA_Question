#include<stdio.h>
#include<math.h>

void subsequence(int arr[], int n){
    printf("PowerSet  :\n");
     int totalSubset = pow(n,2);
     for(int counter =1; counter<totalSubset; counter++){
        for(int i=0; i<n; i++){
            if(counter & (1<<i)){
               printf("%d",arr[i]);
            }
        }
        printf("\n");
     }
}

void print_array(int arr[], int n){
    printf("Array :");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
   printf("\n");
}

int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, n);
    subsequence(arr, n);
    return 0;
}