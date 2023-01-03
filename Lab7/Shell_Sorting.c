#include<stdio.h>
#include"traverse.h"
void shell(int a[],int n){
    for (int interval = n/2; interval > 0; interval /= 2)  {  
        for (int i = interval; i < n; i += 1)  {  
            /* store a[i] to the variable temp and make the ith position empty */  
            int temp = a[i];  
            int j;        
            for (j = i; j >= interval && a[j - interval] > temp; j -= interval)  
                a[j] = a[j - interval];    
            // put temp (the original a[i]) in its correct position  
            a[j] = temp;  
        }  
    }  
}

int main(){
    int arr[10];
    int s=5;
    input(arr,s);
    printf("\nBefore Sorting\n");
    show(arr,s);
    shell(arr,s);
    printf("\nAfter Sorting\n");
    show(arr,s);
    return 0;
}