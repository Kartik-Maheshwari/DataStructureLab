#include<stdio.h>

void leap(int n){
    if (n%4==0 &! n%100==0 || n%400==0){
        printf("It is Leap Year.");
    }
    else{
        printf("It is Not Leap Year.");
    }
}

int main(){
    int y;
    printf("Enter the Year:");
    scanf("%d",&y);
    leap(y);
}