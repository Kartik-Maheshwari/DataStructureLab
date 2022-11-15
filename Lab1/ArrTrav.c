#include<stdio.h>

int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int arr[100],s;
    printf("Enter the size of Array: ");
    scanf("%d",&s);
    for(int i=0;i<s;i++){
        printf("Enter arr[%d]:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is: ");
    for(int k=0;k<s;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}
