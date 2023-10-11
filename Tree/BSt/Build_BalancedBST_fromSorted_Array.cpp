#include<iostream>
using namespace std;


struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
 node* sortedArrayToBst(int arr[], int start, int end){
       if(start>end){
           return NULL;
       }
     int mid=(start+end)/2;
       node* root = new node(arr[mid]);
       root->left=  sortedArrayToBst(arr,start,mid-1);
       root->right= sortedArrayToBst(arr,mid+1,end);
    return root;
 }

 void print(node* root){
     if(root==NULL){
         return;
     }
     cout<<root->data<<" ";
     print(root->left);
    print(root->right);
 }
int main()
{
    int arr[6]={10,20,30,40,50,60};
    node* root =  sortedArrayToBst(arr,0,5);
    print(root);
    
    return 0;
}