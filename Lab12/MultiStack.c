// Program for implementation of 2 stacks using a single Array
#include<Stdio.h>
#define SIZE 10

int ar[SIZE];
int top1 = -1;
int top2 = SIZE;

void reset_st1(){
    top1=-1;
    printf("\nStack 1 is reset.");
}

void reset_st2(){
    top2=SIZE;
    printf("\nStack 2 is reset.");
}

// Functions to push data
void push_st1(int data){
    if (top1 < top2 - 1){
        ar[++top1] = data;
        printf("\nElement inserted in stack 1.");
    }
    else{
        printf("Stack 1 is Full!\n");
    }
}

void push_st2(int data){
    if (top1 < top2 - 1){
        ar[--top2] = data;
        printf("\nElement inserted in stack 2.");
    }
    else{
        printf("Stack 2 is Full!\n");
    }
}

// Functions to pop data
void pop_st1(){
    if (top1 >= 0){
        int a = ar[top1--];
        printf("%d is being popped from Stack 1\n", a);
    }
    else{
        printf("Stack 1 is Empty!\n");
    }
}

void pop_st2(){
    if (top2 < SIZE){
        int a = ar[top2++];
        printf("%d is being popped from Stack 2\n", a);
    }
    else{
        printf("Stack 2 is Empty!\n");
    }
}

// Functions to Print Stack 1 and Stack 2
void print_st1(){
    int i;
    for (i = top1; i >= 0; --i){
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void print_st2(){
    int i;
    for (i = top2; i < SIZE; ++i){
        printf("%d ", ar[i]);
    }
    printf("\n");
}

int main(){
    int ar[SIZE];
    int p;
    int c;
    do{
        printf("\n\n1....Push in Stack1.\n");
        printf("2....Push in Stack2.\n");
        printf("3....Pop from Stack1.\n");
        printf("4....Pop from Stack2.\n");
        printf("5....Show Stack 1.\n");
        printf("6....Show Stack 2.\n");
        printf("7....Reset Stack 1.\n");
        printf("8....Reset Stack 2.\n");
        printf("9....Exit.\n");
        printf("Enter Your Choice: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("\nEnter the value to be pushed in Stack 1: ");
            scanf("%d",&p);
            push_st1(p);
            break;
        case 2:
            printf("\nEnter the value to be pushed in Stack 2: ");
            scanf("%d",&p);
            push_st2(p);
            break;
        case 3:
            pop_st1();
            break;
        case 4:
            pop_st2();
            break;
        case 5:
            print_st1();
            break;
        case 6:
            print_st2();
            break;
        case 7:
            reset_st1();
            break;
        case 8:
            reset_st2();
            break;
        case 9:
            printf("\nSee you Later.");
            break;
        default:
            printf("\nInvalid Coice");
            break;
        }
    }while(c!=9);
    return 0;
}