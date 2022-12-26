#include "linkedlist.h"

int main(){
    Node *list1 = initialize();
    insert_beg(&list1,10);
    insert_beg(&list1,20);
    insert_last(&list1,30);
    insert_last(&list1,40);
    insert_beg(&list1,50);
    show(list1);
    del_beg(&list1);
    del_beg(&list1);
    show(list1);
    del_last(&list1);
    del_last(&list1);
    show(list1);
    insert_pos(&list1,1,5);
    show(list1);
    insert_pos(&list1,3,25);
    show(list1);
    insert_pos(&list1,3,15);
    show(list1);

}