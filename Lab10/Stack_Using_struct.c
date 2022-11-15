#include<stdio.h>
#define size 10

struct Stack
{
    int data[size];     //Default value is garbage.
    int top;    //By default it will store garbage value
};

struct Stack init(struct Stack st){
    st.top=-1;
    return st;
}

int isEmpty(struct Stack st){
    return (st.top==-1);
}

struct Stack push(struct Stack st){
    int item;
    if(st.top == (size-1)){
        printf("Stack is full");
    }
    else{
        st.top=st.top+1;
        printf("Enter the Element: ");
        scanf("%d",&item);
        st.data[st.top]=item;
        return st;
    }
}
struct Stack pop(struct Stack st){
    int item;
    if(isEmpty(st)){
        printf("Stack Empty");
    }else{
        item=st.data[st.top];
        st.top=st.top-1;
        printf("The popped item is %d",item);
        return st;
    }
}
struct Stack show(struct Stack st){
    if(st.top == -1){
        printf("Stack Empty");
    }else{
        printf("\nStack items are: \n");
        for(int i=st.top;i>=0;i--){
                printf("%d\n",st.data[i]);
        }
    }
}
int menu(){
    int c;
    printf("\n");
    printf("\n1....Push.\n");
    printf("2....Pop.\n");
    printf("3....Show.\n");
    printf("4....Peek.\n");
    printf("5....Reset.\n");
    printf("6....Exit.\n");
    printf("Enter Your Choice: ");
    scanf("%d",&c);
    return c;
}

void peek(struct Stack st){
    if(isEmpty(st)){
        printf("Stack is Empty.");
    }
    else{
    printf("\nTop item = %d",st.data[st.top]);
    }
}
int main(){
    struct Stack s;     //here s is a sturct type variable, it is an object of structure.
    int choice;
    s=init(s);
    do{
        choice=menu();
        switch (choice)
        {
        case 1:
            s=push(s);
            break;
        case 2:
            s=pop(s);
            break;
        case 3:
            show(s);
            break;
        case 4:
            peek(s);
            break;
        case 5:
            init(s);
            break;
        case 6:
            printf("See you Later.");
            break;
        default:
            printf("Invalid Coice");
            break;
        }
    }while(choice!=6);
    return 0;
}
//     initialize();
//     do{
//         printf("1....Push.\n");
//         printf("2....Pop.\n");
//         printf("3....Show.\n");
//         printf("4....Peek.\n");
//         printf("5....Reset.\n");
//         printf("6....Exit.\n");
//         printf("Enter Your Choice: ");
//         scanf("%d",&c);
//         switch (c)
//         {
//         case 1:
//             push();
//             break;
//         case 2:
//             pop();
//             break;
//         case 3:
//             show();
//             break;
//         case 4:
//             peek();
//             break;
//         case 5:
//             initialize();
//             break;
//         case 6:
//             printf("See you Later.");
//             break;
//         default:
//             printf("Invalid Coice");
//             break;
//         }
//     }while(c!=6);
    
//     return 0;
// }

// void initialize(){
//     s.top=-1;
