#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define max 10

int queue[max];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int main()
{
    int option, val;
    do
    {
        printf("\n********Main Menu******\n");
        printf("1. insert an element\n");
        printf("2. delete an element\n");
        printf("3. peek\n");
        printf("4. display the queue\n");
        printf("5. Exit\n");
        printf("Enter your option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            insert();
            break;

        case 2:
            val = delete_element();
            if (val != -1)
            {
                printf("\nThe number deleted is: %d", val);
            }
            break;

        case 3:
            val = peek();
            if (val != -1)
            {
                printf("\nThe first value in queue is: %d", val);
            }
            break;

        case 4:
            display();
            break;
        }
    
    }while(option!=5);
    return 0;
}

void insert(){
    int num;
    printf("\nEnter the number to be inserted in the queue : ");
    scanf("%d",&num);
    if(rear==max-1){
        printf("\nOVERFLOW\n");
    }
    else if(front==-1 && rear==-1){
        front =rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=num;
}

int delete_element(){
    int val;
    if(front==-1 || front>rear){
        printf("UNDERFLOW\n");
        return -1;
    }
    else{
        val=queue[front];
        front++;
        if(front>rear){
            front=rear=-1;
        }
        return val;
    }

}

int peek(){
    int val;
    if(front==-1 || front>rear){
        printf("QUEUE IS EMPTY\n");
        return -1;
    }
    else{
        return queue[front];
    }
}

void display(){
    int i;
    if(front==-1 || front>rear){
        printf("\nQueue is empty\n");
    }
    else{
        for(i=front;i<=rear;i++)
        printf("\t %d",queue[i]);
    }
}