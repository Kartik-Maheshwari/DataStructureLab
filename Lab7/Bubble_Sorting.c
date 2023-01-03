// Program for Bubble Sort.
#include<stdio.h>
void main(){
    int arr[10],n;
    int i,j,temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe list before sorting is:");
    for (int f=0;f<n;f++){    
        printf("%d ",arr[f]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<=(n-i-1);j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nThe list after sorting is:");
    for (i=0;i<n;i++){    
        printf("%d ",arr[i]);
    }
}