//Program to Modify a Circular Linked List such that each node stores the sum of all nodes except itself
#include"cir_linked_primitive.h"

int total(Node *l1){
    Node *curr=l1;
    int sum=0;
    do{
        sum+=curr->val;
        curr=curr->next;
    }while(curr!=l1);
    return sum;
}

void modify(Node **l1,int sum){
    Node *curr=(*l1);
    do{
        curr->val = sum - curr->val;
        curr=curr->next;
    }while(curr!=(*l1));
}

int main(){
    Node * last1=NULL;
    insert_beg(&last1,5);
    insert_beg(&last1,10);
    insert_beg(&last1,20);
    insert_last(&last1,11);
    insert_last(&last1,45);
    insert_last(&last1,55);
    show(last1);
    modify(&last1,total(last1));
    show(last1);
}