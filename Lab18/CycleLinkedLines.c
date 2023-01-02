/*To detect cycle in linked list with order of n time:
1->By adding an extra flag in each node that will identify visited or unvisited. By default the flag value 
will be 0 for all non-visited node. We will start the traversing from first node and mark the flag to 1 
If we got a node with flag 1 that means this node is visited twice, results the loop or cycle condition
If reached the last node and no nodes having flag 1 this means no cycle found 
Disadvantage is Extra space in each node.
2->Using slow and fast pointer.
*/
#include"linkedlist.h"

int checkcycle(Node *start){
    Node *slow=(start);
    Node *fast=(start);
    while(slow!=NULL){
        fast=fast->next;
        if(fast==slow){
            return 1;
        }
        slow=slow->next;
        if(fast!=NULL){
            fast=fast->next;
        }
    }
    return 0;
}

int main(){
    Node * st1 = initialize();
    insert_last(&st1,10);
    // insert_last(&st1,20);
    // insert_last(&st1,50);
    Node * node = st1;
    while(node->next!=NULL){
        node=node->next;
    }
    node->next=st1;
    if(checkcycle(st1)){
        printf("It has cycle.");
    }
    else{
        printf("No cycle");
    }
    return 0;
}