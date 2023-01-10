/*A linked list can be used to represent any polynomial */
#include"polynomial.h"

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
}
