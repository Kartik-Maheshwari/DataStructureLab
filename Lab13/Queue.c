#include<stdio.h>
#define size 5

struct queue{
    int data[size];
    int front;
    int rear;
}Lqueue;        //Global Structure

void init(){
    Lqueue.front = -1;
    Lqueue.rear = -1;
}

void Enqueue(){
    int item;
    if (Lqueue.rear==size-1){
        printf("Queue Is Full");
        return;
    }
    printf("Enter the Element You want to insert: ");
    scanf("%d",&item);
    Lqueue.rear++;
    if (Lqueue.rear == 0){
        Lqueue.front++;
    }
    Lqueue.data[Lqueue.rear]=item;
    printf("Item Inserted.");
    printf("\nFront = %d , Rear = %d ",Lqueue.front,Lqueue.rear);
}

void Dequeue(){
    int item;
    if(Lqueue.front == -1){
        printf("Queue is Empty");
        return;
    }
    else{
        item=Lqueue.data[Lqueue.front];
        Lqueue.front++;
        if(Lqueue.front>Lqueue.rear){
            Lqueue.front=Lqueue.rear=-1;
        }
    }
    printf("The Deleted Element is: %d ",item);
    printf("\nFront = %d , Rear = %d ",Lqueue.front,Lqueue.rear);
}

void show(){
    if(Lqueue.front==-1){
        printf("Queue is Empty");
        return;
    }
    for(int i=Lqueue.front;i<=Lqueue.rear;i++){
        printf("%d ",Lqueue.data[i]);
    }
}

int main(){
    int c;
    init();
    do{
        printf("\n");
        printf("\n1.....Insert");
        printf("\n2.....Delete");
        printf("\n3.....Show");
        printf("\n4.....Reset.");
        printf("\n5.....Exit.");
        printf("\nEnter Your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            init();
            break;
        case 5:
            printf("See you Later.");
            break;
        default:
            printf("Invalid Coice");
            break;
        }
    }while(c!=5);
    return 0;
}