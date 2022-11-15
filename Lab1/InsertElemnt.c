#include<stdio.h>

void insert(int arr[],int e,int s, int p){
    if(p-1>0 && p<s){
        arr[p-1]=e;
        printf("\nInserted Successfully.");
        printf("\nThe Array is:");
        for(int i=0;i<s;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("\nInvalid.");
    }
}
int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[8];
    for(int i=0;i<8;i++){
        printf("Enter arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    insert(arr,1000,8,5);
    return 0;
}