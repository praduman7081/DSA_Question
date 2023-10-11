#include<iostream>
  using namespace std;

  class node{
       public:
       node* prev;
       int data;
       node* next;
        
        node(int val){
            prev=NULL;
            data=val;
            next=NULL;
        }
  };

void insertAthead(node* &head,int val){
    node* n= new node(val);
    
      n->next=head;
      if(head!=NULL){
      head->prev=n;
      }

      head=n;
}
  void insertAtTail(node* &head,int val){
      node* n=new node(val);
      if(head==NULL){
          insertAthead(head,val);
          return;
      }
      node* temp=head;
      while(temp->next!=NULL){
          temp=temp->next;
      }
      temp->next=n;
      n->prev=temp;
  }

  void display(node* head){
      node* temp=head;
      cout<<"NULL<-"<<" ";
      while(temp!=NULL){
          cout<<temp->data<<" ";
          temp=temp->next;
      }
      cout<<"->NULL"<<endl;
  }


int main()
{
    node* head=NULL;
    insertAthead(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,8);
    insertAtTail(head,9);
    display(head);
    return 0;
}