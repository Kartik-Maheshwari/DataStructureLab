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

int menu(){
    int c;
    printf("1.  Decimal To Binary.");
    printf("2.  Decimal To Octal.");
    printf("3.  Decimal To Hexadecimal.");
    printf("Enter Your Choice: ");
    scanf("%d",&c);
    return c;
}

void find(int num,int base){
    char Hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(num>0){
            int r = num%base;
            push(&st,r);
            num/=base;
        }
        printf("The Hexadecimal Number is:\n");
        while(st.top!=-1){
            int r=pop(&st);
            printf("%c",Hex[r]);
        }
}

void main(){
    struct stack st;
    int num,base;
    st.top=-1;
    printf("Enter a number: ");
    scanf("%d",&num);
    int choice=menu();
    if(choice == 1){
        base=2;
        find(num,base);
    }
    else if(choice== 2){
        base=8;
        find(num,base);
    }
    else if(choice == 3){
        base=16;
        find(num,base);
    }
    else{
        printf("Invalid Choice;");
    }
        
}
