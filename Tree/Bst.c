#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>

struct node{
    struct node* left;
    int data;
    struct node* right;
};

struct node* tree;
void create_tree(struct node*);
struct node* insertelement(struct node* ,int);
void pre_order(struct node*);
void in_order(struct node*);
void post_order(struct node*);

int main(){
    int option,val;
    struct node* ptr;
    create_tree(tree);
    do{
        printf("\n<----Main Mainu---->\n");
        printf("1.Insert Element\n");
        printf("2. The elements of the tree in preordertraversal\n");
        printf("3. The elements of the tree in inordertraversal\n");
        printf("4. The elements of the tree in postordertraversal\n");
        printf("12. Enter to exit\n");
        printf("Enter the option\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1: printf("Enter the value to insert in the tree \n");
                scanf("%d",&val);
                tree= insertelement(tree,val);
                break;
        case 2: printf("Preorder Traversal\n");
                pre_order(tree);
                break;        
        case 3: printf("Inorder Traversal\n");
                in_order(tree);
                break;        
        case 4: printf("Postorder Traversal\n");
                post_order(tree);
                break;                        
        
        default:
            break;
        }
    }while(option!=12);

return 0;
}


void create_tree(struct node* tree){
     tree=NULL;
}
 
struct node* insertelement(struct node* tree,int val){
    struct node *ptr,*nodeptr,*parentptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left =NULL;
    ptr->right=NULL;
    if(tree==NULL){
        tree=ptr;
        tree->left=NULL;
        tree->right=NULL;
    }
    else{
        parentptr=NULL;
        nodeptr=tree;
        while(nodeptr!=NULL){
            parentptr=nodeptr;
            if(val<nodeptr->data){
                nodeptr=nodeptr->left;
            }
            else{
                nodeptr=nodeptr->right;
            }
        }
        if(val<parentptr->data)
            parentptr->left =ptr;
        else
            parentptr->right=ptr;


    }

    return tree;

} 

void pre_order(struct node* tree){
    if(tree!=NULL){
        printf("%d\t",tree->data);
        pre_order(tree->left);
        pre_order(tree->right);
    }
    
}
void in_order(struct node* tree){
    if(tree!=NULL){
        in_order(tree->left);
        printf("%d\t",tree->data);
        in_order(tree->right);
    }
    
}

void post_order(struct node* tree){
    if(tree!=NULL){
        post_order(tree->left);
        post_order(tree->right);
        printf("%d\t",tree->data);
    }
    
}


