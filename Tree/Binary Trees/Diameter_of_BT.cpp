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

int calcHeight(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

     return max(lHeight, rHeight)+1;
}

int calcDiameter(node* root){
   if(root==NULL){
       return 0;
   }

   int lHeight = calcHeight(root->left);
   int rHeight = calcHeight(root->right);

   int currDiameter =lHeight + rHeight + 1;

   int lDiameter= calcDiameter(root->left);
   int rDiameter = calcDiameter(root->right);

   return max(currDiameter, max(lDiameter,rDiameter));
  
}

int main()
{
    struct node* root = new node(1);
   root->left= new node(2);
    root->right= new node(3);
    root->left->left=new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right=new node(7);
    cout<<calcDiameter(root);
    return 0;
}