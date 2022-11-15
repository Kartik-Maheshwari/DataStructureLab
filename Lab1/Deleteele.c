#include<stdio.h>
#include"traverse.h"

int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[10];
    int s=5,count=s, flag=0,v;
    input(arr,s);
    printf("Enter the number you want to delete:");
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