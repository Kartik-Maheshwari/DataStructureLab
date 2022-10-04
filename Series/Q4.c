//1- x + x2/2! - x3/3! + x4/4!......
#include<stdio.h>
#include<math.h> 

int main(){
    int n,fact=1,k,x;
    float sum=1;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("\nEnter the value of x:");
    scanf("%d",&x);
    // for(int i=2;i<=n;i++){
    //     fact=fact*(i-1);
    //     sum+=pow(-1,i-1)*((float)(pow(x,i-1))/fact);
    // }
    for(int i=2;i<=n;i++){
        k=1;
        if(i%2==0){
            k=-1;
        }
        fact=fact*(i-1);
        sum+=k*((float)(pow(x,i-1))/fact);
    }
    printf("\nThe sum of %d terms is : %f",n,sum);
    return 0;
}