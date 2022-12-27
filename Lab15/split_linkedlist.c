//Program to split a linked list from a given position
//program for counting nodes even and odd information
#include "linkedlist.h"

int main(){
    int s;
    Node * st1 = initialize();
    Node * st2 = initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    printf("\nEnter the position");
    scanf("%d",&s);
    int i=1;
    Node *curr = st1;
    while(i<s){
        curr=curr->next;
        i++;
    }
    st2=curr->next;
    curr->next=NULL;
    show(st1);
    printf("\nList 2:\n");
    show(st2);
    return 0;
}
