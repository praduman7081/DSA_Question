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
int sum_at_kthlevel(node* root, int k){
   if(root==NULL){
       return -1;
   }
   queue<node*> q;
   q.push(root);
   q.push(NULL);
   int sum=0,level=0,count =0;
   while(!q.empty() ){
       node* nod =q.front();
       q.pop();
       if(nod!=NULL){
           if(level==k){
              sum=sum+nod->data;
              count++;
           }
           
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
    cout<<"NO of nodes at Kth level: "<<count<<endl;
   return sum;

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
     cout<<sum_at_kthlevel(root,1);
    return 0;
}