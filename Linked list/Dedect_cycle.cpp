#include<iostream>
  using namespace std;


//   FloydS Algorithm  OR  Hare and Tortoise Algorithm

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

  void makecycle(node* &head, int pos){
      node* temp=head;
      node* startNode;
      int count=1;
      while(temp->next!=NULL){
          if(count==pos){
            startNode=temp;
          }
          temp=temp->next;
          count++;
      }
      temp->next=startNode;
  }

  bool dedectcycle(node* &head){
      node* fast=head;
      node* slow=head;
      while(fast!=NULL && fast->next!=NULL){
          slow=slow->next;
          fast=fast->next->next;
          if(fast==slow){
              return true;
          }
      }
      return false;
  }

  void removecycle(node* &head){
       node* fast=head;
       node* slow=head;
       do{
         slow=slow->next;
         fast=fast->next->next;
       }while(slow!=fast);

       fast=head;
       while(slow->next!=fast->next){
           fast=fast->next;
           slow=slow->next;
       }
       slow->next=NULL;
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
    int pos=2;
    makecycle(head,pos);
    cout<<dedectcycle(head)<<endl;
    removecycle(head);
    display(head);
    cout<<dedectcycle(head)<<endl;
    return 0;
}