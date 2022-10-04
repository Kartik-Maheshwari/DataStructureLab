#include<stdio.h>

int main(){
    int arr[100],i,w,s,ba,*p,add;
    printf("Enter size of Array:");
    scanf("%d",&s);
    // printf("\nEnter the memory size:");
    // scanf("%d",w);
    w=sizeof(int);
    printf("Enter the index:");
    scanf("%d",&i);
    ba = arr;
    printf("\n%d",ba);
    add=ba+ (i)*w;
    printf("\n%d",add);
    if(add==&arr[i]){
        printf("\nAddress is correct");
    }
    else{
        printf("\nNO");
    }
    return 0;
}