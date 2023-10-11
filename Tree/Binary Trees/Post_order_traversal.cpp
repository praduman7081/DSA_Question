#include<iostream>
using namespace std;

struct node{
   int data;
   struct node* left;
   struct node* right;

   node( int val){
       data=val;
       left=NULL;
       right=NULL;
   }

};
void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct node* root= new node(5);
    root->left=new node(7);
    root->right= new node(2);
    root->left->left=new node(8);
    root->left->right=new node(1);
    root->right->left= new node(4);
    root->right->right=new node(10);
    postorder(root);
    return 0;
}