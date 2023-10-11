#include<iostream>
using namespace std;
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

int main()
{
    node* root= new node(5);
    root->left=new node(3);
    root->right=new node(6);
    root->left->left= new node(4);
    root->right->right= new node(8);
    return 0;
}