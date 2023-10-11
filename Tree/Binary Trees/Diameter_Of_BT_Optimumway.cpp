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



int calcDiameter(node* root, int* height){
   if(root==NULL){
       *height =0;
       return 0;
   }
    int lh = 0,  rh =0 ;

   int lDiameter= calcDiameter(root->left, &lh);
   int rDiameter = calcDiameter(root->right, &rh);
    
   int currDiameter =lh + rh + 1;
   *height =max(lh, rh)+1;
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
 
     int height=  0 ;
    cout<<calcDiameter(root, &height);
    return 0;
}