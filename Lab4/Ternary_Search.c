// Program for Binary Search.
#include<stdio.h>
 
int TSearch(int arr[],int s, int n){
    int L=0,U=s;
    while(U>=L){
        int mid1 = U/3;
        int mid2= U - U/3;
        if (arr[mid1]==n){
            return 1;
        }
        if(arr[mid2]==n){
            return 1;
        }
        if(n<arr[mid1]){
            U=mid1-1;
        }
        else if(n>arr[mid2]){
            L=mid2 +1;
        }
        else{
            L=mid1+1;
            U=mid2-1;
        }
    }
    return 0;  
}


void main(){
    int l[6]={1,5,6,9,15,25};
    int n,L=0,U=6;
    if(TSearch(l,6,150)){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
}