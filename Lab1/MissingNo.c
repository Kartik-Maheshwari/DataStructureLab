#include<stdio.h>
#include"traverse.h"

int main(){
    int arr[100]={1,2,3,5};
    int s=5,sum=0,a;
    a=(s*(s+1)/2);
    for(int i=0;i<s;i++){
        sum+=arr[i];
    } 
    printf("The Missing Number is:%d",a-sum);
    return 0;
}