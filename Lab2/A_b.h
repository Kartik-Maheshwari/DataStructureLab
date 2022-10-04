#include<stdio.h>

void A_B(int arr1[],int arr2[],int s1,int s2){
    int arr3[100],i=0,j=0,n=s1+s2,k=0;
    while(n>0){
        if(i<s1 && j<s2){
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                i++;
                k++;
            }
            else if(arr1[i]==arr2[j]){
                i++;
                j++;
                n--;
            }
            else{
                j++;
            }
        }
        n--;
    }
    for(int t=0;t<k;t++){
        printf("%d ",arr3[t]);
    }
}