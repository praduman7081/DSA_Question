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

bool isBst(node* root, node* min, node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){
        return false;
    }
    if(max!=NULL && root->data >= max->data){
        return false;
    }

    bool leftValid = isBst(root->left,min,root);
    bool rightValid = isBst(root->right,root,max);
    return leftValid && rightValid;
}

int main()
{
     node* root = new node(2);
    root->left= new node(5);
    root->right= new node(15);
    root->left->left= new node(3);
    root->left->right= new node(7);
    root->right->left= new node(12);
    root->right->right= new node(19);
   
   if(isBst(root, NULL,NULL)){
       cout<<"Valid BST"<<endl;
   }
   else{
       cout<<"Invalid BST"<<endl;
   }

    return 0;
}