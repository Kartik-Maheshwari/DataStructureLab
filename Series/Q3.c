//1+ x + x2/2! + x3/3! + x4/4!......


#include<stdio.h>
#include<math.h>

int main(){
    int n,fact=1,x;
    float sum=1.0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    for(int i=2;i<=n;i++){
        fact=fact*(i-1);
        sum+=(float)(pow(x,i-1)/fact);
    }
    printf("\nThe sum of %d terms is : %f",n,sum);
    return 0;
}