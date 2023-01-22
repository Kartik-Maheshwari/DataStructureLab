#include"cir_linked_primitive.h"

void reverse(Node** last)
{
    if (*last == NULL)
        return;
    Node* prev = NULL;
    Node* current = (*last)->next;
    Node* next;
    do {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    } while (current->next!=NULL);
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
