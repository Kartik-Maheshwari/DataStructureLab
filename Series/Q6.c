//1- x2/2! + x4/4! - x6/6!........ 
#include<stdio.h>
#include<math.h>
int main(){
    int n,fact=1,k=1,x;
    float sum=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    for(int i=2;i<=n;i++){
        if(i%2!=0){
            fact=fact*i;
        }
        fact=fact*(2*(i-1));
        sum+=(float)pow(-1,i-1)*(pow(x,2*(i-1))/fact);
    }
    printf("\nThe sum of %d terms is : %f",n,sum);
    return 0;
}