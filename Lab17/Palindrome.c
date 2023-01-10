//Program for finding if the given link list(character type) is palindrome or not
//Program to print Linked List contents in reverse order
#include<stdio.h>
#include"linkedlist.h"

struct stack{
    int data[20];
    int top;
};

void push(struct stack *st,int r){
    st->top++;
    st->data[st->top]=r;
}

int pop(struct stack *st){
    int r = st -> data[st->top];
    st->top--;
    return r;
}

void show_char(Node *start){
    if (!isEmpty(start)){
        printf("\nLinked list is\n");
        while (start != NULL){
            printf("%c | %p\t", start->val, start->next);
            start = start->next;
        }
    }
}

int main(){
    struct stack sta;
    sta.top=-1;
    Node * st1 = initialize();
    insert_last(&st1,'1');
    insert_last(&st1,'2');
    insert_last(&st1,'3');
    insert_last(&st1,'2');
    insert_last(&st1,'1');
    show_char(st1);
    Node * curr=st1;
    while(curr!=NULL){
        push(&sta,curr->val);
        curr=curr->next;
    }
    curr=st1;
    int flag=1;
    while(sta.top!=-1){
        if(pop(&sta) != curr->val){
            flag=0;
        }
        curr=curr->next;
    }
    if(!flag)
        printf("\nIt is not Palindrome.");
    else
        printf("\nIt is a Palindrome.");
    return 0;
}