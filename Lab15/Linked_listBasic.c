#include<stdio.h>
#include<stdlib.h>
struct List
{
    int val;
    struct List *next;
};
struct List *start;

void add_beg(){
    struct List *new_node;
    new_node=(struct List *)malloc(sizeof(struct List));
    printf("\nEnter the value: ");
    scanf("%d",&new_node->val);
    new_node->next=NULL;
    if(start!=NULL){
        new_node->next = start;
    }
    start=new_node;
    printf("Node inserted at begining.");
}

void show(){
    if(start == NULL){
        printf("Empty.");
        return;
    }
    printf("Nodes are: \n");
    struct List *temp = start;
    while(temp!=NULL){
        printf("%d | %p \t",temp->val,temp->next);
        temp=temp->next;
    }
}

int main(){
    add_beg();
    add_beg();
    add_beg();
    add_beg();
    add_beg();
    show();
    // struct List *node;
    // struct List *node2;
    // node=(struct List *)malloc(sizeof(struct List));
    // node2=(struct List *)malloc(sizeof(struct List));
    // if(node==NULL){
    //     printf("Memory N/A");
    // }
    // printf("Enter the value: ");
    // scanf("%d",&node->val);
    // node->next=node2;
    // printf("%d\n",node->val);
    // printf("%u\n",node->next);
    // printf("%u\n",node);

    // printf("Enter the value: ");
    // scanf("%d",&node2->val);
    // node2->next=NULL;
    // printf("%d\n",node2->val);
    // printf("%u\n",node2->next);
    // printf("%u\n",node2);
    return 0;
}
