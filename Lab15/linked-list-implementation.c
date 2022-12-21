#include <stdio.h>
#include <malloc.h>

struct list
{
    int val;
    struct list *next;
};
struct list *start;

void insertBeg()
{
    struct list *new_node;
    new_node = (struct list *)malloc(sizeof(struct list));
    printf("Enter value: ");
    scanf("%d", &new_node->val);
    new_node->next = NULL;
    if (start != NULL)
    {
        new_node->next = start;
    }
    start = new_node;
    printf("Node inserted at the beginning.\n");
}

void insertEnd()
{
    struct list *newnode = (struct list *)malloc(sizeof(struct list));
    printf("Enter value:");
    scanf("%d", &newnode->val);
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        struct list *node = start;
        while (node->next != NULL)
        {
            node = node->next;
        }
        node->next = newnode;
    }
    printf("Node inserted at the end");
}

void insertPOSITION()
{
    int pos, flag = 0;
    if (start == NULL)
    {
        insertBeg();
        flag = 2;
    }
    else
    {
        printf("Enter position to insert: ");
        scanf("%d", &pos);
        struct list *temp = start;
        int count = 1;
        while (temp != NULL)
        {
            if (count == pos - 1)
            {
                flag = 1;
                struct list *newnode = (struct list *)malloc(sizeof(struct list));
                printf("Enter value: ");
                scanf("%d", &newnode->val);
                newnode->next = temp->next;
                temp->next = newnode;
            }
            temp = temp->next;
            count++;
        }
    }
    if (flag == 1)
    {
        printf("New Node inserted at position %d", pos);
    }
    else if (flag == 2)
    {
    }
    else
    {
        printf("Node not inserted");
    }
}

void insertBeforeValue()
{
    int val, flag = 0;

    printf("Enter value: ");
    scanf("%d", &val);

    struct list *node = start;
    if (start->val == val)
    {
        flag = 1;
        insertBeg();
    }
    else
    {

        struct list *newnode = (struct list *)malloc(sizeof(struct list));
        printf("Enter value to insert: ");
        scanf("%d", &newnode->val);
        struct list *prev = start;
        node = node->next;

        while (node != NULL)
        {
            if (node->val == val)
            {
                flag = 1;
                newnode->next = node;
                prev->next = newnode;
            }
            node = node->next;
            prev = prev->next;
        }
    }
    if (flag == 1)
    {
        printf("New Node inserted before value %d\n", val);
    }
    else
    {
        printf("Node not found!\n");
    }
}

int isEmpty()
{
    return (start == NULL);
}

void deleteBeg()
{
    if (isEmpty())
    {
        printf("linked-list empty!");
        return;
    }
    else
    {
        struct list *node = start;
        int del;
        del = node->val;
        start = node->next;
        printf("Value-%d deleted from beginning", del);
    }
}

void deleteEnd()
{
    if (isEmpty())
    {
        printf("empty!");
        return;
    }
    struct list *node = start;
    if (start->next == NULL)
    {
        start = NULL;
        return;
    }

    struct list *temp = start->next;
    struct list *prev = start;

    while (temp->next != NULL)
    {
        temp = temp->next;
        prev = prev->next;
    }
    prev->next = NULL;
    printf("Last Node Deleted! %d", temp->val);
    free(temp);
}

// deletion using stack is also possible
void deleteUsingStack()
{
}

void deleteByPosition()
{
    struct list *node;
    if (isEmpty())
    {
        printf("Linked List Empty!");
        return;
    }
    int pos, flag = 0;
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    if (pos == 1)
    {
        flag = 1;
        node = start;
        start = start->next;
    }
    else
    {
        node = start->next;
        struct list *prev = start;
        int count = 2;
        while (node != NULL)
        {
            if (count == pos)
            {
                flag = 1;
                prev->next = node->next;
            }
            else
            {
                prev = prev->next;
                node = node->next;
                count++;
            }
        }
    }
    if (flag == 0)
    {
        printf("Node not found!");
    }
    else
    {
        printf("%d Node deleted from position %d", node->val, pos);
    }
}
void deleteByValue()
{
}

void show()
{
    if (start == NULL)
    {
        printf("empty list");
        return;
    }
    printf("nodes are\n");
    struct list *temp = start;
    while (temp != NULL)
    {
        printf("%d  %p %p\n", temp->val, temp->next, temp);
        temp = temp->next;
    }
}

void menu()
{
    int choice;
    printf("\n1..................Insert from front\n");
    printf("2..................Insert from end\n");
    printf("3..................Insert at position\n");
    printf("4..................Insert before value\n");
    printf("5..................delete from front\n");
    printf("6..................delete from end\n");
    printf("7..................delete by position\n");
    printf("8..................delete by value\n");
    printf("9..................Show\n");
    printf("10..................Exit\n");
    printf("Enter your choice: ");
}

int main()
{
    int choice;
    do
    {
        menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertBeg();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            insertPOSITION();
            break;
        case 4:
            insertBeforeValue();
            break;
        case 5:
            deleteBeg();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deleteByPosition();
            break;
        case 8:
            deleteByValue();
            break;
        case 9:
            show();
            break;
        case 10:
            printf("Thank You for using linked-list!");
            break;

        default:
            printf("Please Enter Valid Choice.");
        }
    } while (choice != 10);
}