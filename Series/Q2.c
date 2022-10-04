//Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5

#include<stdio.h>

int main(){
    int n,fact=1;
    float sum=1;
    printf("Emter the number of terms:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        fact=fact*(i-1);
        sum+=fact;
    }
    printf("The sum of %d terms is : %f",n,sum);
    return 0;
}