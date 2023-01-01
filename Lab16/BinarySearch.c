//The Binary Search can be implemented by linked list that is same as linear search in terms of time complexity 
//i.e. order of n 
//In array we can find middle element in constant time because we have index value associated with array but in 
//linked list we have to find middle element in order of n time with the help of two pointer approach that's why 
//the time complexity is order of n.
#include "linkedlist.h"
Node * middle(Node * start, Node *last){
    Node * slow = start;
    Node * fast = start->next;
    while(fast!=last){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow ->next;
        }
        return slow;
    }
}

Node * Binary(*start,int sval){
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
    }while(last!=NULL || start!=last)
}

int main(){
    
    
    return 0;
}