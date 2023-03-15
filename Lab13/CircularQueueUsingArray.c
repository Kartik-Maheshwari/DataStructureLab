#include <stdio.h>
#define size 5
int front, rear, data[size];

int enqueue(){
    int item;
    if ((rear + 1) % size == front){
        printf("Queue is full");
        return 0;
    }

    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % size;
    printf("Enter item: ");
    scanf("%d", &data[rear]);
    printf("Item inserted");
    return 1;
}

int dequeue(){
    int item;
    if (front == -1){
        printf("Queue is empty");
        return 0;
    }
    item = data[front];
    if (front == rear){
        front = rear = -1;
    }
    else{
        front = (front + 1) % size;
        printf("Item deleted");
    }
    return item;
}
int show(){
    int i;
    if (front == -1){
        printf("Empty");
        return 0;
    }
    printf("Queue items are:\n");
    i = front;
    while (i != rear){
        printf("%d  ", data[i]);
        i = (i + 1) % size;
    }
    printf("%d  ", data[i]);
}
void menu(){
    printf("\n");
    printf("\n1.....Insert");
    printf("\n2.....Delete");
    printf("\n3.....Show");
    printf("\n4.....Exit.");
    printf("\nEnter Your Choice: ");
}
int main(){
    int choice;
    front = rear = -1;
    printf("Name: Kartik Maheshwari\nRoll No: 2100320120086\n Branch and Section: CS-B\n");
    do{
        menu();
        scanf("%d", &choice);
        switch (choice){
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("See You Later.....");
            break;
        default:
            printf("Invalid Coice");
        }
    } while (choice != 4);
}