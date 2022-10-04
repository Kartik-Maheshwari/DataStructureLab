//x- x3/3! + x5/5! - x7/7!........ 
#include<stdio.h>
#include<math.h>
int main(){
    int n,fact=1,k=1,x;
    float sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    // for(int i=1;i<=n;i++){
    //     k=1;
    //     if(i%2==0){
    //         k=-1;
    //     }
    //     fact=fact*((2*i)-1);
    //     sum+=(float)k*((x*((2*i)-1))/fact);
    // }
    for(int i=1;i<=n;i++){
        if(i%2==0){
            fact=fact*i;
        }
        fact=fact*(2*i-1);
        sum+=(float)pow(-1,i-1)*(pow(x,2*i-1)/fact);
    }
    printf("\nThe sum of %d terms is : %f",n,sum);
    return 0;
}