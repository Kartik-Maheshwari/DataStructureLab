//Program for Merging two Sorted array
#include<stdio.h>
#include"traverse.h"

int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int k=0,arr1[6]={5,6,7,8,10,11}, arr2[5]={1,3,5,15,21},arr3[11],i=0,j=0;
    for(int n=0;n<11;n++){
        if(i<6 && j<5){
            if(arr1[i]<arr2[j]){
                arr3[n]=arr1[i];
                i++;
            }
            else{
                arr3[n]=arr2[j];
                j++;
            }
        }
        else if(i==6){
            arr3[n]=arr2[j];
            j++;
        }
        else if(j==5){
            arr3[n]=arr1[i];
            i++;
        }
    }
    show(arr3,11);
    return 0;
}
