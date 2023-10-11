#include<iostream>
#include<cmath>
using namespace std;

struct node{
    int data;
   struct node* left, *right;

    node(int val){
        data=val;
        left= NULL;
        right= NULL;
    }
};

int height_Bt(node* root){
    if(root==NULL){
        return 0;
    }
    int lh =height_Bt(root->left);
    int rh =height_Bt(root->right);

    return max(lh,rh)+1;
}

int main()
{
   struct node* root = new node(10);
   root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right=new node(7);
    cout<<height_Bt(root);
    return 0;
}