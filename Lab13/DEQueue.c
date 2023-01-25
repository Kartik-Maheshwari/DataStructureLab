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

void Enqueue(int x){
    int item;
    switch (x)
    {
    case 1:
        if (Lqueue.rear==size-1){
            printf("\nQueue Is Full");
            return;
        }
        printf("Enter the Element You want to insert: ");
        scanf("%d",&item);
        Lqueue.rear++;
        if (Lqueue.rear == 0){
            Lqueue.front++;
        }
        Lqueue.data[Lqueue.rear]=item;
        printf("\nItem Inserted.");
        printf("\nFront = %d , Rear = %d ",Lqueue.front,Lqueue.rear);
        break;
    case 2:
        if(Lqueue.rear == size -1 && Lqueue.front==0){
            printf("\nQueue Is Full");
            return;
        }
        else {
            int end;
            printf("\n Select Insertion form  1->Front  2-> Rear: ");
            scanf("%d",&end);
            if(end==1){
                if(Lqueue.front==0){
                    printf("\nInsertion not possible");
                }
                else{
                    printf("\nEnter the Element You want to insert: ");
                    scanf("%d",&item);
                    Lqueue.data[--Lqueue.front] = item;
                }
            }
            else if(end == 2){
                if(Lqueue.rear == size -1){
                    printf("\nInsertion not possible");
                }
                else{
                    printf("\nEnter the Element You want to insert: ");
                    scanf("%d",&item);
                    Lqueue.rear++;
                    Lqueue.data[Lqueue.rear] = item;
                }
            }
            
        }
        break;
    }
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
    int c,x;
    init();
    printf("\n");
    printf("#----------------------------------------------------------------------#");
    printf("\n|----------------------Implementation of Dequeue-----------------------|");
    printf("\n#----------------------------------------------------------------------#");
    printf("\nSelect your Choice:");
    printf("\n 1..INPUT RESTRICTED QUEUE.");
    printf("\n 2..OUTPUT RESTRICTED QUEUE.");
    printf("\n\nEnter your choice:");
    scanf("%d",&x);
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
            Enqueue(x);
            break;
        case 2:
            // Dequeue();
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