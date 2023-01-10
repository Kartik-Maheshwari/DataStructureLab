/* Program for deletion of all the occurences of x from a linked list. */
#include "linkedlist.h"

int searchin(Node *start, int sval){
    Node *current  = start;
    while(current !=NULL){
        if(current->val == sval)
            return 1;
        current = current->next;
    }
    return 0;
}

int main(){
    Node * st1 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,9);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    insert_beg(&st1,8);
    insert_beg(&st1,9);
    insert_beg(&st1,9);
    insert_beg(&st1,9);
    show(st1);
    int x;
    printf("\nEnter the value of the value you want to delete: ");
    scanf("%d",&x);
    int count=0;
    Node *curr = st1;
    while(curr !=NULL){
        if(searchin(st1,curr->val)){
            count++;
        }
        curr=curr->next;
    }
    printf("\nThe count of x is: %d",count);
    return 0;
}