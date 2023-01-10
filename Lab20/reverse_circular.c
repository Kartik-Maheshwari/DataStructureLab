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

void reverse(Node **last){
    Node * curr =(*last)->next;
    Node *prev =*last, *next=NULL;
    (*last)->next = 
}

int main(){
    Node * last1=NULL;
    Node * last2=NULL;
    // Node *last;
    insert_beg(&last1,5);
    insert_beg(&last1,10);
    insert_beg(&last1,20);
    insert_beg(&last2,25);
    insert_beg(&last2,15);
    insert_beg(&last2,25);
    show(last1);
    show(last2);
    Node *last = concat(last1,last2);
    show(last);

}
