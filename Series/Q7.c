//Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
#include<stdio.h>
#include<math.h>

int main(){
    int n,fact=1,k=1,x;
    float sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            fact=fact*i;
        }
        fact=fact*(2*i-1);
        sum+=(float)pow(-1,i-1)*(i/fact);
    }
    printf("\nThe sum of %d terms is : %f",n,sum);

    return 0;
}