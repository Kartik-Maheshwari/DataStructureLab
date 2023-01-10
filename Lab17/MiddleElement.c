#include"linkedlist.h"

Node * middle(Node * start){
    Node * slow = start;
    Node * fast = start->next;
    while(fast!=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow ->next;
        }
    }
        return slow;
}

int main(){
    Node * st1 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    show(st1);
    printf("\nThe middle element of the linked list is: %d",(middle(st1))->val);
}