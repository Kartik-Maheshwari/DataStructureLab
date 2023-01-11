// Program for Finding Minimum in the Stack.
#include<stdio.h>
#define size 30

struct Stack{
    int data[size];     
    int top;    
}s;

int isEmpty(){
    return (s.top==-1);
}

void push(int val){
    if(s.top == (size-1)){
        printf("Stack is full");
    }
    else{
        s.data[++s.top]=val;
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack Empty");
        return 0;
    }else{
        return s.data[s.top--];
    }
}

void show(){
    if(isEmpty()){
        printf("Stack Empty");
    }else{
        printf("\nStack items are: \n");
        for(int i=s.top;i>=0;i--){
                printf("%d\n",s.data[i]);
        }
    }
}

int minm(){
    int k = pop();
    while(!isEmpty()){
        int t=pop();
        if(k>t){
            k=t;
        }
    }
    return k;
}

int main(){
    s.top=-1;
    push(10);
    push(5);
    push(2);
    push(24);
    push(14);
    push(34);
    show();
    printf("\nThe minimum number in the stack is: %d",minm());
    return 0;
}