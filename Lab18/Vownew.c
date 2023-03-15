#include "linkedlist.h"

int isvowel(char s){
    return(s=='a' || s=='e' || s=='i' || s=='o' || s=='u' ||
            s=='A' || s=='E' || s=='I' || s=='O' || s=='U');
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
        printf("List is Empty.");
    }
    else if(isvowel((*start)->val)){
        vow = (*start);
    }
    else{
        while(curr->next!=NULL && !isvowel(curr->next->val)){
            curr=curr->next;
        }

        // (*start)->next=curr->next;
        // curr->next=(*start);
        // (*start)=curr;
        // vow=(*start);

        if(curr->next == NULL){
            return;
        }
        vow=curr->next;
        curr->next=vow->next;
        vow->next=(*start);
        (*start)=vow;

    }
    
    while(curr->next!=NULL){    //No need to create new variable as before curr there will be no vowels.
        if(isvowel(curr->next->val)){
            Node * temp=curr->next;
            curr->next=temp->next;
            temp->next=vow->next;
            vow->next=temp;
            vow=temp;
        }
        curr=curr->next;
    }
    printf("%c\n",vow->val);
    printf("%c\n",curr->val);

    // Node * frwd = (*start)->next;
    // while(frwd!=NULL){
    //     if(isvowel(frwd->val)){
    //         curr->next=frwd->next;
    //         frwd->next=vow->next;
    //         vow->next=frwd;
    //         vow=vow->next;
    //         frwd=curr->next;
    //     }
    //     frwd=frwd->next;
    //     curr=curr->next;
    // }
}

int main(){
    Node * st1 = initialize();
    insert_last(&st1,'A');
    insert_last(&st1,'b');
    insert_last(&st1,'c');
    insert_last(&st1,'d');
    insert_last(&st1,'e');
    insert_last(&st1,'f');
    insert_last(&st1,'g');
    insert_last(&st1,'h');
    insert_last(&st1,'m');
    show_char(st1);
    arrange_list(&st1);
    show_char(st1);
    return 0;
}