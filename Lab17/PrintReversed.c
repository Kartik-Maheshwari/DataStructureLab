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

int main(){
    struct stack sta;
    sta.top=-1;
    Node * st1 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    show(st1);
    Node * curr=st1;
    while(curr!=NULL){
        push(&sta,curr->val);
        curr=curr->next;
    }
    printf("\nElements in the reversed order are: ");
    while(sta.top!=-1){
        int r=pop(&sta);
        printf("\n%d",r);
    }
    return 0;
}