#include<iostream>
#include<queue>
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
int count_nodes_till_Kthlevel(node* root, int k){
   if(root==NULL){
       return -1;
   }
   queue<node*> q;
   q.push(root);
   q.push(NULL);
   int level=0;
   int count=0;
   while(!q.empty() && level<=k){
       node* nod =q.front();
       q.pop();
       if(nod!=NULL){
           count++;
           
           if(nod->left){
               q.push(nod->left);
           }

           if(nod->right){
               q.push(nod->right);
           }
       }
       else if(!q.empty()){
           q.push(NULL);
           level++;
           
       }
    
   }

   return count;

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
     cout<<count_nodes_till_Kthlevel(root,1);
    return 0;
}