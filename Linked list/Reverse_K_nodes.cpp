#include<iostream>
  using namespace std;
  class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next = NULL;
    }

  };

  void insertat_head(node* &head, int val){
      node* n=new node(val);
      if(head==NULL){
          head=n;
          return;
      }
      
      n->next=head;
      head=n;

  }

  void insertat_tail(node* &head, int val){
      node* n=new node(val);
      if(head== NULL){
          head=n;
          return ;
      }
      
          node* temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=n;
          
      
  }
//   Time Complexsity O(n)

  node* reversek(node* &head, int k){
      node* prevptr=NULL;
      node* currptr=head;
      node* nextptr;
      int count=0;
      while(currptr!=NULL && count<k){
          nextptr=currptr->next;
          currptr->next=prevptr;
          prevptr=currptr;
          currptr=nextptr;
          count++;
      }
    if(nextptr!=NULL){
    head->next=reversek(nextptr,k);
    }
    return prevptr;
  }

  void display(node* head){
      node* temp=head;
      while (temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;
      }
      cout<<"NULL"<<endl;
     
      
  }

int main()
{
    node* head=NULL;
    insertat_head(head,1);
    insertat_tail(head,5);
    insertat_tail(head,6);
    display(head);
    insertat_head(head,9);
    display(head);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    
    return 0;
}