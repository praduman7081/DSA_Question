#include<iostream>
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

void in_print(node* root){
    if(root==NULL){
        return;
    }
    in_print(root->left);
    cout<<root->data<<" ";
    in_print(root->right);
}

int Count_Of_nodes(node* root){
     if (root==NULL){
        return 0 ;
    }
    return Count_Of_nodes(root->left) + Count_Of_nodes(root->right) + 1;
 
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
    in_print(root);
    cout<<endl;
    cout<<"Count of nodes in a BT "<<Count_Of_nodes(root)<<endl;
    return 0;
}