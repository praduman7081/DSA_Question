#include<iostream>
  using namespace std;
  class node{
      public:
      int data;
      node* next;
      node(int val){
          data=val;
          next=NULL;
      }
  };

  void insertAthead(node* &head, int val){
       node* n=new node(val);
      if(head==NULL){
        head=n;
        return;
      }
      n->next=head;
      head=n;
  }

  void insertAttail(node* &head, int val){
     
      if(head==NULL){
          insertAthead(head,val);
          return;
      }
       node* n=new node(val);
      node* temp=head;
      while(temp->next!=NULL){
          temp=temp->next;
      }
      temp->next=n;
  }

  int length(node* head){
      int l=0;
      node* temp=head;
      while(temp!=NULL){
          l++;
          temp=temp->next;
      }
      return l;
  }

  node* kappend(node* &head, int k){
      node* newHead;
      node* newTail;
      node* tail=head;
      int count=1;
      int l=length(head);
       k=k%l;
       while(tail->next!=NULL){
           if(count==l-k){
               newTail=tail;
           }
           if(count==l-k+1){
               newHead=tail;
           }
           tail=tail->next;
           count++;
       }
       newTail->next=NULL;
       tail->next=head;

       return newHead;

  }


  void display(node* head){
      node* temp=head;
      while(temp!=NULL){
          cout<<temp->data<<" -> ";
          temp=temp->next;
      }
      cout<<"NULL"<<endl;
  }

int main()
{
    node* head=NULL;
    int arr[]={2,3,4,5,6,7};
   
    for(int i=0;i<6;i++){
        insertAttail(head,arr[i]);
    }
    display(head);
    node* newHead=kappend(head,3);
    display(newHead);
    
    return 0;
}