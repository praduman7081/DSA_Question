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


//  Deletion a node by Value-----


 /* void deletion(node* &head,int val){
      node* temp=head;
      while(temp->next->data!=val){
          temp=temp->next;
          
      }
      node* todelete=temp->next;
      temp->next=todelete->next;
      todelete->next->prev=temp;
      delete todelete;
  } */

  void deletion(node* &head,int val){
      node* temp=head;
      while(temp->data!=val){
          temp=temp->next;
          
      }
      node* todelete=temp;
      temp->prev->next=temp->next;
      temp->next->prev=temp->prev;
      delete todelete;
  }

  // Deletion a node by Position----

  void deleteAthead(node* &head){
      node * todelete;
      todelete=head;
      head=head->next;
      head->prev=NULL;
      delete todelete;

  }

   void delete_node(node* &head,int pos){
       if(pos==1){
           deleteAthead(head);
           return;
       }
      node* temp=head;
      int count=1;
      while(temp!=NULL && count!=pos){
          temp=temp->next;
          count++;
          
      }
      node* todelete=temp;
      temp->prev->next=temp->next;
      if(temp->next!=NULL){
      temp->next->prev=temp->prev;
      }
      delete todelete;
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
    deletion(head,3);   // Delete by Value
    display(head);
    delete_node(head,1);   // Delete by position
    display(head);
    return 0;
}