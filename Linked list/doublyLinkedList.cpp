#include<iostream>
  using namespace std;

//Creata a node
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

//Insert at Head
void insertAthead(node* &head,int val){
    node* n= new node(val);
    
      n->next=head;
      if(head!=NULL){
      head->prev=n;
      }

      head=n;
}

//Insert at Tail
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

//Insert after a given node
void insertAfterNode(node* &head, int val, int k){
    node* n = new node(val);
    node* temp = head;
    while(temp->data != k){
        temp= temp->next;
    }
    n->next = temp->next;
    n->prev = temp->next->prev;
    temp->next->prev = n;
    temp->next = n;

}
//Insert before a given Node
void insertBeforeNode(node* &head, int val, int k){
    node* n =new node(val);
    node* temp = head;
    while(temp->data != k){
        temp = temp->next;
    }
    n->prev = temp->prev;
    n->next = temp->prev->next;
    temp->prev->next = n;
    temp ->prev =n; 
}

//Display linked list
void display(node* head){
      node* temp=head;
      cout<<"NULL<-";
      while(temp!=NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
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
    insertAfterNode(head, 19, 3);
    insertBeforeNode(head, 15,2);
    display(head);
    return 0;
}