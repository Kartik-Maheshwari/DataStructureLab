#include<stdio.h>
#define size 50
struct stack{
    int data[size];
    int top;
}s;

int push(int n){
    if(s.top==size-1)
        return 0;
    s.data[++s.top]=n;
}

int pop(){
    if(s.top==-1)
        return 0;
    return s.data[s.top--];
}

int isEmpty(){
    return (s.top==-1);
}

int peep(){
    return s.data[s.top];
}

int prcd(char op1,char op2){
    if(op1=='$' || op1=='*' || op1=='/' || op1=='%'){
        return (op2!='$');
    }
    else{
        if(op2=='+' || op2=='-'){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){
    char infix[50], postfix[50];
    printf("Enter postfix expression: ");
    gets(infix);
    char x;
    int i=0,p=0;
    while(infix[i]!='\0'){
        printf("%c\n",infix[i]);
        char sy=infix[i];
        if(sy >='a' && sy<='z' || sy>='A' && sy<='Z' || sy>='0' && sy<='9'){
            postfix[p]=sy;
            p++;
        }
        else if(isEmpty())
            push(sy);
        else if(sy=='(')
            push(sy);
        else if(sy==')'){
            while(!isEmpty() && (peep()!='(')){
                x=pop();
                postfix[p++]=x;
            }
            x=pop();
        }
        else{
            while(!isEmpty() && (peep()!='(') && prcd(peep(),sy)){
                x=pop();
                postfix[p++]=x;
            }
            push(sy);
        }
        i++;
    }
    while(!isEmpty()){
        x=pop();
        postfix[p++]=x;
    }
    postfix[p]='\0';
    printf("\nPostfix = %s",postfix);
    return 0;
}