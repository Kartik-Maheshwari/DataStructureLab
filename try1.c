#include<stdio.h>
int main(){
    // static int arr[]={1,3,5};
    // printf("%d",arr[-5]);
    int arr[]={2,3,9};
    printf("%p",arr);//base address
    printf("\n%p",&arr[0]);//address of 1st element
    int *q=arr;//q will store the base address of the arr
    printf("\n%p",q);//will print the address
    printf("\n%d",*q);//will print the value at q
    printf("\n%d",arr[0]);
    printf("\n%d",*(&arr[0]));
    //printf("\n%d",*q[0]);
    printf("\n%d",q[0]);
    return 0;
}