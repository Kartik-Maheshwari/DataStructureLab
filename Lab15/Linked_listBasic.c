#include<stdio.h>
#include<stdlib.h>

struct List
{
    int val;
    struct List *next;
};
struct List *start;

void add_beg(){
    struct List *new_node;
    new_node=(struct List *)malloc(sizeof(struct List));
    printf("\nEnter the value: ");
    scanf("%d",&new_node->val);
    new_node->next=NULL;
    if(start!=NULL){
        new_node->next = start;
    }
    start=new_node;
    printf("Node inserted at begining.");
}

void insert_end(){
    struct List * newnode = (struct List *)malloc(sizeof(struct List));
    printf("\nEnter Value: ");
    scanf("%d",&newnode->val);
    newnode->next=NULL;
    if(start==NULL){
        start=newnode;
    }
    else{
        struct List *node = start;
        while(node->next!=NULL){
            node=node->next;
        }
        node->next=newnode;
    }
    printf("Node inserted Successfully.");
}

void insert_pos(){
    int pos, flag=0;
    printf("Enter the position: ");
    scanf("%d",&pos);
    if(start==NULL || pos==1){
        insert_end();
        return;
    }
    struct List * temp=start;
    int counter=1;
    while(temp->next!=NULL){
        if(counter == pos -1){
            flag=1;
            struct List * newNode = (struct List *)malloc(sizeof(struct List));
            printf("\nEnter Value: ");
            scanf("%d",&newNode->val);
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Node inserted at %d",pos);
        }
        temp = temp -> next;
        counter++;
    }
    if(!flag){
        insert_end();
        printf("Node Inserted at last");
    }
}

void insert_before(){
    int val,flag=0;
    printf("Enter the value to search: ");
    scanf("%d",&val);
    if(start->val==val || start==NULL){
        add_beg();
        flag=1;
    }
    else{
        struct List * node = start->next;
        struct List * prev = start;
        while(node->next!=NULL){
            if(node->val == val)
            {
                flag=1;
                struct List * newnode = (struct List *)malloc(sizeof(struct List));
                printf("Enter the value:");
                scanf("%d",&newnode->val);
                prev->next=newnode;
                newnode->next=node;
            }
            node=node->next;
            prev=prev->next;
        }
    }
    if(flag){
        printf("Node Inserted.");
    }
    else{
        printf("Value not found! node not inserted.");
    }
}

void Remove_beg(){
    int val;
    if(start == NULL){
        printf("Empty List");
        return;
    }
    val=start->val;
    start=start->next;
    printf("Deleted Node with %d value",val);
}

void show(){
    if(start == NULL){
        printf("Empty.");
        return;
    }
    printf("Nodes are: \n");
    struct List *temp = start;
    while(temp!=NULL){
        printf("%d | %p \t",temp->val,temp->next);
        temp=temp->next;
    }
}

int main(){
    int c;
    do{
        printf("\n");
        printf("\n1.....Insert at Begining.");
        printf("\n2.....Insert at Last.");
        printf("\n3.....Show.");
        printf("\n4.....Insert Before.");
        printf("\n5.....Insert at Position.");
        printf("\n6.....Delete from Begining.");
        printf("\n7.....Delete from Last.");
        printf("\n8.....Exit.");
        printf("\nEnter Your Choice: ");
        scanf("%d",&c);
        switch (c){
        case 1:
            add_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            show();
            break;
        case 4:
            insert_before();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            Remove_beg();
            break;
        case 8:
            printf("See you Later.");
            break;
        default:
            printf("Invalid Coice");
            break;
        }
    }while(c!=8);
    // struct List *node;
    // struct List *node2;
    // node=(struct List *)malloc(sizeof(struct List));
    // node2=(struct List *)malloc(sizeof(struct List));
    // if(node==NULL){
    //     printf("Memory N/A");
    // }
    // printf("Enter the value: ");
    // scanf("%d",&node->val);
    // node->next=node2;
    // printf("%d\n",node->val);
    // printf("%u\n",node->next);
    // printf("%u\n",node);

    // printf("Enter the value: ");
    // scanf("%d",&node2->val);
    // node2->next=NULL;
    // printf("%d\n",node2->val);
    // printf("%u\n",node2->next);
    // printf("%u\n",node2);
    return 0;
}
