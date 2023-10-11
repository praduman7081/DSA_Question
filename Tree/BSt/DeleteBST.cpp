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

node* inordersucc(node* root){
    node* curr=root;
    while(curr && curr->left!= NULL){
        curr=curr->left;
    }
    return curr;
}

node* deleteBst(node* root, int key){
   
    if(key< root->data){
     root->left = deleteBst(root->left, key);
    }
   else if(key> root->data){
     root->right = deleteBst(root->right, key);
    }
    else{
        if(root->left==NULL){
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if( root->right==NULL){
            node* temp=root->left;
            free(root);
            return temp;
        }
        node* temp= inordersucc(root->right);
        root->data=temp->data;
        root->right= deleteBst(root->right, temp->data);
    }
    return root;
}

void print(node* root){
     if(root==NULL){
        return;

    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
/*
                    10
                   /  \
                  5    15
                /  \   /  \
               3    7 12   19  

*/

int main()
{
    node* root = new node(10);
    root->left= new node(5);
    root->right= new node(15);
    root->left->left= new node(3);
    root->left->right= new node(7);
    root->right->left= new node(12);
    root->right->right= new node(19);
    print(root);
    cout<<endl;
    deleteBst(root,5);
    print(root);

    
    return 0;
}