#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int val;
    struct Node * next;
}Node;

Node * createNode(int val){
    Node *temp =(Node *)malloc(sizeof(Node));
    temp->val=val;
    temp->next=NULL;
    return temp;
}

void insert_beg(Node **last, int x)
{
    Node *newNode = createNode(x);
    if(*last==NULL){
        (*last)=newNode;
        newNode->next=newNode;
    }
    else{
        newNode->next=(*last)->next;
        (*last)->next=newNode;
    }
}

void insert_last(Node **last,int x){
    Node *newNode = createNode(x);
    if(*last==NULL){
        (*last)=newNode;
        newNode->next=newNode;
    }
    else{
        newNode->next=(*last)->next;
        (*last)->next=newNode;
        (*last)=(*last)->next;
    }
}

void delete_node(Node **last,int val){
    if((*last)==NULL){
        printf("\nCircular Linked List is Empty.");
        return;
    }
    Node *curr = (*last)->next,*prev;
    while (curr->val !=val)
    {
        if(curr->next == (*last)->next){
            printf("\nGiven Node is not found.\n");
            return;
        }
        prev = curr;
        curr=curr->next;
    }
    if(curr->val == val){
        (*last)->next = curr->next;
        return;
    }
    prev->next = curr->next;
    if(curr == (*last)){
        (*last)=prev;
    }
}

void show(Node *last){
    if(last ==NULL){
        printf("List is Empty");
        return;
    }
    Node *curr = last->next;
    printf("Circular linked list is:\n");
    do{
        printf("%d  |  %p  ",curr->val,curr->next);
        curr=curr->next;
    }while(curr!= last->next);
    printf("\n");
}

// int main(){
//     Node * last1=NULL;
//     // Node *last;
//     insert_beg(&last1,5);
//     insert_beg(&last1,10);
//     insert_beg(&last1,20);
//     insert_beg(&last1,12);
//     insert_beg(&last1,16);
//     show(last1);
//     int k;
//     printf("Enter the value of the node you want to delete: ");
//     scanf("%d",&k);
//     delete_node(&last1,k);
//     show(last1);
// }