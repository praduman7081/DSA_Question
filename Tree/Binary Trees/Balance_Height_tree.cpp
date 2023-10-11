#include<iostream>
#include<cmath>
using namespace std;

//  Time Complexcity O(n^2)

class node{
    public: 
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int Height(node* root){
    if(root == NULL){
        return 0;
    }
    int lh = Height(root->left);
    int rh = Height(root->right);

    return max(lh,rh)+1;
}

bool isBalanced(node* root){
    if(root==NULL){
        return true;
    }

    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }
    int lh = Height(root->left);
    int rh = Height(root->right);

    if(abs(lh-rh) <= 1){
        return true;
    }
    else{
        return false;
    }
}



int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

   

    node* root2 = new node(1);
    root2->left = new node(2);
    root2->left->left = new node(4); 

     if(isBalanced(root2)){
        cout<<"Balanced Tree";
    }
    else{
        cout<<"Unbalanced Tree";
    }
    return 0;
}