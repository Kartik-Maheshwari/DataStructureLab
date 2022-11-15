#include<stdio.h>

int ins(int arr[],int count,int value){
    int temp=count;
    arr[temp]=value;
    while(temp>0){
        if(arr[temp]>=arr[temp-1]){
            break;
        }
        else{
            int t= arr[temp];
            arr[temp]=arr[temp-1];
            arr[temp-1]=t;
        }
        temp--;
    }
}
int main(){
    printf("Name: Kartik Maheshwari \tRoll No: 2100320120086  \t Branch and Section: CS-B\n");
    int num[15]={10,20,30,40,50,60,70,80,90,100};
    ins(num,10,75);
    printf("Numbers are:\n");
    for(int i=0;i<11;i++){
        printf("%d ",num[i]);
    }
}