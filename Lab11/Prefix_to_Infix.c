#include<stdio.h>

#define size 25
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

int calc(int a,int b,char s){
    switch (s)
    {
    case '+':
        return (a+b);
        break;
    case '-':
        return (a-b);
        break;
    case '*':
        return (a*b);
        break;
    case '/':
        return (a/b);
        break;
    case '%':
        return (a%b);
        break;
    default:
        break;
    }
}
int main(){
    char exp[30];
    //2 5 + 6 2 / 5 * - 7 +
    printf("Enter postfix expression: ");
    gets(exp);
    strrev(exp);
    int i=0;
    s.top=-1;
    while (exp[i]!='\0')
    {
        if(exp[i]!=' '){
            char sym=exp[i];
            if(sym>='0' && sym<='9')
                push(sym - '0');
            else{
                int a = pop();
                int b = pop();
                int num=calc(a,b,sym);
                push(num);
            }
        }
        i++;
    }
    printf("Answer = %d",pop());
    return 0;
}