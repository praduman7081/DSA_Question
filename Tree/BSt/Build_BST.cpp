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

void inorder(node* root){
    if(root==NULL){
        return;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node* root = new node(10);
    root->left= new node(5);
    root->right= new node(15);
    root->left->left= new node(3);
    root->left->right= new node(7);
    root->right->left= new node(12);
    root->right->right= new node(19);
    inorder(root);
    
    return 0;
}