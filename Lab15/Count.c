//program for counting nodes even and odd information
#include "linkedlist.h"

int main(){
    int ce=0,co=0;
    Node * st1 = initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    Node *curr = st1;
    while(curr !=NULL){
        if(curr->val %2 == 0){
            ce++;
        }
        else{
            co++;
        }
        curr=curr->next;
    }
    show(st1);
    printf("\nOdd number of nodes: %d ",co);
    printf("\nEven number of nodes: %d ",ce);
    return 0;
}
