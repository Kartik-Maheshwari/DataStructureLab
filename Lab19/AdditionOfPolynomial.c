#include"polynomial.h"

Node * AddPoly(Node *list1,Node *list2){
    Node *res=NULL;
    while(list1!=NULL && list2!=NULL){
        if(list1->pow > list2->pow){
            insert_last(&res,list1->coe,list1->pow);
            list1=list1->next;
        }
        else if(list1->pow < list2->pow){
            insert_last(&res,list2->coe,list2->pow);
            list2=list2->next;
        }
        else{
            insert_last(&res,(list1->coe + list2->coe),list1->pow);
            list1=list1->next;
            list2=list2->next;
        }
    }
    if(list1!=NULL){
        while(list1!=NULL){
            insert_last(&res,list1->coe,list1->pow);
            list1=list1->next;
        }
    }
    if(list2!=NULL){
        while(list2!=NULL){
            insert_last(&res,list2->coe,list2->pow);
            list2=list2->next;
        }
    }
    return res;
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

    Node * result = AddPoly(poly1,poly2);
    show(result);
}