//Implementation of linear search
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
    Node *curr = st1;
    while(curr !=NULL){
        insert_last(&st2,curr->val);
        curr=curr->next;
    }
    show(st1);
    printf("\nCopy of list\n");
    show(st2);
    return 0;
}