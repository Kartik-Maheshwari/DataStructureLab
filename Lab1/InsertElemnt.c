#include<stdio.h>

void insert(int arr[],int e,int s, int p){
    if(p-1>0 && p<s)
    {
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
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    insert(arr,1000,10,5);
    return 0;
}