#include<iostream>
using namespace std;

struct node{
     int data;
     node* left, *right;

     node(int val){
         data=val;
         left= NULL;
         right=NULL;
     }
};

node* insertBst(node* root,int k){
    // node* nod= new node(k);
    if(root==NULL){
        return new node(k);
    }
    if(  k < root->data){
      root->left = insertBst(root->left,k);
    }
   else{
        root->right = insertBst(root->right,k);
    }
    return root;
}

void printinorder(node* root){
    if(root==NULL){
        return;

    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}

int main()
{
    node* root=NULL;
    root= insertBst(root,6);
    insertBst(root,4);
    insertBst(root,9);
    insertBst(root,7);
    insertBst(root,1);
    insertBst(root,8);
    insertBst(root,3);
    printinorder(root);

    return 0;
}