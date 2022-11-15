#include<stdio.h>
#define size 10
int top, stack[size];


void initialize(){
    top=-1;
}

int isEmpty(){
    return(top==-1);
}

void push(){
    if(top==size-1){
        printf("Stack is Full");
        return;
    }
    printf("Enter any Number: ");
    scanf("%d",&stack[++top]);
}

void pop(){
    if(isEmpty()){
        printf("Stack is Empty.");
        return;
    }
    printf("Popped element is: ",&stack[top--]);
}

void peek(){
    if(isEmpty()){
        printf("Stack is Empty.");
        return;
    }
    printf("Popped element is: ",&stack[top]);
}

void show(){
    if(isEmpty()){
        printf("Stack is Empty.");
        return;
    }
    for (int i=top;i>0;i--){
        printf("%d\n",stack[i]);
    }
}

int main(){
    int c;
    initialize();
    do{
        printf("1....Push.\n");
        printf("2....Pop.\n");
        printf("3....Show.\n");
        printf("4....Peek.\n");
        printf("5....Reset.\n");
        printf("6....Exit.\n");
        printf("Enter Your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            peek();
            break;
        case 5:
            initialize();
            break;
        case 6:
            printf("See you Later.");
            break;
        default:
            printf("Invalid Coice");
            break;
        }
    }while(c!=6);
    return 0;
}