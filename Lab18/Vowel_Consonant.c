#include "linkedlist.h"

int isvowel(char s){
    return(s=='a' || s=='e' || s=='i' || s=='o' || s=='u');
}

void show_char(Node *start){
    if (!isEmpty(start)){
        printf("\nLinked list is\n");
        while (start != NULL){
            printf("%c | %p\t", start->val, start->next);
            start = start->next;
        }
    }
}

void arrange_list(Node **start){
    Node * vow = NULL;
    Node * curr = (*start);
    if((*start)==NULL){
        pritnf("List is Empty.");
    }
    else if(isvowel((*start)->val)){
        vow = (*start);
    }
    else{
        while(curr!=NULL && !isvowel(curr->val)){
            curr=curr->next;
        }
        (*start)->next=curr->next;
        curr->next=(*start);
        (*start)=curr;
        vow=(*start);
    }
    Node * frwd = (*start)->next;
    while(frwd!=NULL){
        if(isvowel(frwd->val)){
            curr->next=frwd->next;
            frwd->next=vow->next;
            vow->next=frwd;
            vow=vow->next;
            frwd=curr->next;
        }
        frwd=frwd->next;
        curr=curr->next;
    }
}

int main(){
    Node * st1 = initialize();
    insert_last(&st1,'a');
    insert_last(&st1,'b');
    insert_last(&st1,'e');
    insert_last(&st1,'s');
    insert_last(&st1,'e');
    insert_last(&st1,'c');
    show_char(st1);
    arrange_list(&st1);
    show_char(st1);
    return 0;
}