#include "linkedlist.h"

void Helper(Node **start,Node * newNode){
    if(newNode->val<(*start)->val){
        newNode->next = *start;
        *start = newNode;
    }
    else{
        Node *current = (*start)->next;
        Node * prev = *start;
        while(current!=NULL){
            if(current->val > newNode->val){
                break;
            }
            current=current->next;
            prev=prev->next;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

int searchin(Node *start, int sval){
    Node *current  = start;
    while(current !=NULL){
        if(current->val == sval)
            return 1;
        current = current->next;
    }
    return 0;
}

void SortList(Node **start){
    Node *start2= *start;
    *start =(*start)->next;
    start2->next= NULL;
    while(*start !=NULL){
        Node * temp = *start;
        *start = (*start)->next;
        temp->next = NULL;
        Helper(&start2,temp);
    }
    *start = start2;
}

int main(){
    Node * st1 = initialize();
    Node * st2 = initialize();
    Node * un = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    SortList(&st1);
    insert_beg(&st2,10);
    insert_beg(&st2,5);
    insert_beg(&st2,1);
    insert_beg(&st2,11);
    insert_beg(&st2,9);
    show(st1);
    SortList(&st2);
    show(st2);

//--------------------------------------------------------------------------------//

//Order of (n^2)
    // struct Node * t1 = st1, * t2 = st2;
    // while (t1 != NULL) {
    //     insert_last( & un, t1 -> val);
    //     t1 = t1 -> next;
    // }
    // while (t2 != NULL) {
    //     if (!searchin(un, t2 -> val))
    //         insert_last( & un, t2 -> val);
    //     t2 = t2 -> next;
    // }
    // show(un);

//--------------------------------------------------------------------------------//

//O(n)
    struct Node * t1 = st1, * t2 = st2;
    while(t1 !=NULL && t2 !=NULL){
        if(t1->val < t2->val){
            insert_last(&un,t1->val);
            t1=t1->next;
        }
        else if (t1->val == t2->val)
        {
            insert_last(&un,t1->val);
            t1=t1->next;
            t2=t2->next;
        }
        else{
            insert_last(&un,t2->val);
            t2=t2->next;
        }
    }
    if(t1 == NULL){
        while(t2!=NULL){
            insert_last(&un,t2->val);
            t2=t2->next;
        }
    }
    if(t2 == NULL){
        while(t1!=NULL){
            insert_last(&un,t1->val);
            t1=t1->next;
        }
    }
    show(un);
    return 0;
}