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

int Sum_Of_nodes(node* root){
    if(root==NULL){
        return 0;
    }

    return Sum_Of_nodes(root->left) + Sum_Of_nodes(root->right) + root->data;

}

void in_print(node* root){
    if(root==NULL){
        return;
    }
    in_print(root->left);
    cout<<root->data<<" ";
    in_print(root->right);
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
    cout<<"Sum of nodes in a BT "<<Sum_Of_nodes(root)<<endl;
    
    return 0;
}