#include"linkedlist.h"

int listtonum(Node * start){
    Node * curr = start;
    int n=0;
    while(curr!=NULL){
        n = n*10 + curr->val;
        curr=curr->next;
    }
    return n;
}

int main(){
    Node * st1 = initialize();
    Node * st2 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,9);
    insert_beg(&st1,5);
    insert_beg(&st1,8);
    insert_beg(&st2,2);
    insert_beg(&st2,7);
    insert_beg(&st2,4);
    show(st1);
    show(st2);
    printf("\nThe number of first list is: %d",listtonum(st1));
    printf("\nThe number of second list is: %d",listtonum(st2));
    printf("\nThe sum of two linked list is: %d",listtonum(st1)+listtonum(st2));
}
