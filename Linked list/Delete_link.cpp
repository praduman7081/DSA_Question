#include<iostream>
  using namespace std;

  class node{
      public:
      int data;
      node* next;
      
      node(int val){
          data=val;
          next =NULL;
      }

  };

  void insertAthead(node* &head, int val){
      node* n=new node(val);
      n->next=head;
      head=n;
  }

 void insertAttail(node* &head,int val){
     node* n= new node(val);
     if(head==NULL){
         head=n;
         return;
     }

     node* temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=n;
 } 
 

 void deletehead(node* &head){
      node* todelete=head;
      head=head->next;
      delete todelete;
 }

 void deletion(node* &head, int val){
     if(head==NULL){
         return;
     }
     if(head->next==NULL){
         deletehead(head);
         return;
     }
     node* temp=head;
     while(temp->next->data!=val){
         temp=temp->next;
     }
     node* todelete=temp->next;
     temp->next=temp->next->next; 

     delete todelete;
 }


void display(node* head){
     node* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
 }

int main()
{
    node* head=NULL;
    insertAttail(head,3);
    insertAttail(head,6);
    insertAttail(head,9);
    insertAttail(head,2);
    display(head);
    deletion(head,6);
    display(head);
    deletehead(head);
    display(head);
    
    return 0;
}