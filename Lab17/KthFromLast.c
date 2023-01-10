//Program to find kth node from the last in a single link list
#include"linkedlist.h"

int cnodes(Node *start){
    int count = 0;
    Node *node = start;
    while(node!=NULL){
        node=node->next;
        count++;
    }
    return count;
}

void klast(Node * start,int k){
    Node *node = start;
    int v = cnodes(start) - k;
    if(v>0){
        while(v>0){
            node=node->next;
            v--;
        }
        printf("\nThe value of the Kth node from the last is %d",node->val); 
    }
    else{
        printf("\nIncorrect position.");
    }
}

int main(){
    Node *st1=initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    show(st1);
    int val;
    printf("\nEnter the value of k: ");
    scanf("%d",&val);
    klast(st1,val);
    return 0;
}