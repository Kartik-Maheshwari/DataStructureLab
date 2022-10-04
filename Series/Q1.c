//Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................
#include<stdio.h>

int main(){
    int n,fact=1;
    long long int sum=1;
    printf("Emter the number of terms:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        fact=fact*i;
        sum+=fact;
    }
    printf("The sum of %d terms is : %d",n,sum);
    return 0;
}