#include<stdio.h>

struct stack{
    int data[20];
    int top;
};

void push(struct stack *st,int r){
    st->top++;
    st->data[st->top]=r;
}

int pop(struct stack *st){
    int r = st -> data[st->top];
    st->top--;
    return r;
}

void main(){
    struct stack st;
    int num;
    st.top=-1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0){
        int r = num%8;
        push(&st,r);
        num/=8;
    }
    printf("The Octal Number is:\n");
    while(st.top!=-1){
        int r=pop(&st);
        printf("%d",r);
    }
}
