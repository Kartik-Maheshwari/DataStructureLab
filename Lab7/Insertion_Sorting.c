// Program for Insertion sort.
#include<stdio.h>
void main(){
    int arr[100],n;
    int i,j,x,t;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe list before sorting is:");
    for (i=0;i<n;i++){    
        printf("%d ",arr[i]);
    }
    for(i=1;i<n;i++){
        t=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>t){
            arr[j+1]=arr[j];
            j=j-1;
            arr[j+1]=t;
        }
    }
    printf("\nThe list after sorting is:");
    for(x=0;x<n;x++){
         printf("%d ",arr[x]);   
    }
}