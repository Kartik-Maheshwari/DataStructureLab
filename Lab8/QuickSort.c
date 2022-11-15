#include<stdio.h>
#include"traverse.h"
int partition(int arr[], int low, int high){
    int PE = arr[low];
    int i=low,j=high;
    while(i<j){
        do{
            i++;
        }while(PE>arr[i]);
        do{
            j--;
        }while(PE<arr[j]);
    }
    if(i<j){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
    arr[low]=arr[low]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[low]=arr[low]-arr[j];
    return j;
}

void quicksort(int a[], int low,int high){
    int j=partition(a,low,high);
    quicksort(a,low,j);
    quicksort(a,j+1,high);
}

int main(){
    int arr[100],n;
    printf("Enter the Size of Array:");
    scanf("%d",&n);
    input(arr,n);
    quicksort(arr,0,n-1);
    return 0;
    show(arr,n);
}
