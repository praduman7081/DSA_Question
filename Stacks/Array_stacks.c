#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10

int st[MAX], top = -1;
void push(int st[], int val);
void display(int st[]);
int pop( int st[]);
void peek(int st[]);
int main()
{
    int option, val;
    do
    {
        printf("\n****Main Menu ****\n");
        printf("1: Enter to push\n");
        printf("2 Enter to display\n");
        printf("3 Enter to pop\n");
        printf("4 Enter to peek\n");
        printf("5 Enter to Exit\n");
        printf("Enter your option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value to be pushed\n");
            scanf("%d", &val);
            push(st, val);
            break;
        case 2: display(st);
            break;
        case 3: pop(st);
            if(val!=-1)
            printf("\nthe value deleted from stack is %d", val);
            break;
        case 4: peek(st);
            break;
       }
    } while (option != 5);
    return 0;
}

void push(int st[], int val)
{
    if (top == MAX - 1)
    {
        printf(" Stack Overflow\n");
    }
    else
    {
        top++;
        st[top] = val;
    }
}
void display(int st[]){
    int i;
    if(top== -1){
        printf("Stack is empty\n");
    }
    else{
        for(i=0;i<=top;i++){
            printf("%d  ",st[i]);
        }
    }
}
int pop(int st[]){
    int val;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        val=st[top];
        top--;
    }
     return val;
}
void peek(int st[]){
     if(top== -1){
        printf("Stack is empty\n");
    }
    else{
        printf("%d",st[top]);
    }
}