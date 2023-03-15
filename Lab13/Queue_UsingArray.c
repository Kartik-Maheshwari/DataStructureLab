#include<stdio.h>
#define size 5
int front, rear, data[size];

void init(){
    front = -1;
    rear = -1;
}

void Enqueue(){
    int item;
    if (rear==size-1){
        printf("\nQueue Is Full");
        return;
    }
    printf("Enter the Element You want to insert: ");
    scanf("%d",&item);
    rear++;
    if (rear == 0){
        front++;
    }
    data[rear]=item;
    printf("\nItem Inserted.");
    printf("\nFront = %d , Rear = %d ",front,rear);
}

void Dequeue(){
    int item;
    if(front == -1){
        printf("Queue is Empty");
        return;
    }
    else{
        item=data[front];
        front++;
        if(front>rear){
            front=rear=-1;
        }
    }                                                                                                                                           
    printf("The Deleted Element is: %d ",item);
    printf("\nFront = %d , Rear = %d ",front,rear);
}

void show(){
    if(front==-1){
        printf("Queue is Empty");
        return;
    }
    for(int i=front;i<=rear;i++){
        printf("%d ",data[i]);
    }
}

int main(){
    int c;
    printf("Name: Kartik Maheshwari\nRoll No: 2100320120086\nBranch and Section: CS-B\n");
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