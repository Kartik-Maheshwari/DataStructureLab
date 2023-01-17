#include"cir_linked_primitive.h"

void reverse(Node** last)
{
    // if list is empty
    if (*last == NULL)
        return;
 
    // reverse procedure same as reversing a
    // singly linked list
    Node* prev = NULL;
    Node* current = (*last)->next;
    Node* next;
    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current->next!=NULL);
 
    // adjusting the links so as to make the
    // last node point to the first node
    // (*last)->next = prev;
    // *last = prev;
    current->next=(*last);
    (*last)=next;
}

int main(){
    Node * last1=NULL;
    insert_beg(&last1,5);
    insert_beg(&last1,10);
    insert_beg(&last1,20);
    insert_beg(&last1,16);
    insert_beg(&last1,12);
    insert_beg(&last1,122);
    show(last1);
    reverse(&last1);
    printf("\nThe Reversed ");
    show(last1);

}
