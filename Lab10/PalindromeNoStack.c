//Program to check if the given number is a palindrome using stacks
#include<stdio.h>

struct stack{
    int data[20];
    int top;
};

int power(int p,int q){
    int a = 1;
    while(q>0){
        a = a* p;
        q--;
    }
    return a;
}

void push(struct stack *st,int r){
    st->top++;
    st->data[st->top]=r;
}

int pop(struct stack *st){
    int r = st -> data[st->top];
    st->top--;
    return r;
}

int pali(struct stack *st,int val){
    int num=val;
    while(num>0){
        int r = num%10;
        push(st,r);
        num/=10;
    }
    int p=0,c=0;
    while(st->top!=-1){
        p = p + pop(st)*power(10,c);
        c++;
    }
    return (p==val);
}

void main(){
    struct stack st;
    int num;
    st.top=-1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(pali(&st,num)){
        printf("It is Palindrome.");
    }
    else{
        printf("Not a Plaindrome.");
    }
    
}