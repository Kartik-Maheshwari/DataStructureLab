#include<stdio.h>
int input(int arr[],int s){
    for(int i=0;i<s;i++){
        printf("Enter arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    return arr;
}

int show(int arr[],int s){
    for(int k=0;k<s;k++){
        printf("%d ",arr[k]);
    }
}
