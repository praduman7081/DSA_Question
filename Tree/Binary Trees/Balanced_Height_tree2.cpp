#include<iostream>
#include<cmath>
using namespace std;

// Time Complexcity O(n)
class node{
    public:
    int data;
    node* left;
    node *right;
    node(int val){
        data = val; 
        left = NULL;
        right = NULL;
    }
};

bool isBalanced(node* root , int* height){
    if(root == NULL){
        return true;
    }
    int lh = 0, rh = 0;
    if(isBalanced(root->left, &lh) == false){
        return false;
    }
    if(isBalanced(root->right, &rh) == false){
        return false;
    }

    *height = max(lh, rh) + 1;
    if(abs(lh - rh) <= 1){
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

    int height = 0;
     if(isBalanced(root, &height)){
        cout<<"Balanced Tree";
    }
    else{
        cout<<"Unbalanced Tree";
    }
    return 0;
}