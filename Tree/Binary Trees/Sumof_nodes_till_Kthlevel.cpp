#include<iostream>
#include<queue>
using namespace std;

struct node{
       int data;
       struct node* left;
       struct node* right;

       node(int val){
           data=val;
           left=NULL;
           right=NULL;
       }
};

int sumof_till_Kthlevel_nodes(node* root, int k){
     if(root==NULL){
         return -1;
     }
     queue<node*> q;
     q.push(root);
     q.push(NULL);
     int sum=0,level=0;
     while(!q.empty() && level <= k ){
         node* nod=q.front();
         q.pop();
         if(nod!=NULL){
             cout<<nod->data<<" ";
             if(level<=k){
                 sum=sum+nod->data;
             }
             if(nod->left){
                 q.push(nod->left);
             }
             if(nod->right){
                 q.push(nod->right);
             }
         }
         else if(!q.empty()){
             q.push(NULL);
             level++;
         }
     }
     cout<<endl;
     return sum;

}


int main()
{  
    struct node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(50);
    root->left->right=new node(40);
    root->right->left=new node(60);
    root->right->right=new node(70);
    cout<<sumof_till_Kthlevel_nodes(root,1);
    
    return 0;
}