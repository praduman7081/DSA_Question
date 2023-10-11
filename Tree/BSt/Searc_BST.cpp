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

node* search(node* root,int key){
    if(root==NULL){
        return NULL;
    }

    if(root->data==key){
        return root;
    }

    if(key < root->data){
        return search(root->left,key);
    }
   
       return search(root->right,key);
    
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
    
    if(search(root,50)==NULL){
        cout<<"Key dosen't exist";
    }
    else{
        cout<<"Key exists";
    }
    return 0;
}