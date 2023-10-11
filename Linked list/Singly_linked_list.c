#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *next; 
};

struct node *start = NULL;
struct node *create_node(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *sort(struct node *);

int main()
{
    int option;
    do
    {
        printf("\n\n----->Main menu<------\n\n");
        printf("1 Enter to create linked-list\n");
        printf("2 Enter to display\n");
        printf("3 Enter to insert a node in begining\n");
        printf("4 Enter to insert a node at the end\n");
        printf("5 Enter to insert a node before a given number\n");
        printf("6 Enter to insert a node after a given number\n");
        printf("7 Enter to delete a node in begining\n");
        printf("8 Enter to delete a node at ending\n");
        printf("9 Enter to delete a node \n");
        printf("10 Enter to delete a node after a given number\n");
        printf(" 11 Enter to sort the list\n");
        printf(" 12 Enter to exit\n");
        printf("Enter the option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_node(start);
            break;
        case 2:
            start = display(start);
            break;
        case 3:
            start = insert_beg(start);
            break;
        case 4:
            start = insert_end(start);
            break;
        case 5:
            start = insert_before(start);
            break;
        case 6:
            start = insert_after(start);
            break;
        case 7:
            start = delete_beg(start);
            break;
        case 8:
            start = delete_end(start);
            break;
        case 9:
            start = delete_node(start);
            break;
        case 10:
            start = delete_after(start);
            break;
        case 11:
            start = sort(start);
            break;
        }

    } while (option != 12);

    return 0;
}

struct node *create_node(struct node *start)
{

    struct node *new_node, *ptr;
    int num;
    printf("\nEnter the -1 to end\n");
    printf("Enter the data\n");
    scanf("%d", &num);

    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = num;
        if (start == NULL)
        {
            start = new_node;
            new_node->next = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        printf("Enter the data\n");
        scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("Enter the data which is insert to you");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter the data which is insert to you");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->next = NULL;
    return start;
}

struct node *insert_before(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("Enter the number before you want to insert");
    scanf("%d", &val);
    printf("Enter the data which is insert to you");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;

    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *new_node, *ptr;
    int num, val;
    printf("Enter the number after you want to insert");
    scanf("%d", &val);
    printf("Enter the data which is insert to you");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while (ptr->data != val)
    {

        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;

    return start;
}
struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr, *preptr;
    ptr = start;
    preptr = ptr;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    return start;
}
struct node *delete_node(struct node *start)
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter the number  you want to delete\n");
    scanf("%d", &val);
    ptr = start;
    preptr = ptr;
    while (ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = ptr->next;
    free(ptr);
    return start;
}
struct node *delete_after(struct node *start)
{
    struct node *ptr, *temp;
    int val;
    printf("Enter the number after you want to delete\n");
    scanf("%d", &val);
    ptr = start;
    while (ptr->data != val)
    {
        ptr = ptr->next;
    }
    temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
    return start;
}
struct node *sort(struct node *start)
{
    struct node *ptr1, *ptr2;
    int temp;
    ptr1 = start;
    while (ptr1->next != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->data > ptr2->data)
            {
                temp = ptr1->data;
                ptr1->data = ptr2->data;
                ptr2->data = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return start;
}