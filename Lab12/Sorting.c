#include <stdio.h>

void sortStack(int input[], int size)
{
    int tmpStack[size];
    int top = -1;
    while (size >= 0)
    {
        int tmp = input[size];
        size--;
        while (top >= 0 && tmpStack[top] < tmp)// while temporary stack is not empty and top of stack is greater than temp
        {
            // pop from temporary stack and push it to the input stack
            input[++size] = tmpStack[top];
            top--;
        }
        // push temp in tempory of stack
        tmpStack[++top] = (tmp);
    }
    while (top >= 0)
    {
        printf("%d ", tmpStack[top--]);
    }
}

int main(){
    char ans='y';
    while(ans=='y'){
        int n, x;
        printf("Enter the number of elements you want to add in the stack: ");
        scanf("%d", &n);
        int input[n];
        int top = -1;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            input[++top] = x;
        }
        printf("\n%d\n",top);
        sortStack(input, top);
        printf("\n");
        fflush(stdin);
        printf("Do you want to continue??(y/n): ");
        scanf("%c",&ans);
    }
    return 0;
}