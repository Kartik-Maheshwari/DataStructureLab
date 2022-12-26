//Implementation of linear search
#include "linkedlist.h"

int main(){
    int s;
    Node * st1 = initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    show(st1);
    printf("\nEnter the value to search:");
    scanf("%d",&s);
    Node *curr = st1;
    while(curr !=NULL){
        if(curr->val == s){
            printf("Value is found .");
            return 0;
        }
        curr=curr->next;
    }
    printf("\nNot Found:");
    return 0;
}