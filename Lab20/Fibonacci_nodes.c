// Program to remove all Fibonacci Nodes from a Circular Singly Linked List.
#include"cir_linked_primitive.h"
#include<math.h>

int isPerfectSquare(int x){
    int s = (int)sqrt(x);
    return (s * s == x);
}

int isFibonacci(int x)
{
    return isPerfectSquare(5 * x * x + 4) || isPerfectSquare(5 * x * x - 4);
}

void remFib(Node **l1){
    Node * cur=(*l1);
    do{
        // if(isFibonacci(curr->val)){
        if(cur->val==11){
            delete_node(l1,cur->val);
        }
        cur=cur->next;
    }while(cur!=(*l1));

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
    Node * cur=last1;
    do{
        // if(isFibonacci(curr->val)){
        
        // delete_node(&last1,11);
        
        cur=cur->next;
    }while(cur!=last1);
    show(last1);
}