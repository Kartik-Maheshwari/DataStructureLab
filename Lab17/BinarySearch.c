//The Binary Search can be implemented by linked list that is same as linear search in terms of time complexity 
//i.e. order of n 
//In array we can find middle element in constant time because we have index value associated with array but in 
//linked list we have to find middle element in order of n time with the help of two pointer approach that's why 
//the time complexity is order of n.
#include "linkedlist.h"

/*-----------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------------*/

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
/*-----------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------------*/


//Binary Search
Node * middle(Node * start, Node *last){
    Node * slow = start;
    Node * fast = start->next;
    while(fast!=last){
        fast = fast->next;
        if(fast != last){
            fast = fast->next;
            slow = slow ->next;
        }
    }
        return slow;
}

Node * Binary(Node *start,int sval){
    Node * last = NULL;
    do{
        Node * mid = middle(start,last);
        if(mid == NULL){
            return NULL;
        }
        if(mid->val==sval){
            return mid;
        }
        if(mid->val <sval){
            start=mid->next;
        }
        else{
            last = mid;
        }
    }while(last==NULL || start!=last);
}

int main(){
    Node * st1 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    SortList(&st1);
    show(st1);
    int v;
    printf("\nEnter the value you want to search: ");
    scanf("%d",&v);
    if(Binary(st1,v) !=NULL){
        printf("The value is found.");
    }
    else{
        printf("The value is not found.");
    }
    return 0;
}