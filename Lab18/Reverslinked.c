/*To reverse a linked linst in order of n times we have two options:
1->Using stack: With the help of stack we can reverse the linked list with extra space of O(n).
2->Using 3 Nodes: In this we need only three nodes so it is more efficient compariing with stack method.
*/
#include"linkedlist.h"

void reverse(Node **start){
    Node * Next = NULL;
    Node * prev = NULL;
    Node * curr = (*start);
    while(curr!=NULL){
        Next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    (*start)=prev;
}

int main(){
    Node * st1 = initialize();
    insert_last(&st1,10);
    insert_last(&st1,20);
    insert_last(&st1,30);
    insert_last(&st1,40);
    insert_last(&st1,50);
    show(st1);
    reverse(&st1);
    show(st1);
    return 0;
}