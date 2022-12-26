#include "linkedlist.h"

int main(){
    Node * st1 = initialize();
    Node * st2 = initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    insert_beg(&st2,25);
    insert_beg(&st2,20);
    insert_beg(&st2,15);
    show(st2);
    Node *curr = st1;
    while(curr->next !=NULL){
        curr=curr->next;
    }
    curr->next=st2;
    printf("\nConcatenated Linked list is:");
    show(st1);

    return 0;
}