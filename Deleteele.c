#include<stdio.h>
#include"traverse.h"

int main(){
    int arr[10];
    int s=10,count=10, flag=0,v;
    input(arr,s);
    printf("Enter the number you wnat to delete:");
    scanf("%d",&v);
    for(int i=0;i<s;i++){
        if(arr[i]==v){
            count--;
            flag=1;
            if(i==s-1){
                break;
            }
        }
        if(flag==1){
            arr[i]=arr[i+1];
        }
    }
    if(count==s){
        printf("Not Found");
    }
    else{
        printf("Element Deleted\n");
        show(arr,count);
    }
    return 0;
}