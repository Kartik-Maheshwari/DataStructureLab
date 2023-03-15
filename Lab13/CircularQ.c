#include <stdio.h>
#define size 5
struct queue
{
    int front;
    int rear;
    int data[size];
} cq;
int enqueue()
{
    int item;
    if ((cq.rear + 1) % size == cq.front)
    {
        printf("Queue is full");
        return 0;
    }

    if (cq.front == -1)
        cq.front = cq.rear = 0;
    else
        cq.rear = (cq.rear + 1) % size;
    printf("Enter item");
    scanf("%d", &cq.data[cq.rear]);
    printf("Item inserted");
    return 1;
}

int dequeue()
{
    int item;
    if (cq.front == -1)
    {
        printf("Queue is empty");
        return 0;
    }
    item = cq.data[cq.front];
    if (cq.front == cq.rear)
    {
        cq.front = cq.rear = -1;
    }
    else
    {
        cq.front = (cq.front + 1) % size;
        printf("Item deleted");
    }
    return item;
}
int show()
{
    int i;
    if (cq.front == -1)
    {
        printf("Empty");
        return 0;
    }
    printf("Queue items are:\n");
    i = cq.front;
    while (i != cq.rear)
    {
        printf("%d  ", cq.data[i]);
        i = (i + 1) % size;
    }
    printf("%d  ", cq.data[i]);
}
void menu()
{
    printf("\n");
    printf("\n1.....Insert");
    printf("\n2.....Delete");
    printf("\n3.....Show");
    printf("\n4.....Exit.");
    printf("\nEnter Your Choice: ");
}
int main()
{
    int choice;
    cq.front = cq.rear = -1;
    do
    {
        menu();
        scanf("%d", &choice);
        switch (choice)
        {
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