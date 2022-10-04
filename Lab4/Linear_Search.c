#include<stdio.h>

int search(int arr[],int s,int k){
    int i,count=0;
    for(i=0;i<s;i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;
}

int main(){
    int arrr[]={1,2,3,4,5,6,7,4,4,4};
    int count=search(arrr,10,4);
    if(count){
        printf("Found %d times",count);
    }
    else{
        printf("Not Found.");
    }
    return 0;
}