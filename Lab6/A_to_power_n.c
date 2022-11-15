#include<stdio.h>

int power(int a,int n){
    if(n==1){
        return a;
    }
    return a*power(a,n-1);
}

int main(){
    int n,m;
    printf("Enter the base: ");
    scanf("%d",&n);
    printf("Enter the power: ");
    scanf("%d",&m);
    printf("%d raised to the power %d is: %d",n,m,power(n,m));
    return 0;
}