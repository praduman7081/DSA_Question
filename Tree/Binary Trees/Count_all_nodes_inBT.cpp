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
int count_nodes(node* root){
   if(root==NULL){
       return -1;
   }
   queue<node*> q;
   q.push(root);
   q.push(NULL);
   int count=0;
   while(!q.empty() ){
       node* nod =q.front();
       q.pop();
       if(nod!=NULL){
           count++;
           
           if(nod->left){
               q.push(nod->left);
           }

           if(nod->right){
               q.push(nod->right);
           }
       }
       else if(!q.empty()){
           q.push(NULL);
           
       }
    
   }

   return count;

}

int main()
{
    struct node* root= new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right=new node(7);
     cout<<count_nodes(root);
    return 0;
}