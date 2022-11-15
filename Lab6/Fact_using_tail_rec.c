#include<stdio.h>

int rec(int n){
    if(n==1){
        return 1;
    }
    return n*rec(n-1);
}

int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("The Factorial of the number is: %d",rec(num));
    return 0;
}