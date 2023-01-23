#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
    struct Node *prev;
    int val;
    struct Node *next;
} Node;

Node *initialize(){
    return NULL;
}

Node *createNode(int x){
    Node *node = (Node *)malloc(sizeof(Node));
    node->val = x;
    node->next = NULL;
    node->prev = NULL;
}

int isEmpty(Node *start){
    if (start == NULL){
        printf("\nEmpty List");
        return 1;
    }
    return 0;
}

void insert_beg(Node **start,int x){
    Node *newNode = createNode(x);
    if (*start != NULL)
    {
        (*start)->prev=newNode;
        newNode->next = *start;
    }
    *start = newNode;
}

void insert_last(Node **start,int x){
    Node *newNode = createNode(x);
    if (*start == NULL)
    {
        *start = newNode;
    }
    else
    {
        Node *temp = *start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newNode->prev=temp;
        temp->next = newNode;
    }
}

void show(Node *start)
{
    if (!isEmpty(start))
    {
        printf("\nLinked list is\n");
        while (start != NULL)
        {
            printf("%p | %d | %p\t",start->prev, start->val, start->next);
            start = start->next;
        }
    }
}

int count(Node *start)
{
    int count = 0;
    if (start == NULL)
        return 0;
    while (start != NULL)
    {
        count++;
        start = start->next;
    }
    printf("\nTotal Nodes : %d",count);
    return count;
}

void insert_pos(Node **start, int pos, int x)
{
    int totalNodes = count(*start);
    if (totalNodes+1 < pos)
    {
        printf("\nInvalid position %d, Available Position %d-%d",pos,1,totalNodes+1);
        return;
    }

    Node *newNode = createNode(x);
    if (pos == 1)
    {
        insert_beg(start,x);
    }
    else if(totalNodes+1 == pos ){
        insert_last(start,x);
    }
    else
    {
        Node *current = *start;
        int p = 1;
        while (p < pos -1 )
        {
            current = current->next;
            p++;
        }
        newNode->next = current->next;
        newNode->prev=current;
        current->next->prev=newNode;
        current->next = newNode;
    }
    printf("\nNode inserted at %d", pos);
}

Node * search(Node *start, int sval){
    Node *current  = start;
    while(current !=NULL){
        if(current->val == sval)
            return current;
        current = current->next;
    }
    // printf("\nNode with %d value not found",sval);
    return NULL;
}


void del_beg(Node **start)
{
    if (!isEmpty(*start))
    {
        Node *temp = *start;
        *start = (*start)->next;
        printf("\nNode with value %d is deleted from the Beginning", temp->val);
        free(temp);
    }
}

void del_last(Node **start)
{
    if (!isEmpty(*start))
    {
        Node *temp = *start;
        if (temp->next == NULL)
        {
            printf("\nNode with value %d is deleted from the End", temp->val);
            *start = NULL;
        }
        else
        {
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            printf("\nNode with value %d is deleted from the End", temp->next->val);
            free(temp->next);
            temp->next = NULL;
        }
    }
}

void del_pos(Node **start, int pos){
    int totalNode = count(*start);
    if(totalNode< pos){
        printf("\nInvalid position %d to delete a node",pos);
        return;
    }

    if(pos == 1){
        del_beg(start);
    }
    else if(pos==totalNode){
        del_last(start);
    }
    else{
        int p = 2;
        Node *current  = (*start)->next;
        while(p<pos){
            current = current->next;
            p++;
        }
        current->prev->next = current->next;
        current->next->prev = current->prev;
        printf("\nNode at %d position with %d value deleted",pos,current->val);
        free(current);
    }
}

void delNode(Node **start,int val){
    Node *current = search(*start,val);
    if(current!=NULL){
        if(current->prev == NULL){
            *start = (*start)->next;
            (*start)->prev = NULL;
            printf("\nNode with %d value deleted",current->val);
            free(current);
        }
        else if(current->next == NULL){
            current->prev->next= NULL;
            printf("\nNode with %d value deleted",current->val);
            free(current);
        }
        else{
        current->prev->next = current->next;
        current->next->prev = current->prev;
        printf("\nNode with %d value deleted",current->val);
        free(current);
        }
    }
}

int main(){
    Node *list1 = initialize();
    insert_last(&list1,50);
    insert_last(&list1,40);
    insert_last(&list1,30);
    insert_last(&list1,20);
    insert_last(&list1,10);
    // show(list1);
    // insert_pos(&list1,1,15);
    show(list1);
    // del_pos(&list1,2);
    delNode(&list1,20);
    show(list1);
}
