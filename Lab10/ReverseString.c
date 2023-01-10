//Program to Reverse the given String using Stack.
#include<stdio.h>
#define size 30

struct Stack
{
    int data[size];     
    int top;    
}s;

int isEmpty(){
    return (s.top==-1);
}

void push(char val){
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
                printf("%c\n",s.data[i]);
        }
    }
}

void rev(char strs[20]){
    int i=0;
    while(strs[i]!='\0'){
        push(strs[i]);
        i++;
    }
    i=0;
    while(!isEmpty()){
        strs[i]=pop(strs[i]);
        i++;
    }
}

int main(){
    s.top=-1;
    char ss[20];
    printf("Enter a string(size less than 20): ");
    gets(ss);
    rev(ss);
    puts(ss);
    return 0;
}