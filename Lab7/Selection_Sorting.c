// Program for Selection Sort.
#include<stdio.h>
void main(){
    int arr[100],n;
    int i,p,t,s,j;
    printf("Enter the number of earrements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe list before sorting is:");
    for (i=0;i<n;i++){    
        printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++){
        s=arr[i];
        p=i;
        for(j=(i+1);j<n;j++){
            if (s>arr[j])
            {
                s=arr[j];
                p=j;
            }
        }
        t=arr[i];
        arr[i]=arr[p];
        arr[p]=t;    
    }
    printf("\nThe list after sorting is:");
    for(i=0;i<n;i++){
         printf("%d ",arr[i]);   
    }
}