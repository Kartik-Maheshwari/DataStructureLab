#include"polynomial.h"

Node * polymul(Node * list1,Node * list2){
    Node *result =NULL;
    while(list1!=NULL){
        for(Node *l2=list2;l2!=NULL;l2=l2->next){
            int pow=list1->pow + list2->pow;
            int coe=list1->coe * list2->coe;
            insert_last(&result,coe,pow);
        }
        list1=list1->next;
    }
    Node * current = result;
    while(current!=NULL){
        for(Node *p=current;(p->next)!=NULL;p=p->next){
            if(p->next->pow == current->pow){
                Node *temp = p->next;
                current->coe = temp->coe;
                p->next = temp->next;
                free(temp);
            }
        }
        current=current->next;
    }
    return result;
}

int main(){
    Node *poly1 =initialize();
    Node *poly2 =initialize();
    insert_last(&poly1,5,3);
    insert_last(&poly1,4,2);
    insert_last(&poly1,2,0);

    insert_last(&poly2,-3,4);
    insert_last(&poly2,10,3);
    insert_last(&poly2,25,1);
    insert_last(&poly2,5,0);
    show(poly1);
    show(poly2);

    Node * result = polymul(poly1,poly2);
    show(result);
}