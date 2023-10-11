#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAttail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


int main()
{
    node *head = NULL;
    int a;
    // for(int i=0;i<5;i++){
    //     cin>>a;
    //     insertAttail(head,a);
    // }
    insertAttail(head, 1);
    insertAttail(head, 5);
    insertAttail(head, 9);
    insertAttail(head, 7);
    insertAttail(head, 2);
    insertAttail(head, 3);
    display(head);
    insertAthead(head, 10);
    insertAthead(head, 56);
    insertAthead(head, 32);
    display(head);
    cout << search(head, 5) << endl;
   

    return 0;
}
