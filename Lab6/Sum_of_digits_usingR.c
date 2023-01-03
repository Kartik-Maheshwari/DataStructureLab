#include <stdio.h>
int sum=0,a;
int sumR(int num){
  if(num){
    a=num%10;
    sum=sum+a;
    sumR(num/10);
  }
  return sum;
}

int main(){
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("The sum of the digits of the number is :%d",sumR(num));
  return 0;
}