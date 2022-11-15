#include<stdio.h>
#define size 50
int top, stack[size];

void initialize(){
    top=-1;
}

void push(int n){
    stack[++top]=n;
}

int pop(){
    return (stack[top--]);
}

int main(){
    int n,sum=0;
    initialize();
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        push(n%2);
        n=n/2;
    }
    while(top>-1){
        sum = sum*10 + pop();
    }
    printf("The Binary Number is: %d",sum);
    return 0;
}