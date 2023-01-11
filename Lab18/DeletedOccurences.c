/* Program for deletion of all the occurences of x from a linked list. */
#include "linkedlist.h"

void delsearchedelement(Node **start, int sval){
    int count=0;
    while((*start) !=NULL && (*start)->val == sval){
        (*start)=(*start)->next;
    }
    Node *prev= NULL;
    Node *current  = (*start);
    while(current!=NULL){
        if(current->val == sval)
            prev->next=current->next;
        else
            prev=current;
        current = current->next;
    }
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
    delsearchedelement(&st1,x);
    printf("\nThe List without x is:" );
    show(st1);
    return 0;
}