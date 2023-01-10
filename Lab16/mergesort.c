/*Login
Find a middle node of any linked list using two pointer approach
*/
#include "linkedlist.h"

void split(Node *start, Node **List1, Node **List2){
        Node * slow = start;
        Node * fast = start->next;
        while(fast !=NULL){
                fast=fast->next;
                if(fast!=NULL){
                        slow=slow->next;
                        fast=fast->next;
                }
        }
        *List1 = start;
        *List2 = slow->next;
        slow->next=NULL;
}

Node * MergeSortedList(Node * List1,Node * List2){
        Node * result;
        if(List1 == NULL){
                return List2;
        }
        if(List2 == NULL){
                return List1;
        }
        if(List1->val <= List2->val){
                result=List1;
                result->next=MergeSortedList(List1->next,List2);
        }
        else{
                result=List2;
                result->next=MergeSortedList(List1,List2->next);
        }
        return result;
}

void MergeSort(Node **start){
        if(start == NULL || (*start)->next==NULL){
                return;
        }
        Node * list1;
        Node * list2;
        split(*start,&list1,&list2);
        MergeSort(&list1);
        MergeSort(&list2);
        *start=MergeSortedList(list1,list2);
}


int main(){
        Node * st1 = initialize();
        insert_beg(&st1,4);
        insert_beg(&st1,5);
        insert_beg(&st1,2);
        insert_beg(&st1,7);
        insert_beg(&st1,9);
        printf("\n Before Sorting:");
        show(st1);
        MergeSort(&st1);
        printf("\n After Sorting:");
        show(st1);
        return 0;
}