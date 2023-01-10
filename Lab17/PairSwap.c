//Program for Pair wise swap of elements in linked list
#include"linkedlist.h"

void PairSwap(Node **start){
    Node* curr = *start;
    Node *prev = NULL;
 
    while (curr != NULL && curr->next != NULL)
    {
        Node* sw = curr->next;
        curr->next = sw->next;
        sw->next = curr;
 
        if (prev == NULL) {
            *start = sw;
        }
        else {
            prev->next = sw;
        }
 
        prev = curr;
        curr = curr->next;
    }
    
}

int main(){
    Node * st1 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,19);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    show(st1);
    PairSwap(&st1);
    show(st1);
    return 0;
}