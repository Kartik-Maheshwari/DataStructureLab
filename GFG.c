#include<stdio.h>

int main(){
    int temp=N;
    printf("Enter the number:");
    scanf("%d",&N);
    int i=-5;
    LABEL:
        printf("%d",temp);
        temp=temp+i;
        if(temp<=0){
            i=5;
        }
        if(temp<=N){
            goto LABEL;
        }
    return 0;
}