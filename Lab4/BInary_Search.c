// Program for Binary Search.
#include<stdio.h>
 
int BSearch(int arr[],int s, int n){
    int mid,L=0,U=s;
    while(L<=U){
        mid=(L+U)/2;
        if (arr[mid]==n){
            return 1;
        }
        else{
            if (arr[mid]<n){
                L=(mid+1);
            }
            else{
                U=(mid-1);
            }
        }
    }
    if (L>U){
        printf("\nNot Found");
    }   
    return 0;
}


void main(){
    int l[6]={1,5,6,9,15,25};
    int n,mid,L=0,U=6;
    if(BSearch(l,6,15)){
        printf("Found");
    }
    else{
        printf("Not Found");
    };
}