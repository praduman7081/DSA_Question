#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create_la(int*,int);
void display(int*,int);
void insert(int*,int);
int main(){
    int option,n,*arr;
    do{
       printf("1. enter to create a array\n");
       printf("2. enter to display a array\n");
       printf("3. enter to insert a element in array\n");
       printf("4. enter to delete a element in the array\n");
       printf("5. enter to exit \n");
       printf("Please enter your option\n");
       scanf("%d",&option);
       switch (option)
       {
       case 1:   
                printf("Enter the size of array\n");
                scanf("%d",&n);
                arr=(int *)malloc(n*sizeof(int));
                create_la(arr,n);
                break;
       case 2:  display(arr,n);
                break;
       case 3:  insert(arr,n);  
                break;       
       case 5:  exit;         
       }
    }while(option!=5);


return 0;
}


void create_la( int* arr, int n){
    int i;
printf("Enter the element of array\n");
for(i=0;i<n;i++){
    scanf("%d",arr+i);
}

}

void display(int* arr, int n){
    int i;
    printf("Linear array--->>>\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}

void insert(int* arr,int n){
    int i,k,pos,t;
    t=n;
    printf("Enter the value and position where you want to insert\n");
    scanf("%d%d",&k,&pos);
    for(i=n-1;i>=pos;i--){
        *(arr+n)=*(arr+n-1);
        n--;
    }
    *(arr+pos)=k;
    n=t+1;
    display(arr,n);

}